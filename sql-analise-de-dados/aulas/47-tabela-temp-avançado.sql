-- Tabelas Temporárias Avançadas

USE Ecommerce;
SELECT *
FROM Vendas;

USE Teste;
SELECT *
FROM produtos;

---- Cruzar os dados utilizando uma tabela temporária

SELECT *
INTO ##temp_produtos
FROM produtos;

USE Ecommerce;
SELECT *
FROM Vendas;

SELECT * 
FROM ##temp_produtos;

SELECT
	v.id as 'id_venda',
	v.product_id,
	t.id,
	t.nome
FROM Vendas as v
LEFT JOIN ##temp_produtos as t ON v.product_id = t.id;