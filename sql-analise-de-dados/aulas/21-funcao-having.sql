SELECT
	EmployeeKey,
	MIN(ExtendedAmount) AS 'Venda_Min',
	MAX(ExtendedAmount) AS 'Venda_Max',
	SUM(ExtendedAmount) AS 'Soma_Vendas',
	AVG(ExtendedAmount) AS 'Media_Vendas'
FROM FactResellerSales
GROUP BY EmployeeKey
HAVING SUM(ExtendedAmount) > 4000000
ORDER BY EmployeeKey

SELECT 
	FirstName,
	COUNT(FirstName) AS 'Qtd'
FROM DimEmployee
WHERE Gender = 'M' -- Filtrar Colunas
GROUP BY FirstName
HAVING COUNT(FirstName) > 3 -- Filtrar os Agrupamentos