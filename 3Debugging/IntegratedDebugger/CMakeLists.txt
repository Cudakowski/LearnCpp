if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
  message(FATAL_ERROR "In-source builds are not allowed.")
endif ()

cmake_minimum_required(VERSION 3.21 FATAL_ERROR)

set(CMAKE_CXX_FLAGS_DEBUG_INIT "-Wall -fdiagnostics-color=always -g -ggdb -pedantic-errors -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror")
set(CMAKE_CXX_FLAGS_RELEASE_INIT "-Wall -fdiagnostics-color=always -g -02 -DNDEBUG -pedantic-errors -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror")
# change above flags
    # "-Werror", treat warnings as errors
    # "-std=c++23", force c++23 standard ; set lower

    
project(IntegratedDebugger LANGUAGES CXX) #change project name
set(${PROJECT_NAME}_VERSION_MAJOR  0)
set(${PROJECT_NAME}_VERSION_MINOR  0)
set(${PROJECT_NAME}_VERSION_PATCH  0)
set(${PROJECT_NAME}_VERSION_TWEAK  0)
set(${PROJECT_NAME}_VERSION "${${PROJECT_NAME}_VERSION_MAJOR}.${${PROJECT_NAME}_VERSION_MINOR}.${${PROJECT_NAME}_VERSION_PATCH}.${PROJECT_NAME}_VERSION_TWEAK")


# prevent for in-source building
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES  ON) #“Don’t allow this project to modify files in the source directory during configuration or build.


set(CMAKE_BUILD_TYPE Debug) # change to Release if needed
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) #disables -std=gnu++23 and leaves -std=c++23

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp") #getting all source files
add_executable(${PROJECT_NAME} ${SOURCES}) #setting sources to found ones
#add_subdirectory() #thats a surprise tool thats gonna help us later ;)

target_include_directories(${PROJECT_NAME} PUBLIC 
    "${PROJECT_BINARY_DIR}/include"
)

