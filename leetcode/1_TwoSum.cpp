class Solution {
public:
	bool mycompare(pair<int,int> p1,pair<int,int> p2){
	return p1.first<p2.first;
	}
    	vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=0,sum=0;
        vector<int> arr(2);
        vector<pair<int,int>> v;
    	for(int i=0;i<nums.size();i++){
        	v.push_back(make_pair(nums[i],i));
    	}
    	sort(v.begin(),v.end(),mycompare);
        while(j<nums.size() && sum+v[j].first<=target){
            sum+=v[j].first;
            j++;
        }
        if(sum==target){
            arr[0]=v[i].second;
            arr[1]=v[j-1].second;
            return arr;
        }
        while(j<nums.size()){
            sum+=v[j].first;
            while(sum>target){
                sum-=v[i].first;
                i++;
            }
            if(sum==target){
                arr[0]=v[i].second;
                arr[1]=v[i].second;
                break;
            }
            j++;
        }
        return arr;
    }
};


