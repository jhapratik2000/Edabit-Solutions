/*Problem-Task:Create a function that returns the smallest number of letter removals so that two strings are anagrams of each other.
Problem Link : https://edabit.com/challenge/NBi75bkHrhTTxmxST */


int minRemovals(std::string str1, std::string str2) {
	int same = 0;
	for (char s1:str1)
		for (char s2:str2)
			if (s1 == s2)
				same += 1;
	return str1.size() - same + str2.size() -same;
}
