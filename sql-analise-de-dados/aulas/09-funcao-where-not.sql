SELECT *
FROM DimCustomer
WHERE FirstName NOT IN ('Jon', 'Lauren', 'Carol')
AND EnglishEducation NOT IN ('High School', 'Partial College')
AND SpanishOccupation NOT IN ('Profesional', 'Gesti�n')
ORDER BY EnglishEducation