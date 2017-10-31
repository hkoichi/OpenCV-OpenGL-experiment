#include <opencv2/opencv.hpp>
#include <stdio.h>

#define IN_VIDEO_FILE "sample_video_input.avi"
#define OUT_VIDEO_FILE "sample_video_output.avi"

int main(int argc, char *argv[]){


        // 1. prepare VideoCapture Object
        cv::VideoCapture cap;
        std::string input_index;
        if(argc > 1){ // capture from video file
                input_index = argv[1];
                cap.open(input_index);
        }else {
                cap.open(1);
        }
        // 2. prepare VideoWriter Object
        cv::Mat frame, copy_frame, framePlay;
        int rec_mode = 0;
        int play_mode = 0;

        cv::namedWindow("video", 1);
        cv::VideoWriter output_video;

        cv::VideoCapture video(IN_VIDEO_FILE);
        cv::namedWindow("hoge");

        std::string out_video_file = OUT_VIDEO_FILE; 
        /* using "MJPG" as the video codec */
        output_video.open(out_video_file, CV_FOURCC('M', 'J', 'P', 'G'), 30, cv::Size(640, 480));

        if(!cap.isOpened() || !output_video.isOpened()){
                printf("no input video\n");
                return 0;
        }
        else 
        {
                bool loop_flag = true;
                while(loop_flag){

                        // 3. capture frame from VideoCapture
                        cap >> frame;
                        if(frame.empty()){
                                break;
                        }

                        // 4. save frame
                        if(rec_mode){
                                output_video << frame;
                                frame.copyTo(copy_frame);
                                cv::Size s = frame.size();
                                cv::rectangle(copy_frame, cv::Point(0,0), cv::Point(s.width-1, s.height-1), cv::Scalar(0,0,255),4,8,0);
                                cv::imshow("video", copy_frame);  
                        }
                        else{
                                cv::imshow("video", frame);  
                        }

                        if(play_mode) {
                                video >> framePlay;
                                //if(framePlay.empty()) {
                                //        play_mode=0;
                                //}else{
                                        imshow("hoge", framePlay);
                                //}
                          
                        }

                        // 5. process according to input key
                        int k = cv::waitKey(33);
                        switch(k){
                                case 'q':
                                case 'Q':
                                        loop_flag = false;
                                        break;
                                case 'r':
                                        if(rec_mode == 0){
                                                rec_mode = 1;
                                        }else{
                                                rec_mode = 0;
                                        }
                                        break;
                                case 'p':
                                        if(play_mode == 0) {
                                                play_mode = 1;
                                        }else {
                                                play_mode = 0;
                                        }
                        }
                }
        }
        system("mv ./sample_video_output.avi ./sample_video_input.avi");
        return 0;
}
