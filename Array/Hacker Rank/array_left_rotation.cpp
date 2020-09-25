vector<int> rotLeft(vector<int> a, int d) {
    vector<int> res;
    for(auto it = a.begin() + d; it != a.end(); ++it)
        res.push_back(*it);
    for(auto it = a.begin(); it != a.begin() + d; ++it)
        res.push_back(*it);

    return res;

}