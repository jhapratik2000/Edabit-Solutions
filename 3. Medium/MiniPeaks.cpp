Problem-Statement:Write a function that returns all the elements in an array that are strictly greater than their adjacent left and right neighbors.
Problem-link:  https://edabit.com/challenge/5KAsvzdc9DLfEx65t

using namespace std;

vector<int> miniPeaks(vector<int> arr) 
{
	int itr = 1;
	std::vector<int> peakVector;
	
	for (int i = 1;i < arr.size() - 1;i+=itr)
	{
		if ((arr[i] > arr[i-1]) && (arr[i] > arr[i+1]))
		{
			peakVector.push_back(arr[i]);
			itr = 2;
		}
		
		else
		{
			itr = 1;
		}
	}
	
	return peakVector;
}
