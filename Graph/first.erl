-module(first).

-export([main/0]).

main() ->
	mylist().

mylist() ->
	List1 = [1,2,3],
	List2 = [4,5,6],
	List3 = List1 ++ List2,
	List3,
	List4 = List3 -- List1,
	List4,
	List5 = [3|List4],
	List5,
	[Head|Tail] = List5,
	Head,
	List6 = [2*N || N <- List5],
	List6,
	List7 = [N || N<-List6,N rem 2 /= 0],
	List7.


