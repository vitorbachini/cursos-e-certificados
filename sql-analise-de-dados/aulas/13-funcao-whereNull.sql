SELECT 
	FirstName as 'Nome',
	MiddleName as 'Nome do Meio',
	LastName as 'Sobrenome',
	AddressLine1 as 'Endereço',
	AddressLine2 as 'Endereço2'
FROM DimCustomer
WHERE AddressLine2 IS NOT NULL
AND MiddleName IS NOT NULL