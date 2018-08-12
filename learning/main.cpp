#include <iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

int main(int argc, char *argv[]) {
   // Mat A, C;                          // creates just the header parts
   // A = imread(argv[1], IMREAD_COLOR); // here we'll know the method used (allocate matrix)
   // Mat B(A);                                 // Use the copy constructor
   // C = A;                                    // Assignment operator
   // Mat D (A, Rect(10, 10, 100, 100) ); // using a rectangle
   // Mat E = A(Range::all(), Range(1,3)); // using row and column boundaries
   // Mat F = A.clone();
   // Mat G;
   // A.copyTo(G);
   // imshow("G", G);
   // waitKey(6000);
   int divideWidth = 0;
   stringstream s;
   s << argv[2];
   s >> divideWidth;
   if (!s || !divideWidth)
   {
       cout << "Invalid number enetered for dividing." << endl;
       return -1;
   }

   uchar table[256];
   for (int i = 0; i < 256; ++i)
       table[i] = (uchar)(divideWidth * (i/divideWidth));
   double t = (double)getTickCount();

   cout << "Times passed in seconds: " << t << endl;
}