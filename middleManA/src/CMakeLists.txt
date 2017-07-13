
add_library(middleManA_static STATIC
    source/store.cpp)

set_property(TARGET middleManA_static
    PROPERTY CXX_STANDARD 11)

target_include_directories(middleManA_static
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE
    source)

target_link_libraries(middleManA_static treasureV1_static)

add_library(middleManA_shared SHARED
    source/store.cpp)

set_property(TARGET middleManA_shared
    PROPERTY CXX_STANDARD 11)

set_property(TARGET middleManA_shared
    PROPERTY CMAKE_CXX_VISBILITY_PRESET hidden)

target_include_directories(middleManA_shared
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE
    source)

target_link_libraries(middleManA_shared treasureV1_static)

install(TARGETS middleManA_shared
    LIBRARY DESTINATION ${CMAKE_BINARY_DIR}/test
    RUNTIME DESTINATION ${CMAKE_BINARY_DIR}/test)

