SELECT 
	SalesOrderNumber,
	ExtendedAmount,
	CASE
		WHEN ExtendedAmount < 3000
		THEN 'Venda Baixa'
		WHEN ExtendedAmount >= 3000
		THEN 'Venda Alta'
	ELSE 'N�o informado'
	END AS 'Vendas'
FROM FactResellerSales
ORDER BY ExtendedAmount;

SELECT 
	SalesOrderNumber,
	COUNT(CASE
		WHEN ExtendedAmount < 3000
		THEN 1
	END) AS 'Venda Baixa',
	COUNT(CASE
		WHEN ExtendedAmount >= 3000
		THEN 1
	END) AS 'Venda Alta'
FROM FactResellerSales
GROUP BY SalesOrderNumber;
