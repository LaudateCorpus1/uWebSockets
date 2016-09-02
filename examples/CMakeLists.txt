add_executable(echo echo.cpp)
target_include_directories(echo PUBLIC ../src)
target_link_libraries (echo LINK_PUBLIC uWS)
target_compile_options (echo PUBLIC -fno-exceptions)

add_executable(multithreaded_echo multithreaded_echo.cpp)
target_include_directories(multithreaded_echo PUBLIC ../src)
target_link_libraries (multithreaded_echo LINK_PUBLIC uWS)
target_compile_options (multithreaded_echo PUBLIC -fno-exceptions)
