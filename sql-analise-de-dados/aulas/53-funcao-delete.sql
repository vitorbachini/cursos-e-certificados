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
	END AS 'Status',
	DATEDIFF(YEAR, StartDate, GETDATE()) AS 'Tempo de Trabalho/Anos'  -- diferença de datas
FROM tb_temp_employee;

DELETE
FROM tb_temp_employee
WHERE EmployeeKey = 2;


----------------------------

DELETE
FROM tb_temp_employee
WHERE EndDate IS NOT NULL;

DELETE 
FROM tb_temp_employee
WHERE MiddleName IS NULL;


----------------------------

DELETE
FROM tb_temp_employee
WHERE DATEDIFF(YEAR, StartDate, GETDATE()) = 16  -- excluindo funcionarios que possuem 16 anos de trabalho
AND EndDate IS NULL;

