CREATE OR REPLACE VIEW carros_disponiveis AS
SELECT 
	m.id_modelo AS 'ID do Modelo',
    m.nome_carro AS 'Nome do Veículo',
    e.qtd_disponivel AS 'Quantidade Disponível'
FROM modelos m
JOIN estoque e ON m.id_modelo = e.id_estoque
ORDER BY e.qtd_disponivel DESC