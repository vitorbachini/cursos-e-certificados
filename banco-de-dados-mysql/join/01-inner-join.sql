SELECT * 
FROM customer
JOIN payment ON customer.customer_id = payment.payment_id;