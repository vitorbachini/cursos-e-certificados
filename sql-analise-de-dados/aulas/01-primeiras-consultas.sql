USE AdventureWorksDW2019;

SELECT TOP(10)
	EmployeeKey,
	FirstName,
	LastName
FROM dbo.DimEmployee;

SELECT TOP(10)
	FirstName,
	Title
FROM dbo.DimEmployee;
