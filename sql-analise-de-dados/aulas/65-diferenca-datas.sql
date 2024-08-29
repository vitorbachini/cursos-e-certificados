USE AdventureWorksDW2019;

-- Funcion�rios demitidos

SELECT
	EmployeeKey,
	FirstName,
	LastName,
	HireDate,
	EndDate
FROM DimEmployee
WHERE EndDate IS NOT NULL
;

-- Tempo de Trabalho na empresa dos funcion�rios demitidos

SELECT
	EmployeeKey,
	FirstName,
	LastName,
	HireDate,
	EndDate,
	DATEDIFF(YEAR, HireDate, EndDate) AS 'Anos de Trabalho'
FROM DimEmployee
WHERE EndDate IS NOT NULL
;

-- Funcion�rios Ativos na emrpesa

SELECT
	EmployeeKey,
	FirstName,
	LastName,
	HireDate,
	DATEDIFF(YEAR, HireDate, GETDATE()) AS 'Anos Trabalhando'
FROM DimEmployee
WHERE EndDate IS NULL
;


-- Quantos anos tem o funcion�rio

SELECT
	EmployeeKey,
	FirstName,
	LastName,
	BirthDate,
	DATEDIFF(YEAR, BirthDate, GETDATE()) AS 'Idade'
FROM DimEmployee
ORDER BY BirthDate ASC
;


-- Faixa de Idades dos Funcion�rios

SELECT
	EmployeeKey,
	FirstName,
	LastName,
	BirthDate,
	DATEDIFF(YEAR, BirthDate, GETDATE()) AS 'Idade',
	CASE
		WHEN DATEDIFF(YEAR, BirthDate, GETDATE()) < 21
			THEN '0 a 20 anos'
		WHEN DATEDIFF(YEAR, BirthDate, GETDATE()) BETWEEN 21 AND 40
			THEN '21 a 40 anos'
		WHEN DATEDIFF(YEAR, BirthDate, GETDATE()) BETWEEN 41 AND 60
			THEN '41 a 60 anos'
		ELSE '+ de 60 anos'
	END AS 'Faixa Et�ria'
FROM DimEmployee
ORDER BY BirthDate ASC
;

----------- Agrupando pro Faixa Et�ria

SELECT 
	COUNT(EmployeeKey) as 'Quantidade',
	Faixa_Etaria
FROM(
	SELECT
		EmployeeKey,
		CASE
			WHEN DATEDIFF(YEAR, BirthDate, GETDATE()) < 21
				THEN '0 a 20 anos'
			WHEN DATEDIFF(YEAR, BirthDate, GETDATE()) BETWEEN 21 AND 40
				THEN '21 a 40 anos'
			WHEN DATEDIFF(YEAR, BirthDate, GETDATE()) BETWEEN 41 AND 60
				THEN '41 a 60 anos'
			ELSE '+ de 60 anos'
		END AS 'Faixa_Etaria'
	FROM DimEmployee
) AS Data
GROUP BY Faixa_Etaria
ORDER BY 1
;
