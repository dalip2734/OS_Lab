#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  no. of process :";
    cin>>n;
    cout<<"Enter Arrival Time :"<<endl;
    int getArrivalTime[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>getArrivalTime[i];
    }
    cout<<"Enter Burst Time :"<<endl;
    int getBurstTime[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>getBurstTime[i];
    }
     cout<<"Enter Priority :"<<endl;
    int prioritySet[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>prioritySet[i];

    }
}

void calWaitTime()
