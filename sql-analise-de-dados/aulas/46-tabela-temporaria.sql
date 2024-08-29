-- Tabelas Temporárias

SELECT *
INTO tb_tempTeste
FROM produtos

SELECT *
INTO #tb_temp       -- tabela temporária local (permite trabalhar apenas na query criada)
FROM produtos

SELECT *
INTO ##tb_temp      -- tabela temporária global (permite trabalhar em outras querys)
FROM produtos

CREATE TABLE ##tb_temp_manual(
	id INT NOT NULL PRIMARY KEY,
	nome VARCHAR(255) NOT NULL,
	sobrenome VARCHAR(255) NOT NULL
);

INSERT INTO ##tb_temp_manual
	(id, nome, sobrenome)
VALUES
	(1, 'joao', 'silva');