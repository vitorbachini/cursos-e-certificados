SELECT *
FROM DimEmployee
WHERE FirstName NOT IN ('Guy', 'Roberto', 'Thierry', 'Jossef')
AND DepartmentName IN ('Marketing', 'Production')

-- WHERE EmployeeKey IN ('2','5', '7')