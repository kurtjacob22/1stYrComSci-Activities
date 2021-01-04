#include <iostream>

using namespace std;

int main ()
{
	 int rows = 2, cols = 2;
	 for(int x = 0; x <= cols; x++){
		 for(int y = 0; y <= rows; y++){
			 cout << x << y << "\t";
		 }
		 cout << endl;
	 }

	// int n = 5;
	// int num = 1;
	// for(int i = 0; i <= n; i++){
	// 	for(int j = 0; j <= i; j++){
	// 		cout << num << " ";
	// 		num = num + 1;
	// 	}
	// 	cout << endl;
	// }

}



// for (int i = 1; i <= rows; ++i)
//     {
//         for (int j = 1; j <= i; ++j)
//         {
//             cout << "* ";
//         }
//         for (int j = rows; j > i; --j)
//         {
//             if (j == (i + 1))
//             {
//                 for (int k = rows; k >= i; --k)
//                 {
//                     cout << "* ";
//                 }
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         if (i == rows)
//         {
//             for (int j = 1; j < i; ++j)
//             {
//                 cout << "* ";
//             }
//         }

//         cout << "\n";
//     }
//     for (int x = 1; x <= (rows - 1); ++x)
//     {
//         for (int y = (rows - 1); y > x; --y)
//         {
//             cout << "  ";
//         }
//         for (int z = 1; z <= x; ++z)
//         {
//             cout << "* ";
//         }
//         cout << "* ";
//         for (int z = 1; z < x; ++z)
//         {
//             cout << "  ";
//         }
//         for (int y = rows; y > x; --y)
//         {
//             cout << "* ";
//         }

//         cout << "\n";
//     }

