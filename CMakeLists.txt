cmake_minimum_required(VERSION 3.5.0)
project(VectorGraphicsEditor VERSION 0.1.0 LANGUAGES C CXX)

add_executable(VectorGraphicsEditor canvas.cpp canvasView.cpp GraphicsController.cpp main.cpp)

target_compile_options(VectorGraphicsEditor PRIVATE -fconcepts)
install(TARGETS VectorGraphicsEditor DESTINATION bin)
set(CPACH_GENERATOR "DEB;ZIP")

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT example@example.com)
include(CPack)
