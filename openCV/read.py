import cv2 as cv
#img=cv.imread('D:\~Sanjay\~robo_manipal_taskphase\OpenCV/test.jpg')
#cv.imshow('test',img)
#cv.waitKey(0)  #waits for keyboard key to be pressed.

#Reading videos
capture=cv.VideoCapture('D:\~Sanjay\~robo_manipal_taskphase\OpenCV/testvideo.mp4')

while True:
	isTrue, frame= capture.read()
	cv.imshow('testvideo',frame)

	if cv.waitKey(20) & 0xFF==ord('d'):  #if letter d is pressed break out
		break
capture.release()
cv.destroyAllWindows()

