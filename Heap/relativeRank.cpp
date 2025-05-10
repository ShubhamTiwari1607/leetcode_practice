#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<string> relativeRank(vector<int>score){
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        int rank = 1;
        vector<string> answer(score.size());
        while(!pq.empty()){
           int index = pq.top().second;
           pq.pop();
           if(rank==1){
             answer[index]="Gold Medal";
           }else if(rank==2){
            answer[index]="Silver Medal";
           }else if(rank==3){
            answer[index]="Bronze Medal";
           }else{
            answer[index]=to_string(rank);
           }
           rank++;
        }
        return answer ;
    }
     vector<string> findRelativeRanks(vector<int>& score) {
    vector<pair<int, int>> arr;
    for (int i = 0; i < score.size(); i++) {
        arr.push_back({score[i], i});
    }

    sort(arr.begin(), arr.end(), greater<pair<int, int>>());

    vector<string> answer(score.size());

    for (int i = 0; i < score.size(); i++) {
        if(i==0){
            answer[arr[0].second] = "Gold Medal";
        }else if(i==1){
            answer[arr[1].second] = "Silver Medal";
        }else if(i==2){
            answer[arr[2].second] = "Bronze Medal";
        }else{ 
            answer[arr[i].second] = to_string(i + 1);
        }
    }

    return answer;
}
};

int main(){
    Solution obj;
    vector<int> score = {5,4,3,2,1};
    vector<string> res = obj.relativeRank(score);
    for(auto x : res){
        cout<<x<<" ";
    }
    return 0;
}