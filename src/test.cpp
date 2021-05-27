#include <iostream>
#include "image.hpp"

int main(int argc, char** argv){
  Image* image = new Image();
  image->loadImageFromFile("cea.jpg");
  image->getImageInfo();
  cv::Mat* mat = image->getMat();
  image->setMat(mat);
  image->getImageInfo();
  return 0;
}
