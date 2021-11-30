CMAKE_MINIMUM_REQUIRED(VERSION 3.17)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(run
    main.cpp
)

#ADD_EXECUTABLE(unittests unit-tests/test.cpp Player.hpp Item.hpp) 

#TARGET_LINK_LIBRARIES(unittests gtest)
#TARGET_COMPILE_DEFINITIONS(unittests PRIVATE gtest_disable_pthreads=ON)


