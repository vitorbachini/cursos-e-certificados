SELECT 
	MAX(amount) AS Maior,
	MIN(amount) AS Menor,
    AVG(amount) AS Media,
    SUM(amount) AS 'Total em vendas',
    COUNT(amount) AS 'Total de vendas'
FROM payment
WHERE staff_id = 2