#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N; //Input size of array
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];//Input array
    }
    int min=INT_MAX,max=INT_MIN;// declare variables to store maximum and minimum values in array
    for(int i=0;i<N;i++){
        if(arr[i]>max){
            max=arr[i];// find max
        }
        if(arr[i]<min){
            min=arr[i];//find min
        }
    }
    if(max-min+1==N){//eg. max=5,min=1, N= 5-1+1= 5
        bool visited_node[N]={0};//Declare variable to mark visited elements in array
        for(int i=0;i<N;i++){
            if(visited_node[arr[i]-min]==1){//Checking for repeated elements
                cout<<"Not consecutive";//If element repeats, it can't be consecutive
                return 0;
            }
            else{
                visited_node[arr[i]-min]=1;// mark visited node as 1 for visited elements
            }
        }
        cout<<"Consecutive";// if not repeated then consecutive
        return 0;
    }
    cout<<"Not Consecutive";//if the "if" condition is not satisfied
    return 0;
}
