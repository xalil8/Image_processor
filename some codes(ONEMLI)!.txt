
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
void boyutlandır(Mat &input,int row,int column)
{
    Mat* girici;
    girici = &input;
    resize(input, *girici, Size(row,column), 0,0,1);
}

void callmouse(int event, int x, int y, int flags, void* parameter)
{
    if (event == EVENT_LBUTTONDOWN)
        std::cout << "left clicked. Mouse Cordinates are : " << x << "x"<<y<<std::endl;
    else if(event ==EVENT_RBUTTONDOWN)
        std::cout << "right clicked. Mouse Cordinates are : " << x << "x" << y << std::endl;
    else if (event == EVENT_MBUTTONDOWN)
        std::cout << "middle button clicked. Mouse Cordinates are : " << x << "x" << y << std::endl;
   // else if (event == EVENT_MOUSEMOVE)
    //    std::cout << "mouse moved. Mouse Cordinates are : " << x << "x" << y << std::endl;
}

cv::Mat function()
{
    // create image
    cv::Mat ima(500, 500, CV_8U, 50);
    // return it
    return ima;
}
class Test {
    // image attribute
    cv::Mat ima;
public:
    // constructor creating a gray-level image
    Test() : ima(240, 320, CV_8U, cv::Scalar(100)) {}
    // method return a class attribute, not a good idea...
    cv::Mat method() { return ima; }
};

int main()
{/*
    cv::Mat image1(240, 320, CV_8U, 100);
    cv::imshow("Image", image1); // show the image
    cv::waitKey(0); // wait for a key pressed
    // re-allocate a new image
    image1.create(200, 200, CV_8U);
    image1 = 200;
    cv::imshow("Image", image1); // show the image
    cv::waitKey(0); // wait for a key pressed
    // create a red color image
    // channel order is BGR
    cv::Mat image2(240, 320, CV_8UC3, cv::Scalar(0, 0, 255));
    // or:
    // cv::Mat image2(cv::Size(320,240),CV_8UC3);
    // image2= cv::Scalar(0,0,255);
    cv::imshow("Image", image2); // show the image
    cv::waitKey(0); // wait for a key pressed
    // read an image
    cv::Mat image3 = cv::imread("C:/Users/ozcan/Desktop/opencv-fotolar/newsize.jpg");
    // all these images point to the same data block
    cv::Mat image4(image3);
    image1 = image3;
    // these images are new copies of the source image
    image3.copyTo(image2);
    cv::Mat image5 = image3.clone();
    // transform the image for testing
    cv::flip(image3, image3, 1);
    // check which images have been affected by the processing
   
    cv::waitKey(0); // wait for a key pressed
    // get a gray-level image from a function
    cv::Mat gray = function();
    cv::imshow("Image", gray); // show the image
    cv::waitKey(0); // wait for a key pressed
    // read the image in gray scale
    image1 = cv::imread("C:/Users/ozcan/Desktop/opencv-fotolar/newsize.jpg");
    image1.convertTo(image2, CV_32F, 1 / 255.0, 0.0);
    cv::imshow("Image", image2); // show the image
    cv::waitKey(0); // wait for a key pressed
   */
   
    /*Matx33d matrix(3.0, 2.0, 1.0,
        2.0, 1.0, 3.0,
        1.0, 2.0, 3.0); */
   /*     Mat image=imread("C:/Users/ozcan/Desktop/opencv-fotolar/newsize.jpg");
    cv::Mat imageROI(image,Rect(image.cols - logo.cols, coordinates image.rows - logo.rows, logo.cols, logo.rows)); // ROI size
        
       logo.copyTo(imageROI);
       imageROI = image(Range(image.rows - logo.rows, image.rows),Range(image.colslogo.cols, image.cols));

    */
    Mat logo = imread("C:/Users/ozcan/Desktop/opencv-fotolar/logo.png");
    Mat newlogo;
    imshow("hadiollum", logo);

    boyutlandır(logo, 120,120);
    imshow("hadiollum", logo);
    waitKey();
    logo.copyTo(newlogo);
    imwrite("C:/Users/ozcan/Desktop/opencv-fotolar/newlogo.png", newlogo);
    return 0;
}


///////////////////////////////// roi(region of interest funct use )////////////////
 Mat image= imread("C:/Users/ozcan/Desktop/opencv-fotolar/newsize.jpg");
    Mat logo =imread("C:/Users/ozcan/Desktop/opencv-fotolar/newlogo.png");
 
 
    Mat imageROI(image, Rect(image.cols - logo.cols, image.rows - logo.rows, logo.cols, logo.rows));
    logo.copyTo(imageROI);
    imshow("hadi", image);
    waitKey();
	
	//////////////////////////////// changing pixels (salt paper )///////////////
	
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include <iostream>
#include <random>
using namespace cv;

void salt(cv::Mat image, int n)
{

    std::default_random_engine generator;
    std::uniform_int_distribution<int> randomRow(0, image.rows-2);
    std::uniform_int_distribution<int>randomCol(0, image.cols-1);
    int i, j;
    for (int k = 0; k < n; k++)
    {
        // random image coordinate
        i = randomCol(generator);
        j = randomRow(generator);
       // if ((j< 330&& j>110))
        {   
            if (image.type() == CV_8UC1)
            {
                image.at<uchar>(j, i) = 255;
            }
            else if (image.type() == CV_8UC3)
            {
                image.at<cv::Vec3b>(j, i)[0] = 127;
                image.at<cv::Vec3b>(j, i)[1] = 255; // color image// 3-channel image
                image.at<cv::Vec3b>(j, i)[2] = 212;
            }
        }
    }
}
int main()
{
    Mat image = imread("C:/Users/ozcan/Desktop/opencv-fotolar/newsize.jpg",1);
    salt(image, 10);
    namedWindow("image");
    imshow("image", image);
    waitKey();

    return 0;
}






