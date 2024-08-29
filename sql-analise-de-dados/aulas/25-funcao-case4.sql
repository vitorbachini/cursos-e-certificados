SELECT 
	SalesOrderNumber,
	OrderDate,
	YEAR(OrderDate) as 'Year',
	MONTH(OrderDate) as 'Month',
	DAY(OrderDate) as 'Day'
FROM FactResellerSales;

-------------------------

SELECT
	YEAR(OrderDate) as 'Year',
	MONTH(OrderDate) as 'Month',
	DAY(OrderDate) as 'Day',
	COUNT(
		CASE
			WHEN ExtendedAmount < 3000
			THEN 1
		END) as 'Vendas Baixas',
	COUNT(
		CASE
			WHEN ExtendedAmount >= 3000
			THEN 1
		END) as 'Vendas Altas'
FROM FactResellerSales
GROUP BY 
	YEAR(OrderDate),
	MONTH(OrderDate),
	DAY(OrderDate)
ORDER BY 
	YEAR(OrderDate),
	MONTH(OrderDate),
	DAY(OrderDate);

------------------------------

SELECT
	YEAR(OrderDate) as 'Year',
	MONTH(OrderDate) as 'Month',
	COUNT(
		CASE
			WHEN ExtendedAmount < 3000
			THEN 1
		END) as 'Vendas Baixas',
	COUNT(
		CASE
			WHEN ExtendedAmount >= 3000
			THEN 1
		END) as 'Vendas Altas'
FROM FactResellerSales
WHERE
	YEAR(OrderDate) = 2011
GROUP BY 
	YEAR(OrderDate),
	MONTH(OrderDate)
ORDER BY 
	YEAR(OrderDate),
	MONTH(OrderDate)