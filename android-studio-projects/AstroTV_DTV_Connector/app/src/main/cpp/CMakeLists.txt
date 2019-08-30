# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_library(
        # Sets the name of the library.
        native-lib
        # Sets the library as a shared library.
        SHARED
        # Provides a relative path to your source file(s).
        native-lib.cpp
)

add_library(
        # Sets the name of the library.
        AstroTV_DTV_Connector-lib
        # Sets the library as a module to be loaded dynamically at runtime.
        SHARED #{ STATIC , SHARED , MODULE }
        # References a library file located outside the project.
        IMPORTED
        # This option extends visibility to outside the directory in which it is created and below
        GLOBAL
)

set_target_properties(
        # Sets the name of the target.
        AstroTV_DTV_Connector-lib PROPERTIES
        # Set properties on a target.
        #IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/arm64-v8a
        #IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/x86_64
        #IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/armeabi-v7a
        #IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/x86
        IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/${ANDROID_ABI}
)

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.





find_library( # Sets the name of the path variable.
        log-lib

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log
)

find_library( # Sets the name of the path variable.
        a-dtv-c

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        #IMPORTED AstroTV_DTV_Connector-lib
        #IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/arm64-v8a
        #IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/x86_64
        #IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/armeabi-v7a
        #IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/x86
        #IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/libs/${ANDROID_ABI}
        IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/libs/x86
        AstroTV_DTV_Connector
)

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
        native-lib

        # Links the target library to the log library
        # included in the NDK.
        ${log-lib}
        #${a-dtv-c}
        /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/${ANDROID_ABI}/libAstroTV_DTV_Connector.so
)

#target_link_libraries( # Specifies the target library.
#        AstroTV_DTV_Connector
#
#        #IMPORTED /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/arm64-v8a/libAstroTV_DTV_Connector.so
#        #IMPORTED /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/x86_64/libAstroTV_DTV_Connector.so
#        #IMPORTED /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/armeabi-v7a/libAstroTV_DTV_Connector.so
#        #IMPORTED /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/x86/libAstroTV_DTV_Connector.so
#        #IMPORTED /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/${ANDROID_ABI}/libAstroTV_DTV_Connector.so
#
#        #IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/arm64-v8a
#        #IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/x86_64
#        #IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/armeabi-v7a
#        #IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/x86
#        #IMPORTED_LOCATION /home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/${ANDROID_ABI}
#
#        #/home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/arm64-v8a/libAstroTV_DTV_Connector.so
#        #/home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/x86_64/libAstroTV_DTV_Connector.so
#        #/home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/armeabi-v7a/libAstroTV_DTV_Connector.so
#        #/home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/x86/libAstroTV_DTV_Connector.so
#        #/home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/${ANDROID_ABI}/libAstroTV_DTV_Connector.so
#
#        #-L/home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/${ANDROID_ABI} -lAstroTV_DTV_Connector
#        #AstroTV_DTV_Connector
#        #${a-dtv-c}
#)
