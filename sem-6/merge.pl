merg([],L2,L2).
merg(L1,[],L1).
merg([H1|T1],[H2|T2],[H3|T3]):- H1>H2-> H3 is H2, merg([H1|T1],T2,T3);H3 is H1, merg(T1,[H2|T2],T3).