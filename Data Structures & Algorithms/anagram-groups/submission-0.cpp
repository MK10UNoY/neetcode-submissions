class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ump;
        for(auto str: strs){
            string key = str;
            sort(key.begin(),key.end());
            //if key present
            auto it = ump.find(key);
            if(it != ump.end()){
                if (it != ump.end()) {
                    it->second.push_back(str);
                }
            }
            //if key absent
            else
            ump[key].push_back(str); // ✅ Auto-creates key and pushes value
        }
        vector<vector<string>> v;
        for(const auto& it: ump){
            v.push_back(it.second);
        }
        return v;
    }
};
