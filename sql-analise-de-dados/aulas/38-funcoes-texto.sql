SELECT top 5 
	FirstName,
	LastName,
	CONCAT(FirstName,' ',LastName) AS 'Nome Completo',
	CONCAT('O email de ', FirstName, ' é: ', EmailAddress) AS 'Email',
	Gender,
	EmailAddress,
	AddressLine1,
	TotalChildren
FROM DimCustomer



-- CONCAT -> juntar textos
-- TRANSLATE -> substituir caracteres
-- REPLACE -> substituir caracteres (apenas um criterio)