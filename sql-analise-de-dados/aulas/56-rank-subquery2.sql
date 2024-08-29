-- Rank + SubQuery + Tb Temporária

USE AdventureWorksDW2019;

SELECT *
FROM(
	SELECT 
		EmployeeKey,
		SUM(SalesAmount) as 'Vendas',
		DENSE_RANK() OVER (ORDER BY SUM(SalesAmount) DESC) AS 'Ranking_Vendas'
	FROM FactResellerSales
	GROUP BY EmployeeKey
) AS DADOS 
WHERE Ranking_Vendas IN (1,2,3)

-------------------

SELECT 
		EmployeeKey,
		SUM(SalesAmount) as 'Vendas',
		DENSE_RANK() OVER (ORDER BY SUM(SalesAmount) DESC) AS 'Ranking_Vendas'
	INTO ##temp_rank
	FROM FactResellerSales
	GROUP BY EmployeeKey

SELECT *
FROM ##temp_rank
WHERE Ranking_Vendas IN (1,2,3)


--- Resultados iguais de maneiras diferentes