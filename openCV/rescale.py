import cv2 as cv
img=cv.imread('D:\~Sanjay\~robo_manipal_taskphase\OpenCV/testlarge.jpg')
cv.imshow('testlarge',img)


def rescaleFrame(frame,scale=0.75):
	#images, videos, live videos
	width=int(frame.shape[1]*scale)
	height=int(frame.shape[0]*scale)
	dimensions=(width,height)

	return cv.resize(frame,dimensions,interpolation=cv.INTER_AREA)

resized_image=rescaleFrame(img)
cv.imshow('Image',resized_image)

def changeRes(width,height):
	#live videos
	capture.set(3,width)
	capture.set(4,height)

#Reading videos
capture=cv.VideoCapture('D:\~Sanjay\~robo_manipal_taskphase\OpenCV/testvideo.mp4')

while True:
	isTrue, frame= capture.read()

	frame_resized=rescaleFrame(frame,scale=.2)

	cv.imshow('testvideo',frame)
	cv.imshow('Video Resized', frame_resized)

	if cv.waitKey(20) & 0xFF==ord('d'):  #if letter d is pressed break out
		break
capture.release()
cv.destroyAllWindows()

cv.waitKey(0)  #waits for keyboard key to be pressed.