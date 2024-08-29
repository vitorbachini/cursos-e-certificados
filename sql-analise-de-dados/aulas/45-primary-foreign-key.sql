ALTER TABLE vendas
ADD CONSTRAINT FK_produto FOREIGN KEY (id_produto) REFERENCES produto (id)

ALTER TABLE produto
ADD CONSTRAINT FK_categoria FOREIGN KEY (id_categoria) REFERENCES categoria (id)