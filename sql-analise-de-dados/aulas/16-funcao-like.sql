SELECT *
FROM DimEmployee
WHERE FirstName LIKE 'And%'
-- WHERE FirstName LIKE '%ja_' -> limita caracteres
-- WHERE FirstName LIKE '%ja%' -> tem 'ja' em algum lugar do nome
-- WHERE FirstName LIKE '%na' -> termina com na
-- WHERE FirstName LIKE 'Rob%' -> come�a com Rob
ORDER BY FirstName