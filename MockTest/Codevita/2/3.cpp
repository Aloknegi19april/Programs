#include<bits/stdc++.h>
using namespace std;


int main()
{
    int Ar[12];
    for(int i = 0; i < 12; i++)
    {
        cin >> Ar[i];
    }
    int maxday = 0, maxmonth = 0, maxhour = 0, maxmin= 0;

    for(int i = 0; i < 12; i++)
    {
        int day =0,month =0,hour = 0, min = 0;
        for(int j = 0; j < 12; j++)
        {
            day = Ar[i]*10+Ar[j];
            month = Ar[i]*10+Ar[j];
            hour = Ar[i]*10+Ar[j];
            min = Ar[i]*10+Ar[j];

            if(month%2==0&&month!=2&&month<8)
            {
                if(month>maxmonth)
                {
                    maxmonth = month;

                }
                if(day>maxday&&day<=30)
                {
                    maxday = day;
                }

            }
            else if(month%2==0&&month!=2&&month>=8&&month<=12)
            {
                if(month>maxmonth)
                {
                    maxmonth = month;
                }
                if(day>maxday&&day<=30)
                {
                    maxday = day;
                }
            }
            else if(month%2!=0&&month!=2&&month<8)
            {
                if(month>maxmonth)
                {
                    maxmonth = month;
                }
                if(day>maxday&&day<=30)
                {
                    maxday = day;
                }
            }
            else if(month%2!=0&&month!=2&&month>=8&&month<=12)
            {
                if(month>maxmonth)
                {
                    maxmonth = month;
                }
                if(day>maxday&&day<=30)
                {
                    maxday = day;
                }
            }
            else if(month==2)
            {
                if(month>maxmonth)
                {
                    maxmonth = month;
                }
                if(day>maxday&&day<=30)
                {
                    maxday = day;
                }
            }


            cout <<"maxday"<< maxday <<"\n ";
            cout <<"maxmonth"<< maxmonth<<"\n";
        }
    }



}
