SELECT DISTINCT
	a.user_id,
	a.user_name
FROM Acessos a
LEFT JOIN Compras c ON a.user_id = c.user_id
WHERE c.user_id IS NULL

-- left join
-- usuarios que acessaram e não compraram