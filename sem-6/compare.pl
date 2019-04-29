compare([],[]).
compare([H1|T1],[H2|T2]):- H1 = H2, compare(T1,T2).