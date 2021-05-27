%module image

%include std_string.i
%include <opencv.i>
%cv_instantiate_all_defaults

%{
#include "image.hpp"
%}
%include "image.hpp"
