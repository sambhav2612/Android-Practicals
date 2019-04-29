delete_all(X,[],[]).
delete_all(X,[X|T],R):- X=H, delete_all(X,T,R).
delete_all(X,[H|T],[H|R]):- X\=H, delete_all(X,T,R).

remov_dup([],[]).
remov_dup([H|T],[H|R]):-delete_all(H,T,R1),remov_dup(R1,R).