GRANT SELECT, INSERT, UPDATE
ON sakila.*
TO vitor;

REVOKE UPDATE
ON sakila.*
FROM vitor;

SHOW GRANTS FOR vitor;