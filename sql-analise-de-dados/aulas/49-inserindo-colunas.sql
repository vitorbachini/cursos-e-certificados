-- Inserindo colunas

USE  Teste;

ALTER TABLE produtos
ADD Subcategoria VARCHAR(255);


ALTER TABLE produtos
ADD Subcategoria INT; -- adicionando o tipo errado

ALTER TABLE produtos
ALTER COLUMN Subcategoria VARCHAR(255); -- corrigindo o tipo dos dados

exec sp_columns produtos;