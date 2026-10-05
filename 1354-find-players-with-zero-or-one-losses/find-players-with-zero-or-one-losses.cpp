class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int> v0;
        vector<int> v1;
          map<int,int> mp;
        for(auto p:matches)
        {
            int winner=p[0];
            int loser=p[1];
            mp[winner] += 0;
            mp[loser]++;
        }
        for( auto p:mp)
        {
            if(p.second==0)
            v0.push_back(p.first);
            if(p.second==1)
            v1.push_back(p.first);
        }
        vector<vector<int>> ans;
        ans.push_back(v0);
        ans.push_back(v1);
        return ans;
    }
};