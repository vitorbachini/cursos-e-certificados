SELECT 
	a.user_id,
	a.user_name
FROM Acessos a
INNER JOIN Compras c ON a.user_id = c.user_id

-- join ou inner join
-- usuarios que acessaram e compraram algum produto