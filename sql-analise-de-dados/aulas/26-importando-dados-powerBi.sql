SELECT
	ProductKey,
	SalesOrderNumber,
	OrderQuantity,
	UnitPrice,
	ExtendedAmount
FROM FactResellerSales
WHERE ExtendedAmount > 5000;