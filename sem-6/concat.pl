conc([],L2,L2).
conc([H|T],L2,[H|R]):- conc(T,L2,R).
