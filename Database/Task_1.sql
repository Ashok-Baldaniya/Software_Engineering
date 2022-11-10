create database task1;
use task1;

create table student(rollno int primary key,name varchar(30),branch varchar(30));
insert into student(rollno,name,branch) values(1,"jay","computer science"),(2,"suhani","electronic and com"),(3,"kriti","electronic and com");

create table exam(rollno int,s_code varchar(20),mark int,p_code varchar(20),foreign key(rollno) references student(rollno));
insert into exam(rollno,s_code,mark,p_code) 
values(1,"cs11",50,"cs"),
(1,"cs12",60,"cs"),
(2,"ec101",66,"ec"),
(2,"ec102",70,"ec"),
(3,"ec101",45,"ec"),
(3,"ec102",50,"ec");

