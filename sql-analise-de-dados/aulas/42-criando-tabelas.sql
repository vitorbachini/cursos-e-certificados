--create table -> criar tabela
--insert into -> inserir dados na tabela
--truncate table -> apagar dados na tabela
--drop table -> excluir a tabela

USE Teste;

CREATE TABLE vendas(
	id INT PRIMARY KEY NOT NULL,
	product_id INT NOT NULL,
	cliente VARCHAR(255),
	data_compra DATE NOT NULL,
	valor_total MONEY
);

SELECT *
FROM vendas;

INSERT INTO vendas
	(id, product_id, cliente, data_compra, valor_total)
VALUES
	(2, 1, 'Junior Piadas', '2024/08/20', 39.99),
	(3, 1, 'Marcos Piadas', '2024/08/20', 49.99);