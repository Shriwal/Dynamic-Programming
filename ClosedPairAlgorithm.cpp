/*Closed Pair Algorithm 1 Dimensional Array*/
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int numberOfPoints;
    scanf("%d", &numberOfPoints);
    
    int points[numberOfPoints];
    
    for(int i=0; i<numberOfPoints; i++)
    {
        scanf("%d", &points[i]);
    }
    
    sort(points, points+numberOfPoints);
    
    int answer = points[1]-points[0] ;
    
    for(int i=2; i<numberOfPoints-1; i++)
    {
        if (answer>(points[i+1]-points[i]))
        {
            answer = points[i+1] - points[i];
        }
    }
    
    cout<<answer<<endl;
    
	return 0;
}
