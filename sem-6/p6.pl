pow(N,1,N).
pow(N,0,1):-!.
pow(N,P,A):- P1 is P-1,
		pow(N,P1,R),
		A is N*R.