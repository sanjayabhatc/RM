import cv2 as cv
img=cv.imread("/home/ubuntu/opencv/data/opencv-4.x/samples/data/fruits.jpg")
cv.imshow('fruits',img)

gray=cv.cvtColor(img,cv.COLOR_BGR2GRAY)
cv.imshow('Gray',gray)

blur=cv.GaussianBlur(img,(5,5),cv.BORDER_DEFAULT)
cv.imshow('Blur',blur)

canny=cv.Canny(blur,125,175)
cv.imshow('Canny Edges',canny)

#ret,threah=cv.threshold(gray)

contours,hierarchies=cv.findContours(canny,cv.RETR_LIST,cv.CHAIN_APPROX_SIMPLE)

#list for hierarchical contours
#external for external contours
#list for all the contours
#how we want to approximate the contour- SIMPLE-takes all the point and compresses to end points.
print({len(contours)},"contour(s) found: ")

cv.waitKey(0)
