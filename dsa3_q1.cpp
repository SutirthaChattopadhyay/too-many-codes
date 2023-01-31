#include<stack> 
#include<vector>
#include<algorithm>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    vector<int> v;
	    stack<pair<int,int>> st;
	   
	   
	    for(int i=n-1;i>=0;i--){
	       if(st.empty()){
	           v.push_back(-1);
	           st.push({arr[i],i});
	           continue;
	       }else{
	           while(!st.empty() && st.top().first>=arr[i]){
	               st.pop();
	           }
	           if(st.empty()){
	               v.push_back(-1);
	           }
	           else{
	               v.push_back(st.top().second+1);
	           }
	       }
	       st.push({arr[i],i});
	    }
	    reverse(v.begin(),v.end());
	    for(int i=0;i<v.size();i++){
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
