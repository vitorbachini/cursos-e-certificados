SELECT 
	c.customer_id,
    c.first_name,
    c.last_name,
    SUM(amount) AS total,
    COUNT(amount) AS compras
    
FROM  payment p
JOIN customer c USING(customer_id)

GROUP BY customer_id
HAVING total >= 150 AND compras >= 35 -- o where não pode ser utilizando pois teria erro de sintaxe
ORDER BY total DESC;