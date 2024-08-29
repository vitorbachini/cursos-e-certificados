SELECT 
	EmployeeKey,
	SUM(ExtendedAmount) AS 'Soma',
	CASE
		WHEN SUM(ExtendedAmount) > 5000000
		THEN 'Meta atingida'
	ELSE 'Meta N�O atingida'
	END AS 'Consulta Meta'

FROM FactResellerSales
GROUP BY EmployeeKey
ORDER BY SUM(ExtendedAmount)

SELECT 
	EmployeeKey,
	SUM(ExtendedAmount) AS 'Soma',
	CASE
		WHEN SUM(ExtendedAmount) BETWEEN 0 AND 2000000
		THEN 'Ruim'
		WHEN SUM(ExtendedAmount) BETWEEN 2000001 AND 5000000
		THEN 'M�dio'
		WHEN SUM(ExtendedAmount) > 5000000
		THEN 'Promo��o'
	ELSE 'N�o avaliado'
	END AS 'Desempenho'

FROM FactResellerSales
GROUP BY EmployeeKey
ORDER BY SUM(ExtendedAmount)