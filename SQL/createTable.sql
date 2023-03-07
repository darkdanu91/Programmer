-- createDatabase
CREATE DATABASE studentDatabase;
USE studentDatabase;

-- createTable
CREATE TABLE student (
	id INT NOT NULL,
	nim VARCHAR(15) NOT NULL PRIMARY KEY,
	name VARCHAR(50) NOT NULL
);

-- inputTable
INSERT INTO student (id, nim, name) VALUES (1, '10001', 'Danu');
INSERT INTO student (id, nim, name) VALUES (2, '10002', 'Rasyid');
INSERT INTO student (id, nim, name) VALUES (3, '10003', 'Robi');
INSERT INTO student (id, nim, name) VALUES (4, '10004', 'Natalie');

-- printTable
SELECT * FROM student;
