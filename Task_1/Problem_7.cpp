class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int opra=0;
       // string ch="ba";
        for(int i=0 ;i<s.size();i++){
            if(s[i]=='}'&&st.size()>=1){
              char ch= st.top();
                st.pop();
               
                if(ch!='{'){opra++; }
                continue;
            }
            if(s[i]=='}'&&st.size()<1){opra++;st.push('{');
continue;}
st.push(s[i]);
        }
        cout<<opra;

};
