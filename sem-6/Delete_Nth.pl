del_n(N,[],X):-write("The List is Empty").
del_n(1,[H|T],T).
del_n(N,[H|T],[H|X]):- N1 is N-1, del_n(N1,T,X).