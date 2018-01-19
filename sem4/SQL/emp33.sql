Create Table emp33(
eno char(3) not null,
ename varchar(50) not null,
job_type varchar(50) not null,
manager char(3),
hire_date date not null,
dno integer,
commission decimal(10,2),
salary decimal(7,2) not null,
primary key(eno),
foreign key(manager) references emp33(eno),
foreign key(dno) references dept33(dno)
);
