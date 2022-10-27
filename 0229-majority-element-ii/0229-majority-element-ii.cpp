class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size =nums.size();
      vector<int>arr;
	unordered_map<int, int> m;
	for(int i = 0; i <size; i++)
	    m[nums[i]]++;
	
	
	for(auto i : m){
	    if(i.second > size / 3){
	        arr.push_back (i.first);
	    }

	
    }
       return arr;
    }
};