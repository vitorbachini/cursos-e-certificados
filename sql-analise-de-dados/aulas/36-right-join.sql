SELECT DISTINCT
	c.user_id,
	c.user_name,
	a.type
FROM Acessos a
RIGHT JOIN Compras c ON a.user_id = c.user_id
WHERE a.type IS NULL

-- right join
-- usuarios que fizeram compras e não têm acesso