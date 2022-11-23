#include<iostream>
using namespace std;

int main(){

    int i,j;
    int temp;

    int burst[5] = {6, 2, 5, 3, 7};
    int wait[5] = {0,0,0,0,0};
    int completion[6] = {0,0,0,0,0,0};


    cout << "\n\n_________________________________________________________\n\n";
    cout << "Burst time of processes: ";
    for(i = 0; i < 5; i++){
        cout << " \t " << burst[i];
    } 
    cout << "\n________________________________________________________\n\n";

    cout << "Burst time\t\twait time\t\tcompletion time\n";
    cout << "_____________________________________________________________\n\n";

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(burst[i] < burst[j]){
                temp = burst[i];
                burst[i] = burst[j];
                burst[j] = temp;
            }
            else{
                continue;
            }
        }
    }


    
    for(i = 0; i < 5; i++){

        completion[i+1] = completion[i] + burst[i];
        wait[i] = completion[i];

        cout << burst[i] << "\t\t\t   " << wait[i] << "\t\t\t     " << completion[i+1] << "\n\n";
        
    }

    return 0;
}