USE Ecommerce;

SELECT DATEADD(MONTH,1,GETDATE())
SELECT DATEADD(YEAR,5,GETDATE())

SELECT CAST(DATEADD(YEAR,2,GETDATE()) AS DATE)
SELECT CONVERT(VARCHAR,DATEADD(DAY,15,GETDATE()), 103) -- especifico do sql server

SELECT DATEADD(MONTH, -2,GETDATE())

-------------------------------

SELECT
	id,
	CONVERT(VARCHAR, created_at, 103) AS 'Data de Venda',
	CONVERT(VARCHAR, DATEADD(MONTH, 2, created_at), 103) AS 'Data de Pagamento'
FROM Ordens
;