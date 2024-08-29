SELECT SYSDATETIME() -- Data e horário do computador
SELECT SYSDATETIMEOFFSET() -- Traz junto o fuso horário
SELECT SYSUTCDATETIME() -- Ignora o fuso horário

SELECT CURRENT_TIMESTAMP
SELECT GETDATE()
SELECT GETUTCDATE()

-- Formato Texto
SELECT DATENAME(WEEKDAY, GETDATE())
SELECT DATENAME(DAY, GETDATE())
SELECT DATENAME(MONTH, GETDATE())
SELECT DATENAME(YEAR, GETDATE())

USE Ecommerce;

SELECT 
	*,
	DATENAME(YEAR, created_at) AS 'ano_txt',
	DATENAME(MONTH, created_at) AS 'mes_txt',
	DATENAME(DAY, created_at) AS 'dia_txt'
FROM Ordens;

-- Relatório prático em formato texto

SELECT 
	DATENAME(YEAR, created_at) AS 'ano_txt',
	DATENAME(MONTH, created_at) AS 'mes_txt',
	COUNT(id) AS 'Quantidade de Vendas'
FROM Ordens
GROUP BY 
	DATENAME(YEAR, created_at), DATENAME(MONTH, created_at)
ORDER BY COUNT(id) DESC;

------------------------------------

-- Formato Inteiro

SELECT YEAR (GETDATE())
SELECT MONTH (GETDATE())
SELECT DAY (GETDATE())

-- Parte da Data

SELECT DATEPART(YEAR, GETDATE())
SELECT DATEPART(MONTH, GETDATE())
SELECT DATEPART(DAY, GETDATE())
SELECT DATEPART(HOUR, GETDATE())
SELECT DATEPART(MINUTE, GETDATE())
SELECT DATEPART(SECOND, GETDATE())

-- Relatório prático em formato inteiro -> vendas jan 2019/dia

SELECT 
	DATEPART(DAY, created_at) AS 'Dia',
	COUNT(id) AS 'Quantidade de Vendas'
FROM Ordens
WHERE YEAR(created_at) = 2019
AND MONTH(created_at) = 1
GROUP BY 
	DATEPART(DAY, created_at)
;