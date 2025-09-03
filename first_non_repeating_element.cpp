class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
      int n = arr.size();
      
      for (int i = 0; i < n; i++){
        int j;
          for ( j = 0; j < n; j++){
          if (i!=j && arr[i]==arr[j])
          break;}
          if (j==n)
          return arr[i];
      }
      return -1;
    }
};
