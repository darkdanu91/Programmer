-- createDatabase
CREATE DATABASE contohdb;
USE contohdb;

-- createTable
CREATE TABLE tcontoh (
	id INT NOT NULL PRIMARY KEY,
	description VARCHAR(20) NOT NULL
);

-- inputTable
INSERT INTO tcontoh VALUES (1, 'baris ke-1');
INSERT INTO tcontoh VALUES (2, 'baris ke-2');
INSERT INTO tcontoh VALUES (3, 'baris ke-3');

-- printTable
SELECT * FROM tcontoh;
