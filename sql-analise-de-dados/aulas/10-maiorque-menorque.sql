SELECT 
	SalesOrderNumber,
	OrderQuantity,
	UnitPrice,
	SalesAmount
FROM FactResellerSales
WHERE SalesAmount > 2000
ORDER BY 4

-- WHERE OrderQuantity < 30
-- ORDER BY SalesAmount DESC;