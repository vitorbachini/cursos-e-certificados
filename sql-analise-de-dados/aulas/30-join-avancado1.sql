SELECT 
	v.id AS 'id_venda',
	v.quantity,
	v.total_price,
	o.created_at,
	o.customer_id,
	o.status,
	p.name,
	p.category_id
FROM Vendas AS v
LEFT JOIN Ordens AS o
	ON v.order_id = o.id
LEFT JOIN Produto AS p
	ON v.product_id = p.id
;