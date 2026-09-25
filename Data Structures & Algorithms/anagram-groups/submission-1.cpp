class Solution {
public:
   vector<vector<string>> groupAnagrams(vector<string>& strs) { 
	// unordered list may 
	unordered_map<string, vector<string>> mp;
	vector<vector<string>> ans ;

	for(string str : strs) {
		string original = str ;
		sort ( str.begin() , str.end()) ;
		mp[str].push_back(original) ;
	}
	for(auto it : mp) {
		ans.push_back(it.second) ;
	}
	return ans ;
}
};
    
