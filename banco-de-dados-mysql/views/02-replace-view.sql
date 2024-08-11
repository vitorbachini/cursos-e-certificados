CREATE OR REPLACE VIEW vendas_por_cliente AS
SELECT
	c.customer_id,
    c.first_name,
    c.last_name,
    p.amount
FROM customer c 
JOIN payment p ON c.customer_id = p.payment_id
ORDER BY p.amount DESC