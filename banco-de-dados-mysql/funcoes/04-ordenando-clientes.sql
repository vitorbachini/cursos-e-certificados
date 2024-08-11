SELECT 
	c.customer_id,
    c.first_name,
    c.last_name,
    SUM(amount) AS total
    
FROM  payment p
JOIN customer c USING(customer_id)

GROUP BY customer_id
ORDER BY total DESC;