CREATE DATABASE concessionaria;

USE concessionaria;

CREATE TABLE marcas(
	id_marca INT NOT NULL AUTO_INCREMENT,
    nome_marca VARCHAR(255) NOT NULL,
    origem VARCHAR(255) NOT NULL,
    PRIMARY KEY (id_marca)
);

CREATE TABLE modelos(
	id_modelo INT NOT NULL AUTO_INCREMENT,
    nome_carro VARCHAR(255) NOT NULL,
    transmissao VARCHAR(255) NOT NULL,
    motor VARCHAR(255) NOT NULL,
    id_marca INT NOT NULL,
    PRIMARY KEY (id_modelo),
    FOREIGN KEY (id_marca) REFERENCES marcas (id_marca)
);

CREATE TABLE clientes(
	id_cliente INT NOT NULL AUTO_INCREMENT,
    nome VARCHAR(255) NOT NULL,
    sobrenome VARCHAR(255) NOT NULL,
    cpf_cnpj VARCHAR(255) NOT NULL,
    email VARCHAR(255) NOT NULL,
    telefone VARCHAR(255) NOT NULL,
    data_nascimento DATE NOT NULL,
    endereco VARCHAR(255) NOT NULL,
    PRIMARY KEY (id_cliente)
);

CREATE TABLE funcionarios(
	id_funcionario INT NOT NULL AUTO_INCREMENT,
    nome VARCHAR(255) NOT NULL,
    sobrenome VARCHAR(255) NOT NULL,
    cargo VARCHAR(255) NOT NULL,
    cpf VARCHAR(255) NOT NULL,
    email VARCHAR(255) NOT NULL,
    telefone VARCHAR(255) NOT NULL,
    data_nascimento DATE NOT NULL,
    endereco VARCHAR(255) NOT NULL,
    PRIMARY KEY (id_funcionario)
);

CREATE TABLE estoque(
	id_estoque INT NOT NULL AUTO_INCREMENT,
    id_modelo INT NOT NULL,
    qtd_disponivel INT NOT NULL,
    PRIMARY KEY (id_estoque),
    FOREIGN KEY (id_modelo) REFERENCES modelos (id_modelo)
);