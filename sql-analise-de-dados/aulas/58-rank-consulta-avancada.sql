-- Rank + SubQuery + Tb Temporária
-- Por colaborador o ranking de vendas por produtos
-- Left Join

SELECT *
FROM(
	SELECT
		f.EmployeeKey,
		e.FirstName,
		e.LastName,
		f.ProductKey,
		p.EnglishProductName,
		SUM(f.SalesAmount) AS 'Soma_Vendas',
		DENSE_RANK() OVER (PARTITION BY f.EmployeeKey ORDER BY SUM(f.SalesAmount) DESC) AS 'Ranking_Vendas'

	FROM FactResellerSales AS f
	LEFT JOIN DimEmployee  AS e ON f.EmployeeKey = e.EmployeeKey 
	LEFT JOIN DimProduct   AS p ON f.ProductKey = p.ProductKey
	GROUP BY 
		f.EmployeeKey, e.FirstName, e.LastName, f.ProductKey, p.EnglishProductName
) AS Dados
WHERE Ranking_Vendas = 1