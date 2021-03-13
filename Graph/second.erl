-module(second).

-export([main/0]).

main() ->
	find_factorial(-3).

factorial(N) when N ==0 -> 1;
factorial(N) when N < 0 -> "cannot be find";
factorial(N) when N > 0 -> N * factorial(N-1).
find_factorial(X) ->
	Y = factorial(X),
	io:fwrite("Factorial: ~p\n",[Y]).