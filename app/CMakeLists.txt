
cmake_minimum_required(VERSION 3.4.1)
#导入头文件
include_directories(src/main/jniLibs/include)
#添加链接库
add_library(
             avdevice-57
             SHARED
             IMPORTED  )
set_target_properties( avdevice-57
                       PROPERTIES IMPORTED_LOCATION
                       ${CMAKE_SOURCE_DIR}/src/main/jniLibs/armeabi-v7a/libavdevice-57.so )

add_library( avformat-57
             SHARED
             IMPORTED  )
set_target_properties( avformat-57
                       PROPERTIES IMPORTED_LOCATION
                       ${CMAKE_SOURCE_DIR}/src/main/jniLibs/armeabi-v7a/libavformat-57.so )

add_library( avcodec-57
             SHARED
             IMPORTED  )
set_target_properties( avcodec-57
                       PROPERTIES IMPORTED_LOCATION
                       ${CMAKE_SOURCE_DIR}/src/main/jniLibs/armeabi-v7a/libavcodec-57.so )

add_library( avfilter-6
             SHARED
             IMPORTED  )
set_target_properties( avfilter-6
                       PROPERTIES IMPORTED_LOCATION
                       ${CMAKE_SOURCE_DIR}/src/main/jniLibs/armeabi-v7a/libavfilter-6.so )

add_library( avutil-55
             SHARED
             IMPORTED  )
set_target_properties( avutil-55
                       PROPERTIES IMPORTED_LOCATION
                       ${CMAKE_SOURCE_DIR}/src/main/jniLibs/armeabi-v7a/libavutil-55.so )

add_library( libpostproc-54
        SHARED
        IMPORTED  )
set_target_properties( libpostproc-54
        PROPERTIES IMPORTED_LOCATION
        ${CMAKE_SOURCE_DIR}/src/main/jniLibs/armeabi-v7a/libpostproc-54.so )

add_library( swresample-2
             SHARED
             IMPORTED  )
set_target_properties( swresample-2
                       PROPERTIES IMPORTED_LOCATION
                       ${CMAKE_SOURCE_DIR}/src/main/jniLibs/armeabi-v7a/libswresample-2.so )

add_library( swscale-4
             SHARED
             IMPORTED  )
set_target_properties( swscale-4
                       PROPERTIES IMPORTED_LOCATION
                       ${CMAKE_SOURCE_DIR}/src/main/jniLibs/armeabi-v7a/libswscale-4.so )


#自动
add_library( # Sets the name of the library.
             native-lib
             SHARED
             src/main/cpp/native-lib.cpp )

find_library(
              log-lib
              log )

target_link_libraries(
                       native-lib
                       avdevice-57
                       avformat-57
                       avcodec-57
                       avfilter-6
                       avutil-55
                       libpostproc-54
                       swresample-2
                       swscale-4
                       -landroid
                       ${log-lib} )