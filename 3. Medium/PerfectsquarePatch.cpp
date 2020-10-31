Problem-Statement : Create a function that takes an integer and outputs an n x n square solely consisting of the integer n.
Problem-link:https://edabit.com/challenge/omTRzwvBibk4etBkx


std::vector< std::vector<int> > squarePatch(int n) {
	std::vector<std::vector<int>> newarray(n,std::vector<int>(n,n));
	return newarray;
}
