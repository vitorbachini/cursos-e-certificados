SELECT 
	c.customer_id, 
    c.first_name, 
    c.last_name,
	a.address,
    p.rental_id,
    p.amount
FROM customer c
JOIN payment p ON c.customer_id = p.payment_id
JOIN address a ON c.customer_id = a.address_id;