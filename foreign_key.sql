-- normalization: 1 normal form: no multivalued colomn
-- E.F codd
-- foreign key : 

create table `course table`
(roll_no int,
stu_course varchar(255),
foreign key(roll_no) references students_1(rollno));

desc `course table`;

insert into `course table`
(roll_no,stu_course)values
(4,"se"),

select * from `course table`;