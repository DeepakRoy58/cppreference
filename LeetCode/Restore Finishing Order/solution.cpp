// class Solution {
// public:
//     vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
//         int n = order.size() ;

//         vector <bool> f(n+1) ;
//         vector<int> ans; 
//         for(int i  = 0; i < friends.size(); i++) f[friends[i]] = true;
//         for(int i = 0 ; i < order.size() ; i++) if(f[order[i]]) ans.push_back(order[i]) ;

//         return ans ;
//     }
// };