sumlist1([],0).
sumlist1([H|T],S):- sumlist1(T,L),
			S is L+H.