SELECT
	u.user_name as 'Nome_Cadastro',
	u.id as 'ID_Cadastro',
	c.user_id as 'ID_Compra',
	a.user_id as 'ID_Acesso'
FROM Usuarios u
FULL JOIN Compras c ON u.id = c.user_id
FULL JOIN Acessos a ON u.id = a.user_id
WHERE a.user_id IS NULL AND c.user_id IS NULL

-- full join
-- pessoas que possuem apenas o cadastro, sem acesso e compras