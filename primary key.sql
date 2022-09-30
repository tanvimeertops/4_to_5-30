-- primary key

create table customer(
`customer id` int primary key,
`customer name` varchar(255),
order_id bigint );

desc customer;

insert into customer
(`customer id`,`customer name`,order_id)values
(2,"anne",454498955652);

select * from customer;