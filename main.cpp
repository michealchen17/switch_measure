#include <iostream>
#include <opencv2/opencv.hpp>
#include <halconcpp/HalconCpp.h>

int main(int argc, char *argv[])
{

    HalconCpp::HImage Mandrill("/home/chen/Desktop/monkey.png");
    Hlong width, height;
    Mandrill.GetImageSize(&width, &height);

    HalconCpp::HWindow w(0,0,width, height);
    Mandrill.DispImage(w);
    w.Click();
    w.ClearWindow();


    std::cout << "Hello World!" << std::endl;
    return 0;

}
