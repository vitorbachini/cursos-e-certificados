SELECT 
	SalesOrderNumber,
	OrderQuantity,
	UnitPrice,
	SalesAmount
FROM FactResellerSales
WHERE SalesAmount BETWEEN 5000 AND 10000
AND OrderQuantity BETWEEN 5 AND 15
ORDER BY OrderQuantity