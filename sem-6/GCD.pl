gcd1(0,M,M).
gcd1(X,Y,R):- Z is Y mod X,gcd1(Z,X,R). 