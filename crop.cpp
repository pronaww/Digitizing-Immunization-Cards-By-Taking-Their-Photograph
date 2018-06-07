// You mention that you start with a CVMat* imagesource
CVMat * imagesource;

// Transform it into the C++ cv::Mat format
cv::Mat image(imagesource); 

// Setup a rectangle to define your region of interest
cv::Rect myROI(10, 10, 100, 100);

// Crop the full image to that image contained by the rectangle myROI
// Note that this doesn't copy the data
cv::Mat croppedImage = image(myROI);



