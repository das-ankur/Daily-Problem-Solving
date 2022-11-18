class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        for(char ch: s) m[ch]++;
        priority_queue<pair<int, char>> q;
        for(auto x:m) q.push({x.second, x.first});
        string res="";
        while(!q.empty()) {
            res.append(string(q.top().first, q.top().second));
            q.pop();
        }
        return res;
    }
};