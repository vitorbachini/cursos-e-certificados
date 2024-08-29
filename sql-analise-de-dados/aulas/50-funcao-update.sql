USE Teste;

SELECT *
INTO tb_temp
FROM produtos;

UPDATE tb_temp
SET nome = 'teste'
WHERE id IN (1,2,3);