
add_library(dependency_interface STATIC 
    "file.cpp"
    "serial.cpp"
    "i2c.cpp"
    "stdin.cpp"
    "stdout.cpp"
    "file_descriptor.cpp"
    "socket.cpp"
    "reconnectable_socket.cpp"
    "tcp.cpp"
    "udp.cpp"
    "unix_socket.cpp"
)
add_library(dependency::interface ALIAS dependency_interface)

target_include_directories(dependency_interface PRIVATE "./" "include/interface/")
target_include_directories(dependency_interface PUBLIC "include/")

if(${INTERFACE_FD_DEBUG})
    target_compile_definitions(dependency_interface PRIVATE INTERFACE_FD_DEBUG=1)
endif(${INTERFACE_FD_DEBUG})

if(${INTERFACE_SOCKET_DEBUG})
    target_compile_definitions(dependency_interface PRIVATE INTERFACE_SOCKET_DEBUG=1)
endif(${INTERFACE_SOCKET_DEBUG})

setup_target(dependency_interface)

