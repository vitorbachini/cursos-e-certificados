USE AdventureWorksDW2019;

SELECT *
INTO tb_temp_employee
FROM DimEmployee;				  -- criação da tabela temporária

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
FROM tb_temp_employee;

UPDATE tb_temp_employee
SET EndDate = '2022-11-10'
where EmployeeKey IN (1,2);      -- update na tabela temp

DROP TABLE tb_temp_employee		 -- exclusão da tabela