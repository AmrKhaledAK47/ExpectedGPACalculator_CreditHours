#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define dl endl

void AmrKhaled_AK47(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    AmrKhaled_AK47();
    int n , i = 1 , flag = 1;
    float csum = 0 , gsum = 0;
    cout << "\n\nProgram To Calculate An Expected GPA For Faculty Of Computers And informatics Suez Canal University" << dl;
    cout << "\n*****************************************************************************" << dl;
    cout << "\nEnter Number Of Semesters That you Passed It" << dl;
    cin >> n;
    float g[8] = {0.0};
    int c[8] = {0};
    do {
        if (i <= n){
            cout << "\nEnter GPA For Semester NO. " << i <<dl;
            cin >> g[i-1];
            cout << "\nEnter Credit Hours For Semester NO. " << i << " That you passed it"<<dl;
            cin >> c[i-1];
        }
        else{
            cout << "\nEnter Expected GPA For Semester NO. " << i <<dl;
            cin >> g[i-1];
            cout << "\nEnter Credit Hours For Semester NO. " << i << " That you passed it"<<dl;
            cin >> c[i-1];
        }
        cout << "\nIf you Want Add Another Semester Press 1 to Yes , 0 for NO" << dl;
        cin >> flag;
        i++;
    } while(flag && i < 9);
    for (int j = 0; j < i ;j++){
        gsum += g[j] * c[j];
        csum += c[j];
    }

    cout << "\nExpected GPA for These " << i << " Semsters Is : "<< setprecision(3) << gsum / csum << dl;

    return (0);
}