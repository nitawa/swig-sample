# swig-sample


* Compilation

```bash
mkdir build
cd build
cmake -S .. -B . -DOPENCV_VERSION=3.4.14 (dans mon cas)
make
make install
```
* Validation

```python

python
>>> import example
>>> from example import Image
>>> img=Image()
>>> img.loadImageFromFile('cea.jpg')
Loading image from file: cea.jpg
Successfully loaded Image cea.jpg
>>> img.getImageInfo()
Image name  : cea.jpg
Object address 0x28f5500
   - columns: 500
   - rows   : 300
>>> img2= img.getMat()
>>> img.setMat(img2)
>>> img.getImageInfo()
    Image name  : cea.jpg
    Object address 0x28f5500
       - columns: 500
       - rows   : 300

```

```c
C++
./example
Loading image from file: cea.jpg
Successfully loaded Image cea.jpg
Image name  : cea.jpg
Object address 0x5569681e2d60
   - columns: 500
   - rows   : 300
Image name  : cea.jpg
 Object address 0x5569681e2d60
   - columns: 500
   - rows   : 300
```
