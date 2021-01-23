class Solution {
public:
    vector<vector<int>> permute(vector<int>& array) {
        if (array.size() == 0) return {};
	    vector<vector<int>> result;
	    helper(0, array, result);
	    return result;
    }
    void swap(vector<int>& array, int i, int j) {
	    int temp = array[i];
	    array[i] = array[j];
	    array[j] = temp;
    }
    
    void helper(int i, vector<int>& array, vector<vector<int>>& perms) {
	    if (i == array.size() - 1) {
		    vector<int> onePerm = array;
		    perms.push_back(onePerm);
	    } else {
		    for (int j = i; j < array.size(); j++) {
			    swap(array, i, j);
			    helper(i + 1, array, perms);
			    swap(array, i, j);
		    }
	    }
    }
};