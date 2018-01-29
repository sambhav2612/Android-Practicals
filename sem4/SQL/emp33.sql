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

ENO	ENAME	JOB_TYPE	MANAGER	HIRE_DATE	DNO	COMMISSION	SALARY
783	King	President	- 	17-NOV-81	10	0		2950
769	Blake	Manager		783	01-MAY-81	30	0		2870
756	Jones	Manager		783	02-APR-81	20	0		2300
792	Jones	Analyst		756	03-DEC-81	20	0		2600
788	Scott	Analyst		756	09-DEC-81	20	0		2850
793	Miller	Clerk		788	23-JAN-82	40	0		1300
765	Martin	Sales_man	769	22-APR-81	30	1400		1250
778	Clark	Manager		783	09-JUN-81	10	0		2900
790	James	Clerk		769	03-DEC-81	30	0		950
736	Smith	Clerk		790	17-DEC-80	20	0		1000
787	Adams	Clerk		778	12-JAN-83	20	0		1150
752	Ward	Sales_man	769	22-FEB-81	30	500		1300
749	Allan	Sales_man	769	20-FEB-81	30	300		2000
784	Turner	Sales_man	769	08-SEP-81	30	0		1450
