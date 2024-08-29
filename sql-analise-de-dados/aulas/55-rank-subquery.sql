-- Rank com Subquery

SELECT * 
FROM (
	SELECT 
		EmployeeKey,
		Title,
		HireDate,
		RANK() OVER (ORDER BY HireDate ASC, EmployeeKey) as 'Rank'
	FROM DimEmployee
) Dados
WHERE Rank IN(1,2,3);

---------

SELECT * 
FROM (
	SELECT 
		EmployeeKey,
		Title,
		HireDate,
		RANK() OVER (ORDER BY HireDate ASC, EmployeeKey) as 'Rank'
	FROM DimEmployee
) Dados
WHERE Rank BETWEEN 1 AND 10;

----------

SELECT 
	EmployeeKey,
	Title,
	HireDate,
	RANK() OVER (ORDER BY HireDate ASC) as 'Rank'
INTO ##temp_rank
FROM DimEmployee;         -- Outra forma de fazer a consulta

SELECT *
FROM ##temp_rank
WHERE Rank IN (1,2,3,4,5);