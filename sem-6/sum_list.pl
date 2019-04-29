sumlist1([],0).
sumlist1([X],X).
sumlist1([H1,H2|T],S):- S1 is H1+H2,
			sumlist1([S1|T],S).