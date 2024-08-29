-- Rank + SubQuery + Tb Temporária
-- Por colaborador o ranking de vendas por produtos

SELECT *
FROM(
	SELECT 
			EmployeeKey,
			ProductKey,
			SUM(SalesAmount) as 'Vendas',
			DENSE_RANK() OVER (PARTITION BY EmployeeKey ORDER BY SUM(SalesAmount) DESC) as 'Ranking_Vendas'
		FROM FactResellerSales
		GROUP BY EmployeeKey, ProductKey
) AS Dados
WHERE Ranking_Vendas = 1   -- o produto mais vendido por cada funcionário

-----------------------


SELECT *
FROM(
	SELECT 
			EmployeeKey,
			ProductKey,
			SUM(SalesAmount) as 'Vendas',
			DENSE_RANK() OVER (PARTITION BY EmployeeKey ORDER BY SUM(SalesAmount) ASC) as 'Ranking_Vendas'
		FROM FactResellerSales
		GROUP BY EmployeeKey, ProductKey
) AS Dados
WHERE Ranking_Vendas = 1   -- o produto menos vendido por cada funcionário