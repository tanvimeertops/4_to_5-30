create database SE_4_30_TO_6;
USE SE_4_30_TO_6;

create table student(
roll_no int,
name varchar(255),
age int,
dob date);

desc student;

insert into student(
roll_no,name,age,dob)values
(2,'KRRISHA',20,'2001-05-25');

SELECT * FROM STUDENT;