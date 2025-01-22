#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
using namespace std;

int main()
{
    string path = "/home/khaled/CodingWorkspace/CppWorkspace/openCV_with_cpp/Lenna.png";
    cv :: Mat img = cv :: imread(path, cv :: IMREAD_COLOR);
    cv :: Mat bilateralImg, gaussianImg, medianImg;
    /*
bilateralFilter	(	
InputArray 	src,
OutputArray 	dst,
int 	d,
double 	sigmaColor,
double 	sigmaSpace,
int 	borderType = BORDER_DEFAULT 
)

============

GaussianBlur	(	
InputArray 	src,
OutputArray 	dst,
Size 	ksize,
double 	sigmaX,
double 	sigmaY = 0,
int 	borderType = BORDER_DEFAULT 
)	

============

medianBlur	(	
InputArray 	src,
OutputArray 	dst,
int 	ksize 
)	
*/ 
    cv :: bilateralFilter(img, bilateralImg, 15, 80, 45 );
    cv :: GaussianBlur(img, gaussianImg, cv :: Size(15, 15), 80, 45);
    cv :: medianBlur(img, medianImg, 15);
    cv :: imshow("Original Image", img);
    cv :: imshow("Bilateral Image", bilateralImg);
    cv :: imshow("Gaussian Image", gaussianImg);
    cv :: imshow("Median Image", medianImg);
    cv :: waitKey(0);

    return 0;
}