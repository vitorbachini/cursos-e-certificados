-- create view
-- alter view
-- drop view

CREATE OR ALTER VIEW VW_production AS 
	SELECT 
		EmployeeKey,
		CONCAT(FirstName, ' ' ,LastName) AS 'Nome_Completo',
		Title,
		Phone,
		EmailAddress
	FROM DimEmployee
	WHERE DepartmentName = 'Production'
;