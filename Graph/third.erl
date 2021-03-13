-module(third).

-export([main/0]).

main() ->
	sum(5).

sum(0) -> 0;
sum(N) when (N rem 2 == 0) and (N>0) -> N + sum(N-2);
sum(N) when N > 0 -> sum(N-1). 

