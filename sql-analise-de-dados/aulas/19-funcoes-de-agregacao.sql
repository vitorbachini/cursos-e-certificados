--SELECT * 
--FROM FactResellerSales

SELECT 
	MIN(ExtendedAmount) AS 'Valor M�nimo' 
FROM FactResellerSales

SELECT 
	MAX(ExtendedAmount) AS 'Valor M�ximo' 
FROM FactResellerSales

SELECT 
	SUM(ExtendedAmount) AS 'Soma' 
FROM FactResellerSales

SELECT 
	AVG(ExtendedAmount) AS 'M�dia' 
FROM FactResellerSales