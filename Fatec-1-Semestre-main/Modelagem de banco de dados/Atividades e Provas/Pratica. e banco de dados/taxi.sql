-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 29-Maio-2024 às 00:56
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
-- Banco de dados: `taxi`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `cliente`
--

CREATE TABLE `cliente` (
  `clild` int(11) NOT NULL,
  `nome` varchar(30) NOT NULL,
  `cpf` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Extraindo dados da tabela `cliente`
--

INSERT INTO `cliente` (`clild`, `nome`, `cpf`) VALUES
(1532, 'Asdrubal', '448.754.253-65'),
(1755, 'Bento', '259.345.123-01'),
(1780, 'Quincas', '546.373.762-02'),
(1781, 'Borbas', '231.191.577-11'),
(1782, 'João da Silva', '111.222.333-44'),
(1783, 'Maria dos Santos', '222.111.444-33'),
(1784, 'Pedro Pereira', '444.111.222-33');

-- --------------------------------------------------------

--
-- Estrutura da tabela `corrida`
--

CREATE TABLE `corrida` (
  `idcorrida` int(11) NOT NULL,
  `datapedido` date NOT NULL,
  `clild` int(11) NOT NULL,
  `placa` varchar(7) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Extraindo dados da tabela `corrida`
--

INSERT INTO `corrida` (`idcorrida`, `datapedido`, `clild`, `placa`) VALUES
(4, '2021-05-27', 1532, 'DDI2211');

-- --------------------------------------------------------

--
-- Estrutura da tabela `taxi`
--

CREATE TABLE `taxi` (
  `placa` varchar(7) NOT NULL,
  `marca` varchar(30) DEFAULT NULL,
  `modelo` varchar(20) NOT NULL,
  `anofab` int(11) DEFAULT 2020
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Extraindo dados da tabela `taxi`
--

INSERT INTO `taxi` (`placa`, `marca`, `modelo`, `anofab`) VALUES
('DDI2211', 'Honda', 'Fit', 2020),
('DID1122', 'Honda', 'Civic', 2020),
('DKL4598', 'Volkswagen', 'Gol', 2019),
('JJM3692', 'Chevrolet', 'Corsa', 1999);

--
-- Índices para tabelas despejadas
--

--
-- Índices para tabela `cliente`
--
ALTER TABLE `cliente`
  ADD PRIMARY KEY (`clild`),
  ADD UNIQUE KEY `cpf` (`cpf`);

--
-- Índices para tabela `corrida`
--
ALTER TABLE `corrida`
  ADD PRIMARY KEY (`idcorrida`),
  ADD KEY `clild` (`clild`),
  ADD KEY `placa` (`placa`);

--
-- Índices para tabela `taxi`
--
ALTER TABLE `taxi`
  ADD PRIMARY KEY (`placa`);

--
-- AUTO_INCREMENT de tabelas despejadas
--

--
-- AUTO_INCREMENT de tabela `cliente`
--
ALTER TABLE `cliente`
  MODIFY `clild` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=1785;

--
-- AUTO_INCREMENT de tabela `corrida`
--
ALTER TABLE `corrida`
  MODIFY `idcorrida` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- Restrições para despejos de tabelas
--

--
-- Limitadores para a tabela `corrida`
--
ALTER TABLE `corrida`
  ADD CONSTRAINT `corrida_ibfk_1` FOREIGN KEY (`clild`) REFERENCES `cliente` (`clild`),
  ADD CONSTRAINT `corrida_ibfk_2` FOREIGN KEY (`placa`) REFERENCES `taxi` (`placa`) ON DELETE CASCADE ON UPDATE CASCADE;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
