SELECT TOP 10 * FROM estado;
SELECT TOP 10 * FROM municipio;
SELECT TOP 10 * FROM regiao;

-- Consulta geral para validar os dados

SELECT *
FROM      municipio AS m
LEFT JOIN estado    AS e ON m.uf = e.uf
LEFT JOIN regiao    AS r ON e.regiao = r.id

-- Consulta estruturada

SELECT 
	m.id       AS 'id_Municipio',
	m.codigo   AS 'cod_Municipio',
	m.nome     AS 'nome_Municipio',
	m.uf       AS 'uf_Municipio',
	e.id       AS 'id_Estado',
	e.codigouf AS 'codigoUf_Estado',
	e.nome     AS 'nome_Estado',
	e.uf       AS 'uf_Estado',
	e.regiao   AS 'regiao_Estado',
	r.id       AS 'id_Regiao',
	r.nome     AS 'nome_Regiao'
FROM      municipio AS m
LEFT JOIN estado    AS e ON m.uf = e.uf
LEFT JOIN regiao    AS r ON e.regiao = r.id

-- Consulta Estruturada Resumida --

SELECT TOP 10
	m.id       AS 'Id_Municipio',
	m.codigo   AS 'Cod_Municipio',
	m.nome     AS 'Nome_Municipio',
	e.nome     AS 'Nome_Estado',
	e.uf       AS 'UF_Estado',
	r.nome     AS 'Nome_Regiao'
FROM      municipio AS m
LEFT JOIN estado    AS e ON m.uf = e.uf
LEFT JOIN regiao    AS r ON e.regiao = r.id

-- Criando uma tabela temp com a consulta

SELECT
	m.id       AS 'Id_Municipio',
	m.codigo   AS 'Cod_Municipio',
	m.nome     AS 'Nome_Municipio',
	e.nome     AS 'Nome_Estado',
	e.uf       AS 'UF_Estado',
	r.nome     AS 'Nome_Regiao'
INTO      ##consultateste
FROM      municipio AS m
LEFT JOIN estado    AS e ON m.uf = e.uf
LEFT JOIN regiao    AS r ON e.regiao = r.id

SELECT * 
FROM ##consultateste
WHERE UF_Estado = 'RS'


DROP TABLE ##consultateste
DROP TABLE municipio
DROP TABLE regiao
DROP TABLE estado