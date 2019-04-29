rev_list([],[]). 
rev_list([H|T], R):- rev_list(T, R1),
			conc(R1,[H],R).
conc([],L2,L2).
conc([H|T],L2,[H|Z]):- conc(T,L2,Z).