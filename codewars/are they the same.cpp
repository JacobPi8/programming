#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

bool comp(std::vector<int>&a, std::vector<int>&b) 
    {
      int sizeA = a.size();
      int sizeB = b.size();
          
      if(sizeA == 0 && sizeB == 0)return true;
      if(sizeA != sizeB)return false;
      
      for(int i = 0; i < sizeA; i++)
      {
          a[i] = a[i]*a[i];
      }
      
      sort(a.begin(), a.end());
      sort(b.begin(), b.end());
      
      for(int i = 0; i < sizeA; i++)
      {
        if(a[i] != b[i])
        {
            return false;
        }
      }
      
      return true;
    }

int main(){

    std::vector<int> z = {121, 144, 19, 161, 19, 144, 19, 11};
    std::vector<int> x = {14641, 20736, 361, 25921, 361, 20736, 361, 121};
    std::cout << comp(z,x);

    return 0;
}