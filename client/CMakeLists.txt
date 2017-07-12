
add_executable(client_so
    main.cpp)

set_property(TARGET client_so
    PROPERTY CXX_STANDARD 11)

target_link_libraries(client_so middleManA_shared middleManB_shared)

add_executable(client_a
    main.cpp)

set_property(TARGET client_a
    PROPERTY CXX_STANDARD 11)

target_link_libraries(client_a middleManA_static middleManB_static)

install(TARGETS client_so client_a
    LIBRARY DESTINATION ${CMAKE_BINARY_DIR}/test
    RUNTIME DESTINATION ${CMAKE_BINARY_DIR}/test)