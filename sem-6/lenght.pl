len([],0).
len([H|T],R):- len(T,R1),
				R is R1+1.

evelen(L):-  len(L,R),
              S is R mod 2,
			  S=0.
			  
oddlen(L):- len(L,R),
             S is R mod 2,
			 S=1.