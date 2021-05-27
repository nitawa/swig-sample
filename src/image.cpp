#include "image.hpp"
#include <opencv2/imgcodecs.hpp>
#include <iostream>

Image::Image(){
  m_image = NULL;
  m_name  = "";
}

Image::~Image(){
  if (m_image) delete m_image;
}

void Image::loadImageFromFile(const char* name){
  std::cout << "Loading image from file: " << name << std::endl;
  if (m_image) delete m_image;
  m_name = std::string(name);
  m_image = new cv::Mat(cv::imread(name, cv::IMREAD_ANYCOLOR ));
  if (m_image->empty()){
    std::cout << "Image " << name << " is empty!" << std::endl;
    return;
  }
  std::cout << "Successfully loaded Image " << name << std::endl;
}

void Image::getImageInfo(){
  if (m_image == NULL){
    std::cout << "Image is NULL" << std::endl;
    return;
  }
  std::cout << "Image name  : " << m_name << std::endl;
  std::cout << "Object address " << (void*)m_image << std::endl;
  std::cout << "   - columns: " << m_image->cols << std::endl;
  std::cout << "   - rows   : " << m_image->rows << std::endl;
}

void Image::setMat(cv::Mat* ref){
  if (ref == NULL){
    std::cout << "input image is NULL" << std::endl;
    return;
  }
  m_image = ref;
}
