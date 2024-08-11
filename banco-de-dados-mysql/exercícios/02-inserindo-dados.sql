INSERT INTO marcas(nome_marca, origem)
VALUES
	('Volkswagen', 'Alemanha'),
    ('Fiat', 'Itália'),
    ('Renault', 'França'),
    ('Ford', 'Estados Unidos'),
    ('Toyota', 'Japão');

INSERT INTO modelos(nome_carro, transmissao, motor, id_marca)
VALUES
		('Polo', 'Manual', '2.0', 1),
        ('Argo', 'Automatica', '1.6', 2),
        ('Sandero', 'Manual', '1.0', 3),
        ('Fusion', 'Automatica', '2.0', 4),
        ('Supra', 'Manual', '3.0', 5);

INSERT INTO clientes(nome, sobrenome, cpf_cnpj, email, telefone, data_nascimento, endereco)
VALUES 
	('Joao', 'Souza', '12332145678', 'joaosouza@example.com', '912345678','1980-03-13', 'Rua 1'),
    ('Ana', 'Silva', '46332145678', 'ana@example.com', '912355578','1995-04-23', 'Rua 2'),
    ('Felipe', 'Dias', '12332112678', 'felipe@example.com', '989245678', '1975-12-24', 'Rua 3'),
    ('Larissa', 'Freitas', '12332197978', 'freitasl@example.com', '912345912', '1981-06-10', 'Rua 4'),
    ('Antonio', 'Almeida', '12390245678', 'antonioalm@example.com', '912347758', '1960-09-02', 'Rua 5');
    
INSERT INTO funcionarios(nome, sobrenome, cargo, cpf, email, telefone, data_nascimento, endereco)
VALUES 
	('Joao', 'Souza', 'Gerente','12332145678', 'joaosouza@example.com', '912345678','1980-03-13', 'Rua 1'),
    ('Ana', 'Silva', 'Atendente','46332145678', 'ana@example.com', '912355578','1995-04-23', 'Rua 2'),
    ('Felipe', 'Dias', 'Atendende', '12332112678', 'felipe@example.com', '989245678', '1975-12-24', 'Rua 3'),
    ('Larissa', 'Freitas', 'Caixa', '12332197978', 'freitasl@example.com', '912345912', '1981-06-10', 'Rua 4'),
    ('Antonio', 'Almeida', 'Financeiro', '12390245678', 'antonioalm@example.com', '912347758', '1960-09-02', 'Rua 5');

INSERT INTO estoque(id_modelo, qtd_disponivel)
VALUES 
	(1, '2'),
    (2, '3'),
    (3, '0'),
    (4, '4'),
    (5, '1');