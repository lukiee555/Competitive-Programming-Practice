int Solution::braces(string A) {
    stack<char> st;
    int ans = 0;
    for(int i = 0; i < A.length(); i++){
        if(A[i] == '+' || A[i] == '-' || A[i] == '*' || A[i] == '/' || A[i] == '(')
            st.push(A[i]);
        else if (A[i] == ')'){
            if(st.top() == '('){
                ans = 1;
                break;
            }else{
                while(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                    st.pop();
                st.pop();
            }
        }
    }
    return ans;
}
