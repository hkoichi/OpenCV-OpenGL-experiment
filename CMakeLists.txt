cmake_minimum_required(VERSION 2.8)

project(opengl)

set( OpenCV_DIR "/home/denjo/opencv-2.4.9/release" )
set( OpenCV_FOUND 1 )
find_package(GLUT)
find_package(OpenGL)
find_package(OpenCV REQUIRED)

add_executable(2-1 2-1.cpp)
target_link_libraries(2-1 ${GLUT_LIBRARY})
target_link_libraries(2-1 ${OPENGL_LIBRARY})

add_executable(2-1-kadai 2-1-kadai.cpp)
target_link_libraries(2-1-kadai ${GLUT_LIBRARY})
target_link_libraries(2-1-kadai ${OPENGL_LIBRARY})

add_executable(2-2 2-2.cpp)
target_link_libraries(2-2 ${GLUT_LIBRARY})
target_link_libraries(2-2 ${OPENGL_LIBRARY})

add_executable(2-2-kadai 2-2-kadai.cpp)
target_link_libraries(2-2-kadai ${GLUT_LIBRARY})
target_link_libraries(2-2-kadai ${OPENGL_LIBRARY})

add_executable(2-3 2-3.cpp)
target_link_libraries(2-3 ${GLUT_LIBRARY})
target_link_libraries(2-3 ${OPENGL_LIBRARY})

add_executable(2-3-kadai 2-3-kadai.cpp)
target_link_libraries(2-3-kadai ${GLUT_LIBRARY})
target_link_libraries(2-3-kadai ${OPENGL_LIBRARY})

add_executable(2-4 2-4.cpp)
target_link_libraries(2-4 ${GLUT_LIBRARY})
target_link_libraries(2-4 ${OPENGL_LIBRARY})

add_executable(2-4-kadai 2-4-kadai.cpp)
target_link_libraries(2-4-kadai ${GLUT_LIBRARY})
target_link_libraries(2-4-kadai ${OPENGL_LIBRARY})

add_executable(2-5 2-5.cpp)
target_link_libraries(2-5 ${GLUT_LIBRARY})
target_link_libraries(2-5 ${OPENGL_LIBRARY})
target_link_libraries(2-5 ${OpenCV_LIBS})

add_executable(2-5-kadai 2-5-kadai.cpp)
target_link_libraries(2-5-kadai ${GLUT_LIBRARY})
target_link_libraries(2-5-kadai ${OPENGL_LIBRARY})
target_link_libraries(2-5-kadai ${OpenCV_LIBS} )