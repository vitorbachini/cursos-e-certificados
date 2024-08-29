SELECT 
	v.order_id,
	v.total_price,
	o.status
FROM Vendas AS v
JOIN Ordens AS o -- JOIN OU INNER JOIN relaciona os dados que possuem informações iguais
ON v.order_id = o.id 


SELECT *
FROM Vendas AS v
LEFT JOIN Ordens AS o -- LEFT JOIN prioriza a primeira tabela 'Vendas'
ON v.order_id = o.id

SELECT *
FROM Vendas AS v
RIGHT JOIN Ordens AS o -- RIGHT JOIN prioriza a segunda tabela 'Ordens'
ON v.order_id = o.id

SELECT *
FROM Vendas AS v
FULL JOIN Ordens AS o -- FULL JOIN traz todos os dados 
ON v.order_id = o.id