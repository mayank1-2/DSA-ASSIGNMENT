#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxel(vector<int> &v){
        int n=v.size(); // calcultate maximum element in array
         int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,v[i]);
            
        }
        return maxi;
    } 
    long long calc(vector<int> &v,int hr){
        int n=v.size();  // it will calculate total hours
         long long totalh=0;
        for(int i=0;i<n;i++){
            totalh+=ceil((double)v[i]/(double)hr);
        }
        return totalh;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;   //minimum speed such that koko eat one banana per hour
        int high=maxel(piles); // maximum bananas in one pile that koko can eat ,but we need minimum banana/hr wtihin h hours
        while(low<=high){
            int mid=(low+high)/2;
            long long hr=calc(piles,mid); //it will calculate the total hrs, if koko eat with particular speed 
            if(hr<=h){
                high=mid-1; //if hr is less than or eqal to h we go left side becuase we need minimum speed.
            }
            else{
                low=mid+1; //else go to right side
            }
        }
        return low;
    }
    int main(){
        vector<int> piles={3,6,7,11};
        int h=8;
        int k=minEatingSpeed(piles,h); //calculating minimum k such that koko can eat whole bananas
      cout<<"Eating speed of koko per hour: "<<k;
    }