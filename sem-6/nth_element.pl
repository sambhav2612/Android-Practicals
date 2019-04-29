n_ele(N,[],X):-write("The List is Empty").
n_ele(1,[H|T],H).
n_ele(N,[H|T],R):- N1 is N-1,n_ele(N1,T,R).