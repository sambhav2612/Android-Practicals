maxlist1([X],X).
maxlist1([],"list is blank").
maxlist1([H1,H2|T],M):- H1>H2-> S is H1, maxlist1([S|T],M); S is H2, maxlist1([S|T],M).