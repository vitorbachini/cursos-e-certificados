USE Teste;

-- adicionar primary key

ALTER TABLE vendas
ADD CONSTRAINT PK_venda PRIMARY KEY (id);

ALTER TABLE produtos
ADD CONSTRAINT PK_produto PRIMARY KEY (id);

-- adicionar foreign key

ALTER TABLE vendas
ADD CONSTRAINT FK_produto FOREIGN KEY (id_produto) REFERENCES produtos (id);