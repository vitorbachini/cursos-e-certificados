-- LTRIM
-- RTRIM
-- REPLICATE
-- REVERSE

SELECT
	'sem espa�o' AS '1',
	'    espa�o a esquerda' AS '2',
	'espa�o a direita        ' AS '3',
	'        espa�o ambos      ' AS '4';


SELECT
	'sem espa�o' AS '1',
	LTRIM('    espa�o a esquerda') AS '2',
	RTRIM('espa�o a direita        ') AS '3',
	RTRIM(LTRIM('        espa�o ambos      ')) AS '4';