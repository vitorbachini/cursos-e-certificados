SELECT *
FROM actor
-- WHERE first_name REGEXP 'A' -- o primeiro nome contém a letra A
-- WHERE first_name REGEXP '^A' -- o primeiro nome começa com a letra A
-- WHERE first_name REGEXP '^A|D' -- o primeiro nome começa com a letra A ou contém a letra D
-- WHERE first_name REGEXP '^A|^D' -- o primeiro nome começa com a letra A ou D
-- WHERE first_name REGEXP '[GE]A' -- contém GA ou EA
WHERE first_name REGEXP '^[GER]A' -- inicia com GA ou EA ou RA