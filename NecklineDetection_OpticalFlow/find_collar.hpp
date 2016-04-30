#ifndef find_collar_hpp
#define find_collar_hpp

#define long_max 120
#define lineLengthMax 130
#define lineWidthRange 5
#define neck_find 50
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <algorithm>
using namespace cv;
using namespace std;

Mat skincolor(Mat&);
bool skincolor(double);
void CreateTrackbar();
void find_collar(Mat&);

#endif /* find_collar_hpp */
