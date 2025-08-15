#include <iostream>

using namespace std;

int main()
{
	double vprin, vdragon, timebeforediscovering, ftime, cdistance;
	cin >> vprin >> vdragon >> timebeforediscovering >> ftime >> cdistance;
	if (vprin > vdragon)
		cout << 0;
	else
	{
		double distancedone = vprin * timebeforediscovering + (vprin * timebeforediscovering * vprin) / (vdragon - vprin);
		int numshewants = 0;
		while (distancedone < cdistance)
		{
			numshewants++;

			distancedone += ftime * vprin + (distancedone / vdragon) * vprin;
			distancedone += (distancedone * vprin) / (vdragon - vprin);
		}
		cout << numshewants;
	}
}