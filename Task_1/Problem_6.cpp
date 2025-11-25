class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st,answer;
        vector<int >res;
                int n = asteroids.size();

        for(int i=0;i<n;i++){ 
                        bool currentDestroyed = false;

            while(!st.empty()&&check_sign(asteroids[i])<check_sign(st.top())){
if(abs(asteroids[i])==abs(st.top())){
    st.pop();
                       currentDestroyed = true;
 break;}
else if(abs(asteroids[i])>abs(st.top())){
                         currentDestroyed = false;
 
    st.pop();}
    else if(abs(asteroids[i])<abs(st.top())){ 
                     currentDestroyed = true;

    break;}
            }
          if(!currentDestroyed)  st.push(asteroids[i]);
        }
        while(!st.empty()) {
            res.insert(res.begin(), st.top());
            st.pop();
        }
        
        return res;
    
    }
  int check_sign(int num){  
if (signbit(num)) {
return -1;} else if (num > 0) {
return 1;} else {
return 0;}}
};
