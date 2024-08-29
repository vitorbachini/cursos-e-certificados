SELECT 
	FirstName as 'Nome',
	MiddleName as 'Nome do Meio',
	LastName as 'Sobrenome',
	AddressLine1 as 'Endere�o',
	AddressLine2 as 'Endere�o2'
FROM DimCustomer
WHERE AddressLine2 IS NOT NULL
AND MiddleName IS NOT NULL