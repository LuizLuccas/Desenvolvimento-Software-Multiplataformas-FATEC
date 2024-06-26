-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 21-Jun-2024 às 03:02
-- Versão do servidor: 10.4.13-MariaDB
-- versão do PHP: 7.4.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `atendimentosdb`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `atendimentos`
--

CREATE TABLE `atendimentos` (
  `IDchamado` int(11) NOT NULL,
  `Datahora` datetime DEFAULT NULL,
  `IDusr` int(11) DEFAULT NULL,
  `Problema` text DEFAULT NULL,
  `Solução` text DEFAULT NULL,
  `Prioridade` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Extraindo dados da tabela `atendimentos`
--

INSERT INTO `atendimentos` (`IDchamado`, `Datahora`, `IDusr`, `Problema`, `Solução`, `Prioridade`) VALUES
(1, '2024-06-09 18:00:00', 1, 'Computador não liga', 'Substituição da fonte', 'Alta'),
(2, '2024-06-02 11:00:00', 1, 'Impressora não funciona', 'Reinstalação do driver', 'Média'),
(3, '2024-06-03 12:00:00', 2, 'Erro no sistema de RH', 'Atualização do software', 'Alta'),
(4, '2024-06-04 13:00:00', 2, 'Problemas na rede', 'Reconfiguração do roteador', 'Alta'),
(5, '2024-06-05 14:00:00', 3, 'Sistema financeiro lento', 'Otimização do banco de dados', 'Média'),
(6, '2024-06-06 15:00:00', 3, 'Erro de autenticação', 'Reset de senha', 'Alta'),
(7, '2024-06-07 16:00:00', 4, 'Problema no e-mail', 'Configuração da conta', 'Baixa'),
(8, '2024-06-08 17:00:00', 4, 'Computador travando', 'Limpeza de malware', 'Alta');

-- --------------------------------------------------------

--
-- Estrutura da tabela `usuario`
--

CREATE TABLE `usuario` (
  `IDusr` int(11) NOT NULL,
  `Nome` varchar(100) DEFAULT NULL,
  `Contato` varchar(100) DEFAULT NULL,
  `Setor` varchar(50) DEFAULT NULL,
  `Endereco` varchar(150) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Extraindo dados da tabela `usuario`
--

INSERT INTO `usuario` (`IDusr`, `Nome`, `Contato`, `Setor`, `Endereco`) VALUES
(1, 'João Silva', 'joao.silva@senai.sp.edu.br', 'TI', NULL),
(2, 'Maria Santos', 'maria.santos@fatec.sp.gov.br', 'RH', NULL),
(3, 'Pedro Oliveira', 'pedro.oliveira@gmail.com', 'Financeiro', NULL),
(4, 'Ana Costa', 'ana.costa@outlook.com', 'Marketing', NULL);

--
-- Índices para tabelas despejadas
--

--
-- Índices para tabela `atendimentos`
--
ALTER TABLE `atendimentos`
  ADD PRIMARY KEY (`IDchamado`),
  ADD KEY `IDusr` (`IDusr`);

--
-- Índices para tabela `usuario`
--
ALTER TABLE `usuario`
  ADD PRIMARY KEY (`IDusr`);

--
-- AUTO_INCREMENT de tabelas despejadas
--

--
-- AUTO_INCREMENT de tabela `atendimentos`
--
ALTER TABLE `atendimentos`
  MODIFY `IDchamado` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;

--
-- AUTO_INCREMENT de tabela `usuario`
--
ALTER TABLE `usuario`
  MODIFY `IDusr` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- Restrições para despejos de tabelas
--

--
-- Limitadores para a tabela `atendimentos`
--
ALTER TABLE `atendimentos`
  ADD CONSTRAINT `atendimentos_ibfk_1` FOREIGN KEY (`IDusr`) REFERENCES `usuario` (`IDusr`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
