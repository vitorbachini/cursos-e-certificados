-- Begin Tran	 | Inicia Transação
-- Rollback Tran | Cancelar Transação
-- Commit Tran	 | Salvar Transação


----------------------------

--        Updates         --

----------------------------

USE Teste;

SELECT *
FROM produtos
WHERE id = 2;

UPDATE produtos
SET nome = 'Calça Jeans',
	id_categoria = 1
WHERE id = 2;

GO

----- > Com segurança na transação

SELECT *
FROM produtos;

BEGIN TRAN				-- inicia a transação com segurança
UPDATE produtos
SET nome = 'Calça Jeans',
	id_categoria = 1
WHERE id = 2;


ROLLBACK TRAN --| Cancelar a transação
COMMIT TRAN	  --| Salvar a transação


----------------------------

--        Deletes         --

----------------------------

SELECT *
FROM produtos;

DELETE produtos
WHERE id = 10;

----- > Com segurança na transação

BEGIN TRAN
DELETE produtos
WHERE id = 10;

COMMIT TRAN -- ou ROLLBACK TRAN


----------------------------

--        Inserts         --

----------------------------

SELECT *
FROM produtos;

INSERT INTO produtos (id, nome, id_categoria)
VALUES (50, 'Camisa de Treino', 10);

DELETE produtos
WHERE id = 50;

----- > Com segurança na transação

BEGIN TRAN
INSERT INTO produtos (id, nome, id_categoria)
VALUES (50, 'Camisa de Treino', 10);

COMMIT TRAN

DELETE produtos
WHERE id = 50;