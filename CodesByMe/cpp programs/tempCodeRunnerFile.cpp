#include <iostream>
using namespace std;
int main()
{
int p[20], burstTime[20], waitingTime[20], tat[20], i, k, n, temp; float wtavg, tatavg; 
cout<<endl<<"Enter the number of processes:"; 
cin>>n; 
for(i=0;i<n;i++) 
{ 
p[i]=i; 
cout<<"Enter Burst Time for Process "<<i<<": "; 
cin>>burstTime[i]; 
} 
for(i=0;i<n;i++) 
for(k=i+1;k<n;k++) 
if(burstTime[i]>burstTime[k]) 
{ 
temp=burstTime[i]; 
burstTime[i]=burstTime[k]; 
burstTime[k]=temp; 
}
temp=p[i]; 
p[i]=p[k]; 
p[k]=temp; 

waitingTime[0] = wtavg = 0; 
tat[0] = tatavg = burstTime[0]; 
for(i=1;i<n;i++) 
{ 
waitingTime[i] = waitingTime[i-1] +burstTime[i - 1]; 
tat[i] = tat[i -1] +burstTime[i]; 
wtavg = wtavg + waitingTime[i]; 
tatavg = tatavg + tat[i]; 
} 
cout<<"\n\t PROCESS \tBURST TIME \t WAITING TIME\t TURNAROUND TIME \n"; 
for(i=0;i<n;i++)    
cout<<endl<<"          "<<p[i]<<"                    "<< burstTime[i]<<"               "<< waitingTime[i]<<"            "<<tat[i]; 
cout<<endl<<"Average Waiting Time -"<<wtavg/n; 
cout<<endl<<"Average Turnaround Time -"<<tatavg/n;

return 0;
}
