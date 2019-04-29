delete_all(X,[],[]).
delete_all(X,[X|T],R):- X=H, delete_all(X,T,R).
delete_all(X,[H|T],[H|R]):- X\=H, delete_all(X,T,R).

