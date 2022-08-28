import cv2 as cv
import numpy as np

#Python numpy. zeros() function returns a new array of given shape and type, where the element's value as 0.
blank=np.zeros((500,500,3),dtype='uint8')
#cv.imshow('Blank',blank)

#1. Paint the image with a certain color
#blank[200:300, 300:400]=0,0,255
#cv.imshow('Green',blank)

#2.draw a rectangle
#cv.rectangle(blank,(0,0),(250,500),(0,255,0),thickness=2)
#cv.rectangle(blank,(0,0),(250,500),(0,255,0),thickness=cv.FILLED) # or give thickness=-1
#cv.rectangle(blank,(0,0),(blank.shape[1]//2,blank.shape[0]//2),(0,255,0),thickness=-1)
#cv.imshow("Rectangle",blank)

#3. draw a circle
#cv.circle(blank,(250,250),40,(0,0,255),thickness=-1)
#cv.imshow("Circle",blank)

# 4. draw a line
#cv.line(blank,(0,0),(blank.shape[1]//2,blank.shape[0]//2),(255,255,255),thickness=3)
#cv.imshow('Line',blank)

# 5. write text on an image
cv.putText(blank,'Hello, My name is Sanjay, enjoying the first time trying OpenCV !!',(0,255),cv.FONT_HERSHEY_TRIPLEX,1.0,(0,255,0),2)
cv.imshow('Text',blank)


#img=cv.imread('D:\~Sanjay\~robo_manipal_taskphase\OpenCV/test.jpg')
#cv.imshow('test',img)

cv.waitKey(0)