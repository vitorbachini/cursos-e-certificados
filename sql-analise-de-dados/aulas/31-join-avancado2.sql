SELECT 
	v.id AS 'id_venda',
	v.quantity,
	v.total_price,
	o.created_at,
	o.status,
	p.name AS 'product_name',
	p.category_id,
	ca.name AS 'category_name',
	cl.first_name,
	cl.last_name,
	cl.cell_phone

FROM Vendas AS v
LEFT JOIN Ordens AS o		  ON v.order_id = o.id
LEFT JOIN Produto AS p        ON v.product_id = p.id
LEFT JOIN Categoria AS ca     ON p.category_id = ca.id
LEFT JOIN Clientes as cl      ON o.customer_id = cl.id
ORDER BY id_venda
;