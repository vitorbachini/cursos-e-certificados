SELECT 
	ProductKey,
	MIN(ExtendedAmount) AS 'Valor_Min_Venda',
	MAX(ExtendedAmount) AS 'Valor_Max_Venda',
	SUM(ExtendedAmount) AS 'Soma_Vendas',
	AVG(ExtendedAmount) AS 'Media_Vendas'
FROM FactResellerSales
GROUP BY ProductKey
ORDER BY ProductKey;

SELECT
	EmployeeKey,
	MIN(ExtendedAmount) AS 'Venda_Min',
	MAX(ExtendedAmount) AS 'Venda_Max',
	SUM(ExtendedAmount) AS 'Soma_Vendas',
	AVG(ExtendedAmount) AS 'Media_Vendas'
FROM FactResellerSales
GROUP BY EmployeeKey
ORDER BY EmployeeKey