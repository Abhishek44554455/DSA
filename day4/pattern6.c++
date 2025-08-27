// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             switch (i)
//             {
//             case 0:
//                 cout << "a" << " ";
//                 break;
//             case 1:
//                 cout << "b" << " ";
//                 break;
//             case 2:
//                 cout << "c" << " ";
//                 break;
//             case 3:
//                 cout << "d" << " ";
//                 break;

//             default:
//                 break;
//             }
//         }
//         cout << endl;
//     }
// }



///Another Approach//

#include<iostream>
using namespace std;

int main(){
    
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            char c='a'+i-1;
            cout<<c<<" ";
        }
        cout<<endl;
    }
}