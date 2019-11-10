add_executable(test_DynArray test_DynArray.cpp)
target_link_libraries(test_DynArray DynArray)
set_property(TARGET test_DynArray PROPERTY CXX_STANDARD 17)
