#include <opencv2/opencv.hpp>
#include <string>

int main()
{
    std::string imgName = "../ImageSource/IMG20230726.jpg";
    //std::string imgName = "..\\ImageSource\\IMG20230726.jpg";
    cv::Mat imgInput = cv::imread(imgName, -1);
    if (imgInput.empty())
    {
        printf("Cannot Read Current Image");
        return 0;
    }
    printf("Done");
    return 1;
}