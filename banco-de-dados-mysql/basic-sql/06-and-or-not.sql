SELECT * from payment
-- WHERE staff_id = 1 AND amount = 0.99
-- WHERE staff_id = 1 OR amount = 0.99
WHERE NOT staff_id = 1 AND amount = 0.99;