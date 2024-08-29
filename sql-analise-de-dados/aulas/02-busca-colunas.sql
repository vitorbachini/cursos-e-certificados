SELECT 
	ProductKey,
	SalesOrderNumber,
	SalesTerritoryKey,
	OrderDateKey
FROM FactResellerSales;

EXEC sp_columns FactResellerSales;