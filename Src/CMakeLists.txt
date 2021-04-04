include_directories(${ROOT_DIR}/Inc)

add_library(gen_hello STATIC gen_hello.cpp)
add_executable(hello.out main.cpp)

target_link_libraries(hello.out gen_hello)

install(TARGETS gen_hello DESTINATION ${ROOT_DIR}/lib)
install(TARGETS hello.out DESTINATION ${ROOT_DIR}/bin)