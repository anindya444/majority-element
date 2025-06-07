# majority-element
find majority element
#include <iostream>
#include <vector>
using namespace std;

int findmajority(vector<int> &a) {
    int n = a.size();

    int count = 0, ele = -1;
       for (int i = 0; i < n; i++){
          if(count==0)
            { ele=a[i];}
            
            if(a[i]==ele)
             {count++;}
            else count--;
          }
                            
    int fre=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==ele)
        fre++;
    }
    if(fre>n/2)
    return ele;
    return-1; 
}


int main() {
    vector<int> a = {1,0,1,0,1};
    cout << findmajority(a);

    return 0;}
