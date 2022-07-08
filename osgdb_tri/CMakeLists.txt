cmake_minimum_required(VERSION 3.10)

set(ProjName osgdb_trid)
project(${ProjName} VERSION 1.0.0)


add_library(${ProjName} SHARED osgdb_tri.cpp)

get_filename_component(PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR} DIRECTORY)
get_filename_component(G_PARENT_DIR ${PARENT_DIR} DIRECTORY)

set(GLOB_LIBS ${G_PARENT_DIR}/lib/)
set(GLOB_INCLUDES ${G_PARENT_DIR}/include/)

message(STATUS "G_PARENT_DIR: ${G_PARENT_DIR}")
message(STATUS "PARENT_DIR: ${PARENT_DIR}")
message(STATUS "CURRENT_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")

message(STATUS "GLOB_LIBS: ${GLOB_LIBS}")
message(STATUS "GLOB_INCLUDES: ${GLOB_INCLUDES}")



include_directories(
    ${GLOB_INCLUDES}
)

target_include_directories(${ProjName}
                           INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
                           )

target_link_libraries(${ProjName} PUBLIC 
                        ${GLOB_LIBS}/osgd.lib ${GLOB_LIBS}/osgDBd.lib ${GLOB_LIBS}/osgUtild.lib ${GLOB_LIBS}/OpenThreadsd.lib
                        )
