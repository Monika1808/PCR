#ifndef DEFINE_H
#define DEFINE_H
#include<QSlider>


//stylesheet
#define LOGIN_PB_STYSHEET  "background: #9A9AFF;font: bold 28pt Brutal Type;color: #000000;border: 3px solid #000000;border-radius: 25px;"


#define H_SLIDER_STYL       "QSlider::groove:horizontal {background-color: rgb(180, 180, 180);border: 0px solid  rgb(3,36,168);height: 10px;\
                            border-radius: 4px;} QSlider::handle:horizontal {background-color: white;border: 2px solid white; width: 16px; \
                            height: 20px;line-height: 20px;margin-top: -5px;margin-bottom: -5px;border-radius: 10px;} \
                            QSlider::handle:horizontal:hover {border-radius: 10px;}QSlider::sub-page:horizontal {background: blue;\
                            height: 10px;border-radius: 4px;}"


#define STOP_PB_BLUE_STYLE    "background-color: rgb(5, 30, 126);font: 12pt;color: #ffffff;border: 1px solid rgb(5, 30, 126);border-radius: 0px;"

#define STOP_PB_RED_STYLE    "background-color: rgb(255, 0, 0);font: 12pt;color: #ffffff;border: 1px solid rgb(255, 0, 0);border-radius: 0px;"



// Module A PB Geomertry
#define NEW_TEST_PB_GOE_A           600,915,150,50
#define VIEW_RESULTS_PB_GOE_A       420,915,150,50
#define STOP_PB_GOE_A               780,915,150,50

// Module B PB Geomertry
#define NEW_TEST_PB_GOE_B           600,915,150,50
#define VIEW_RESULTS_PB_GOE_B       420,915,150,50
#define STOP_PB_GOE_B               780,915,150,50




//Module B stack index
#define  BEFORE_TEST_START_PAGE_B   0
#define  TEST_START_PAGE_B          1

//Module A stack index
#define  BEFORE_TEST_START_PAGE_A   0
#define  TEST_START_PAGE_A          1












#endif // DEFINE_H
