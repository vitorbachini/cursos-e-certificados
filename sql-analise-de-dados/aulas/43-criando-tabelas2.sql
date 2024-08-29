--create table -> criar tabela
--insert into -> inserir dados na tabela
--truncate table -> apagar dados na tabela
--drop table -> excluir a tabela

USE Teste;

CREATE TABLE produtos(
	id INT PRIMARY KEY NOT NULL,
	nome VARCHAR(255) NOT NULL,
	id_categoria INT NOT NULL
);

SELECT *
FROM produtos;

INSERT INTO produtos
	(id, nome, id_categoria)
VALUES
	(0, 'Sapato', 0),
	(10, 'Geladeira', 2),
	(13, 'Máquina de Lavar', 2);