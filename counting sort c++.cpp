vector<int> countingSort(vector<int> arr) {
   vector <int> v(100);
    
    //create a  simple frequency array
    for(int i=0; i<arr.size(); i++) {
        v[arr[i]]++;
    }
    
    return v;
}