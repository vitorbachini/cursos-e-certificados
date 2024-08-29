--create table -> criar tabela
--insert into -> inserir dados na tabela
--truncate table -> apagar dados na tabela
--drop table -> excluir a tabela

USE Teste;

CREATE TABLE categorias(
	id INT PRIMARY KEY NOT NULL,
	nome VARCHAR(255) NOT NULL,
);

SELECT *
FROM categorias;

INSERT INTO categorias
	(id, nome)
VAlUES
	(1, 'Livros'),
	(2, 'Eletrodomésticos');