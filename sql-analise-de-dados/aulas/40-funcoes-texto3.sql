-- LTRIM
-- RTRIM
-- REPLICATE
-- REVERSE

SELECT
	'sem espaço' AS '1',
	'    espaço a esquerda' AS '2',
	'espaço a direita        ' AS '3',
	'        espaço ambos      ' AS '4';


SELECT
	'sem espaço' AS '1',
	LTRIM('    espaço a esquerda') AS '2',
	RTRIM('espaço a direita        ') AS '3',
	RTRIM(LTRIM('        espaço ambos      ')) AS '4';