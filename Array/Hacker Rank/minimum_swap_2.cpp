int minimumSwaps(vector<int> arr) {
    int iRet = 0;
    for(int i = 0; i < arr.size(); ++i) {
        if ( arr[i] == (i+1) ) {
            continue;
        }
        for(int j = i + 1; j < arr.size(); ++j) {
            if ( arr[j] == (i + 1) ) {
                std::swap(arr[i], arr[j]);
                iRet++;
                break;
            }
        }
    }
    return iRet;

}