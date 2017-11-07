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

add_executable(2-5-kadai2 2-5-kadai2.cpp)
target_link_libraries(2-5-kadai2 ${GLUT_LIBRARY})
target_link_libraries(2-5-kadai2 ${OPENGL_LIBRARY})
target_link_libraries(2-5-kadai2 ${OpenCV_LIBS} )

add_executable(2-5-kadai3 2-5-kadai3.cpp)
target_link_libraries(2-5-kadai3 ${GLUT_LIBRARY})
target_link_libraries(2-5-kadai3 ${OPENGL_LIBRARY})
target_link_libraries(2-5-kadai3 ${OpenCV_LIBS})

add_executable(1-1 1-1.cpp)
target_link_libraries(1-1 ${OpenCV_LIBS})

add_executable(1-1-edge 1-1-edge.cpp)
target_link_libraries(1-1-edge ${OpenCV_LIBS})

add_executable(1-1-gaussian 1-1-gaussian.cpp)
target_link_libraries(1-1-gaussian ${OpenCV_LIBS})

add_executable(1-2 1-2.cpp)
target_link_libraries(1-2 ${OpenCV_LIBS})

add_executable(1-2-kadai 1-2-kadai.cpp)
target_link_libraries(1-2-kadai ${OpenCV_LIBS})

add_executable(1-3 1-3.cpp)
target_link_libraries(1-3 ${OpenCV_LIBS})

add_executable(1-3-kadai 1-3-kaidai.cpp)
target_link_libraries(1-3-kadai ${OpenCV_LIBS})

add_executable(1-4 1-4.cpp)
target_link_libraries(1-4 ${OpenCV_LIBS})

add_executable(1-4-2 1-4-2.cpp)
target_link_libraries(1-4-2 ${OpenCV_LIBS})

add_executable(1-4_fixed 1-4_fixed.cpp)
target_link_libraries(1-4_fixed ${OpenCV_LIBS})

add_executable(1-5 1-5.cpp)
target_link_libraries(1-5 ${OpenCV_LIBS})

add_executable(1-5-2 1-5-2.cpp)
target_link_libraries(1-5-2 ${OpenCV_LIBS})
