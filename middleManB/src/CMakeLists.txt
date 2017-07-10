
add_library(middleManB_static STATIC
    source/blackMart.cpp)

set_property(TARGET middleManB_static
    PROPERTY CXX_STANDARD 11)

target_include_directories(middleManB_static
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE
    source)

target_link_libraries(middleManB_static treasureV2_static)

add_library(middleManB_shared SHARED
    source/blackMart.cpp)

set_property(TARGET middleManB_shared
    PROPERTY CXX_STANDARD 11)

target_include_directories(middleManB_shared
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE
    source)

target_link_libraries(middleManB_shared treasureV2_static)

install(TARGETS middleManB_shared
    LIBRARY DESTINATION ${CMAKE_BINARY_DIR}/test
    RUNTIME DESTINATION ${CMAKE_BINARY_DIR}/test)