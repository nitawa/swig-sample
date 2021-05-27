import example
from example import Image

print("Testing Image creation")

# on cree une instance de Image (C++)
img=Image()

# on appelle la methode C++ pour creer un objet cv::Mat* a partir de l'image au format jpg
# a ce stade l'image est contenue dans le C++
img.loadImageFromFile('cea.jpg')

# on imprime des infos sur l'image precedente
img.getImageInfo()

# on recupere au sens python l'image (l'objet cv::Mat*)
img2 = img.getMat()

# on renvoie l'image au C++
img.setMat(img2)

# on reimprime l'info.pour s'assurer que c'est la m
img.getImageInfo()

