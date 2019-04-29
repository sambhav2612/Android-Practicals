fib(0,0).
fib(1,1).
fib(N,T):- N1 is N-1,
		N2 is N-2,
		fib(N1,R),
		fib(N2,S),
		T is R+S.