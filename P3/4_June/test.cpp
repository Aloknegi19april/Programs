/*
There is a trip sponsored by Graphic Era University. The students in this trip are going to Mussoorie for trekking. There is also a task assigned to each student who is going on this trip. N stations are located on these mountains at various unique altitude Ai , i∈[1,N] trekkers to take rest.

Consider it hypothetically, they are required to calculate the time spent by them on those stations and report it to GEU Management team.

The time spent on the stations is dependent on altitude of the stations from the sea level. You are trekking in a valley of mountains with different altitudes. You are required to spend some defined time on a station only if the station is at a peak i.e. it is at higher altitude than it’s adjacent stations.

The altitude of stations can be from 1 to 50 meters (inclusive) and the time spent corresponding to altitude is given below:

1m to 10m = 2 mins
11m to 20m = 3 mins
21m to 30m = 4 mins
31m to 40m = 5 mins
41m to 50m = 6 mins
Input Format

First line: An integer N, denoting number of Stations on mountain range Second line: N elements separated by space representing Ai .

Constraints

1<= N <= 20, 1<= A i <= 50

Output Format

An integer specifying total time spent by the student while trekking through the mountain range.

Sample Input 0

1
14
Sample Output 0

3
Sample Input 1

8
1 4 2 15 20 3 25 10
Sample Output 1

9
*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int  Ar[n];
    int t[5]= {2,3,4,5,6};
    int time = 0, j = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>Ar[i];
    }
    for(int i =1; i < n; i++)
    {
        j=0;
        if(Ar[i]>=Ar[i-1]&&Ar[i]>=Ar[i+1])
        {
            while(Ar[i] >10)
            {
                time = time+t[j];
                Ar[i]-=10;
                j++;
            }
            time+=(Ar[i]*t[j])/10;
        }
    }
    cout<< time;
}
