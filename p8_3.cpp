#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> uniqueIDs;
    int x;
    cout<<"Enter IDs(0 to stop): ";
    while(1) {
        cin>>x;
        if(x==0)
            break;
        uniqueIDs.insert(x);
    }

    for(auto &it : uniqueIDs) {
        cout<<it<<" ";
    }
    return 0;
}