USE AdventureWorksDW2019;

SELECT TOP 10 
	SalesOrderNumber,
	CustomerKey,
	SalesAmount,
	OrderDate,
	CAST(OrderDate AS DATE),
	CONVERT(VARCHAR, OrderDate, 103)
FROM FactInternetSales;

SELECT
	GETDATE(),
	CAST(GETDATE() AS DATE),
	CONVERT(VARCHAR, GETDATE(), 103)