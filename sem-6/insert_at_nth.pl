insert_at_n(X,N,[],R):-write("The List is Empty").
insert_at_n(X,1,L,[X|L]).
insert_at_n(X,N,[H|T],[H|R]):- N1 is N-1, insert_at_n(X,N1,T,R).
