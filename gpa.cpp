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
    cout << "\n\nSoftware Engineering Program @ SCU Expected GPA Calculator" << dl;
    cout << "\n*****************************************************************************" << dl;
    cout << "\nEnter the number of semesters you finished." << dl;
    cin >> n;
    float g[8] = {0.0};
    int c[8] = {0};
    do {
        if (i <= n){
            cout << "\nEnter the GPA for the semester No. " << i <<dl;
            cin >> g[i-1];
            cout << "\nEnter the number of credit hours earned for the semester No. " << i << " That you passed it"<<dl;
            cin >> c[i-1];
        }
        else{
            cout << "\nEnter the expected GPA for the semester No. " << i <<dl;
            cin >> g[i-1];
            cout << "\nEnter the number of credit hours earned for the semester No. " << i << " That you passed it"<<dl;
            cin >> c[i-1];
        }
        cout << "\nIf you want to add another semester, enter 1 for yes and 0 for no." << dl;
        cin >> flag;
        i++;
    } while(flag && i < 9);
    for (int j = 0; j < i ;j++){
        gsum += g[j] * c[j];
        csum += c[j];
    }

    cout << "\nExpected GPA for These " << i-1 << " Semsters Is : "<< setprecision(3) << gsum / csum << dl;

    return (0);
}
