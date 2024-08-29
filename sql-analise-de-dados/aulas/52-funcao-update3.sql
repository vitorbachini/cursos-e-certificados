USE AdventureWorksDW2019;

SELECT 
	EmployeeKey,
	FirstName,
	MiddleName,
	LastName,
	StartDate,
	EndDate,
	CASE
	WHEN
		EndDate IS NULL
	THEN 'Ativo' ELSE 'Demitido'
	END AS 'Status'
FROM tb_temp_employee


UPDATE tb_temp_employee
SET MiddleName = 'R'
WHERE EmployeeKey IN (3,4,5)
AND MiddleName IS NULL
AND EndDate IS NULL;

UPDATE tb_temp_employee
SET EndDate = GETDATE()
WHERE EmployeeKey BETWEEN 100 AND 200;