SELECT DISTINCT
	FirstName
FROM DimCustomer;

SELECT 
	COUNT(FirstName)
FROM DimCustomer
WHERE FirstName = 'Claudia';