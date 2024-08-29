--SELECT * 
--FROM FactResellerSales

SELECT 
	MIN(ExtendedAmount) AS 'Valor Mínimo' 
FROM FactResellerSales

SELECT 
	MAX(ExtendedAmount) AS 'Valor Máximo' 
FROM FactResellerSales

SELECT 
	SUM(ExtendedAmount) AS 'Soma' 
FROM FactResellerSales

SELECT 
	AVG(ExtendedAmount) AS 'Média' 
FROM FactResellerSales