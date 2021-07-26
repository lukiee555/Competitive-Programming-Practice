int Solution::solve(vector<int> &A, int B) {
    map<int, int> freq;
    int count = 0;
    int Xor = 0;
    for(auto it: A){
        Xor = Xor ^ it;
        if(Xor == B)
            count++;
        if(freq.find(Xor ^ B) != freq.end()){
            count = count + freq[Xor ^ B];
        }
        freq[Xor] += 1;
    }
    return count;
}
