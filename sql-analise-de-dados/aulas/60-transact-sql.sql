-- Begin Tran	 | Inicia Transa��o
-- Rollback Tran | Cancelar Transa��o
-- Commit Tran	 | Salvar Transa��o


----------------------------

--        Updates         --

----------------------------

USE Teste;

SELECT *
FROM produtos
WHERE id = 2;

UPDATE produtos
SET nome = 'Cal�a Jeans',
	id_categoria = 1
WHERE id = 2;

GO

----- > Com seguran�a na transa��o

SELECT *
FROM produtos;

BEGIN TRAN				-- inicia a transa��o com seguran�a
UPDATE produtos
SET nome = 'Cal�a Jeans',
	id_categoria = 1
WHERE id = 2;


ROLLBACK TRAN --| Cancelar a transa��o
COMMIT TRAN	  --| Salvar a transa��o


----------------------------

--        Deletes         --

----------------------------

SELECT *
FROM produtos;

DELETE produtos
WHERE id = 10;

----- > Com seguran�a na transa��o

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

----- > Com seguran�a na transa��o

BEGIN TRAN
INSERT INTO produtos (id, nome, id_categoria)
VALUES (50, 'Camisa de Treino', 10);

COMMIT TRAN

DELETE produtos
WHERE id = 50;