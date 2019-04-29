conc([],L2,L2).
conc([H|T],L2,[H|R]):- conc(T,L2,R).

rev_list([],[]).
rev_list([H|T],R):- rev_list(T,R1),conc(R1,[H],R).

compar([],[]).
compar([H1|T1],[H2|T2]):- H1 = H2,compar(T1,T2).

palin_drome(L):-  rev_list(L,R),compar(L,R).
