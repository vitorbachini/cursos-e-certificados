-- RANK E DENSE RANK

SELECT 
	EmployeeKey,
	Title,
	HireDate,
	RANK() OVER (ORDER BY HireDate ASC) as 'Rank'
FROM DimEmployee


------

SELECT 
	EmployeeKey,
	Title,
	HireDate,
	DENSE_RANK() OVER (ORDER BY HireDate ASC) as 'Dense Rank'
FROM DimEmployee

------

SELECT 
	EmployeeKey,
	Title,
	HireDate,
	RANK() OVER (ORDER BY HireDate ASC, EmployeeKey) as 'Rank'
FROM DimEmployee


-----

SELECT 
	EmployeeKey,
	Title,
	HireDate,
	RANK() OVER (PARTITION BY Title ORDER BY HireDate ASC) as 'Rank'
FROM DimEmployee
