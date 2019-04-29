merg([],L2,L2).
merg([],[],[]).
merg(L1,[],L1).
merg([H1|T1],[H2|T2],[H1|R]):- H1<=H2,!,
					merg(T1,[H2|T2],R).
merg([H1|T1],[H2|T2],[H2|R]):- H1>H2,
					merg([H1|T1],T2,R).