
add_executable(client
    main.cpp)

set_property(TARGET client
    PROPERTY CXX_STANDARD 11)

target_link_libraries(client middleManA_static middleManB_static)
