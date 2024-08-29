SELECT 
	ProductKey,
	COUNT(ProductKey) AS 'Qtd'
FROM FactResellerSales
GROUP BY ProductKey

--SELECT 
--	Title,
--	COUNT(Title) AS 'Qtd'
--FROM DimEmployee
--GROUP BY Title

--SELECT 
--	DepartmentName,
--	COUNT(DepartmentName) AS 'Qtd'
--FROM DimEmployee
--GROUP BY DepartmentName