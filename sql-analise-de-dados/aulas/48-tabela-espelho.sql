-- Criando tabela espelho

USE Ecommerce;

SELECT 
	*
INTO Produto_Copia
FROM Produto;


-------------------------------

USE AdventureWorksDW2019;

SELECT 
	EmployeeKey,
	ProductKey,
	ExtendedAmount

INTO ##temp_FactRS
FROM FactResellerSales
WHERE EmployeeKey = 285;


USE Teste;

SELECT *
INTO Dados_FactRS
FROM ##temp_FactRS;