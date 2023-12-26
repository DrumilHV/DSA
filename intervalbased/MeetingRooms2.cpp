// you are given a vector of meeting durations,
// return the min number of meeting rooms required to accomordate all meetings.
// eg: [[0,30],[5,10],[15,20]]
// ans : 2

// soln : 
// 1. make an array of start and end of meeting time in 2 different arrays 
// 2. sort them 
// 3. check if meeting start[i] < end[j] , if so reduce the current rooms, else inclrese the current rooms
// and update the total rooms req

#include<bits/stdc++.h>

using namespace std;

int meetingRooms(vector<vector<int> > meetings){
    vector<int> start, end;
    for(int i  = 0;i<meetings.size();i++){
        start.push_back(meetings[i][0]);
        end.push_back(meetings[i][1]);
    }
    int current = 0;
    int res = 0;
    int n = meetings.size();
    int i = 0,j = 0;
    while(i < n && j< n ){
        if(start[i] >= end[j]){
            j++;
            current--;
        }else{
            current++;
            res = max(res, current);
            i++;
        }
    }
    return res;
}
int main(){
    int arr[][2] = {{0,30},{5,10},{15,20}};
    vector<vector<int> > meetings;
    for(int i  = 0;i< 3;i++){
        vector<int> temp(arr[i], arr[i]+2);
        meetings.push_back(temp);
    }
    int rooms = meetingRooms(meetings);
    cout<<rooms<<endl;
    return rooms;
}