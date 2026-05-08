class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // using unordered for fast lookup 
        unordered_map<string, vector<string>> resSort;

        for (int i = 0; i < strs.size(); i++){ // loops through the word 
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end()); 
            //if there is a match, add to the existing 'bucket' or make a new bucket  
            resSort[sorted].push_back(strs[i]); 
        }

        // empty list
        vector<vector<string>> result;
        for (pair<const string, vector<string>>& r : resSort){
            result.push_back(r.second);
        }

        return result;
    }
};
