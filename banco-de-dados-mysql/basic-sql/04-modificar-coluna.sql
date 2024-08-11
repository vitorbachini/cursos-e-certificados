SELECT customer_id, amount, amount - (amount * 0.10) AS '10% discount'
FROM payment
WHERE customer_id = 1;