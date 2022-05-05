import cv2 as cv
import numpy as np
img=cv.imread("/home/ubuntu/opencv/data/opencv-4.x/samples/data/messi5.jpg")
cv.imshow('messi5',img)

#Translation
def translate(im,x,y):
    transMat=np.float32([[1,0,x],[0,1,y]])
    dimensions=(img.shape[1],img.shape[0])
    return cv.warpAffine(img,transMat,dimensions)

# -x --> left
# -y --> up
#  x --> right
#  y --> down

translated=translate(img,-100,100)
cv.imshow("translated",translated)

#rotation
def rotate(img,angle,rotPoint=None):
    (height,width)=img.shape[:2]
    
    if rotPoint is None:
        rotPoint=(width//2,height//2)
    rotMat=cv.getRotationMatrix2D(rotPoint,angle,1.0)
    dimensions=(width,height)
    
    return cv.warpAffine(img,rotMat,dimensions)

rotated=rotate(img,45)
cv.imshow('Rotated',rotated)

rotated_rotated=rotate(rotated,45)
cv.imshow('Rotated Rotated',rotated_rotated) #here the empty black triangles also try to rotated resulting in a skewed image.

#resizing
resized=cv.resize(img,(500,500),interpolation=cv.INTER_CUBIC)  #CUBIC is slower but better, u can also use _AREA to shrinken the image, _LINEAR/_CUBIC to enlarge
cv.imshow('Resized',resized)

#Flipping
flip=cv.flip(img,1) #0=> flipping vertically, 1=> horizontally, -1=> both horizontal and vertical
cv.imshow('Flip',flip)

#cropping
cropped=img[200:400,300:400]
cv.imshow('cropped',cropped)

cv.waitKey(0)