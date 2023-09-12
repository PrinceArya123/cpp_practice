#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    // Load the cascade classifier for face detection
    CascadeClassifier faceCascade;
    if (!faceCascade.load("haarcascade_frontalface_alt.xml"))
    {
        cerr << "Error: Could not load face cascade classifier!" << endl;
        return -1;
    }

    // Open the default camera (camera index 0)
    VideoCapture capture(0);

    if (!capture.isOpened())
    {
        cerr << "Error: Could not open camera!" << endl;
        return -1;
    }

    Mat frame;
    namedWindow("Face Detection", WINDOW_NORMAL);

    while (true)
    {
        capture >> frame;
        if (frame.empty())
            break;

        // Convert the frame to grayscale for face detection
        Mat gray;
        cvtColor(frame, gray, COLOR_BGR2GRAY);
        equalizeHist(gray, gray);

        // Detect faces in the grayscale frame
        vector<Rect> faces;
        faceCascade.detectMultiScale(gray, faces, 1.1, 3, 0 | CASCADE_SCALE_IMAGE, Size(30, 30));

        // Draw rectangles around detected faces
        for (size_t i = 0; i < faces.size(); i++)
        {
            Point pt1(faces[i].x, faces[i].y);
            Point pt2(faces[i].x + faces[i].width, faces[i].y + faces[i].height);
            rectangle(frame, pt1, pt2, Scalar(0, 255, 0), 2);
        }

        // Display the frame with detected faces
        imshow("Face Detection", frame);

        // Exit the loop if the user presses the 'q' key
        if (waitKey(1) == 'q')
            break;
    }

    // Release the video capture object and close the window
    capture.release();
    destroyAllWindows();

    return 0;
}
