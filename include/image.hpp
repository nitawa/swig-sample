#ifndef __IMAGE__
#define __IMAGE__
#include <string>
#include <opencv2/opencv.hpp>

class Image{
private:
  cv::Mat* m_image;
  std::string m_name;
public:
  Image();
  ~Image();
  void loadImageFromFile(const char* );
  void setMat(cv::Mat*);
  cv::Mat* getMat(){return m_image;}
  void getImageInfo();
};
#endif //__IMAGE__
