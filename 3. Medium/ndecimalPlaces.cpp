/*Problem-Statement:Given a number n, write a function that returns PI to n decimal places.
Problem-link:https://edabit.com/challenge/wzPBMkanx2Db8Kpmp*/


#include <cmath>
double myPi(int n) {
	return round(M_PI*pow(10, n))/pow(10, n);
}
