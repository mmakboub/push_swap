# push_swap
The Push_swap project is a very simple and highly effective algorithm project: data will need to be sorted. You have at your disposal a set of int values, 2 stacks and a set of instructions to manipulate both stacks. so The main goal is to sort data on a stack, The idea is simple, You have two stacks called Stack A and Stack B. Stack A is given a random list of unorganized numbers. You must take the random list of numbers in Stack A and sort them so that Stack A is organized from smallest to largest with a limited set of instructions, using the lowest possible number of actions(sa, sb, ss, ra, rb, rr, rra, rrb, rrr, pa, pb). To succeed you’ll have to manipulate various types of algorithms and choose the one (of many) most appropriate solution for an optimized data sorting.

Within your mandatory part you are allowed to use the following functions:

◦ write
◦ read
◦ malloc
◦ free
◦ exit

And here is the list of instructions that we can perform :
{{
sa (swap a) : Swap the top two numbers in A

sb (swap b) : Swap the top two numbers in B

ss : sa + sb

ra (rotate a) : Top number in A goes to bottom of A

rb (rotate b) : Top number in B goes to bottom of B

rr : ra + rb

rra (reverse rotate a) : Bottom number in A goes to top of A

rra (reverse rotate b) : Bottom number in B goes to top of B

rrr : rra + rrb

pa (push a) : Top number in B goes to top of A

pb (push b) : Top number in A goes to top of B

  #𝕖𝕩𝕖𝕞𝕡𝕝𝕖
  
   We are going to take l_a = [1, 2, 3, 4, 5] and l_b = [] (empty).

    sa: l_a = [2, 1, 3, 4, 5]
    sb: l_b = []
    sc: l_a = [2, 1, 3, 4, 5] and l_b = []
	pb: l_a = [1, 2, 3, 4, 5] and l_b = []
    pb: l_a = [2, 3, 4, 5] and l_b = [1]
    ra: l_a = [2, 3, 4, 5, 1]
    rb: l_b = []
    rr: l_a = [2, 3, 4, 5, 1] and l_b = []
    rra: l_a = [5, 1, 2, 3, 4]
    rrb: l_b = []
    rrr: l_a = [5, 2, 1, 3, 4] and l_b = []

}}

The project can be done by multiple different way:

    By using array.
    By using simply linked list.
    By using doubly linked list.
    By using doubly circular linked list.

Concerning sort algo u must choice the algo that's easy for to manipulate it and code it so there are some sorting algorithmes :

	- Radix sort;
	- Quicksort;
	- longest increasing subsequence;
	- Merge sort;
	- ...

So first thing u should do is : parsing 
when i say parsing i mean for example: some arguments are not integers, or the arguments are duplicates, some arguments are bigger than an integer . then put numbers in the stack A if no errors are detected.
Second : u should Check if the numbers in A are all sorted. If so, end the program without printing anything.
third : There are 4 main test cases that u should cover. The cases are 3, 5, 100, and 500. Each case requires to be handled differently :

With 3 numbers, we need to sort it with not more than 3 instructions.

With 5 numbers, we need to sort it with not more than 12 instructions.

With 100 numbers, we can get :

	5 points if the size of the list of instructions is less than 700
	4 points if the size of the list of instructions is less than 900
	3 points if the size of the list of instructions is less than 1100
	2 points if the size of the list of instructions is less than 1300
	1 points if the size of the list of instructions is less than 1500
	
With 500 numbers, we can get

	5 points if the size of the list of instructions is less than 5500
	4 points if the size of the list of instructions is less than 7000
	3 points if the size of the list of instructions is less than 8500
	2 points if the size of the list of instructions is less than 10000
	1 points if the size of the list of instructions is less than 11500

so to handle those cases i'll advice u to read those articles :

	https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a
	https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e
	https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html
	http://www.btechsmartclass.com/data_structures/single-linked-list.html
	https://dev-notes.eu/2018/07/double-pointers-and-linked-list-in-c/

	