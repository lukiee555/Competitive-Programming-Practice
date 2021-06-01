vector<string> Solution::fizzBuzz(int A) {
    vector<string> out(A);
    for(int i = 0; i < A; i++){
        if(((i+1) % 3) == 0 && ((i+1) % 5) == 0){
            out[i] = "FizzBuzz";
            continue;
        }else if(((i+1) % 3) == 0){
            out[i] = "Fizz";
            continue;
        }else if(((i+1) % 5) == 0){
            out[i] = "Buzz";
            continue;
        }else{
            out[i] = to_string(i+1);
        }
    }
    return out;
}
