#include <iostream>
using namespace std;
#include <map>
#include <iterator>

int main(){
    int T;
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        map <int , int> sample;
        int pairs = 0;
        int N ;
        cin >> N;
        int arr[N];
        for(int j = 0 ; j < N ; j++){
            cin >> arr[j];
            sample[arr[j]]++;
        }
        map <int , int> :: iterator itr1;
        map <int , int> :: iterator itr2;
        for(itr1 = sample.begin() ; itr1 != sample.end() ; ++itr1){
            int num1 = itr1->second;
            int num2 = itr1->first;
            for(itr2 = sample.begin() ; itr2 != sample.end() ; ++itr2){
                if(itr2->first <= num1){
                    if(itr2->second >= num2)
                        pairs++;
                }               
                else
                    break;
            }           
        }
        cout << pairs << endl;
        
    }
}