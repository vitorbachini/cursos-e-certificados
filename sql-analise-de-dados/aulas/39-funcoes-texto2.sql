SELECT top 5 
	FirstName,
	LastName,
	Gender,
	TRANSLATE(FirstName, 'J', 'T') AS 'Novo Nome'
FROM DimCustomer

SELECT top 5 
	FirstName,
	LastName,
	Gender,
	TRANSLATE(FirstName, 'J''E', 'T''A') AS 'Novo Nome'
FROM DimCustomer

SELECT top 5 
	FirstName,
	REPLACE(FirstName, 'j','w') AS 'Novo Nome'
FROM DimCustomer

SELECT top 5 
	FirstName,
	REPLACE(REPLACE(FirstName, 'j','w'),'e','a') AS 'Novo Nome'
FROM DimCustomer


-- CONCAT -> juntar textos
-- TRANSLATE -> substituir caracteres
-- REPLACE -> substituir caracteres (apenas um criterio)