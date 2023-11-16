#include <iostream>


using namespace std;

int main()
{
    int n;
    cout<<"Massiv elementlar sonini kiriting N=";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    };
    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    };

    int ortacha = 0;

    for(int i=0;i<n;i++) {
        ortacha += arr[i];
    };

    cout<<"Summa="<<ortacha<<endl;

    double or2=0;
    double cnt = 0;

    for(int i = 0; i<n; i++) {
        if (arr[i] < ortacha) {
            or2 += arr[i];
            cnt++;
        }
    }

    or2 /= cnt;

    cout << "OR2=" << or2 << endl;

    cout<<endl<<"tugadi";
    return 0;
}

