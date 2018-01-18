project(switch_measure)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets)
find_package(Qt5Core)
find_package(Qt5Gui)

find_package(OpenCV REQUIRED)


link_directories(
    /opt/halcon/lib/x64-linux/
    /usr/local/lib/


    )

include_directories(

    /usr/local/include/opencv2
    /usr/local/include/opencv
    /opt/halcon/include
    /opt/halcon/include/cpp

    )


aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})


target_link_libraries(${PROJECT_NAME}
    halconcpp
    halconcppxl

    Qt5::Widgets
    Qt5::Core
    Qt5::Gui
    ${OpenCV_LIBS}


    )
