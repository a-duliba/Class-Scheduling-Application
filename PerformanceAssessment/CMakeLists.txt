# CMakeList.txt : CMake project for PerformanceAssessment, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (PerformanceAssessment "main.cpp"  "roster.cpp" "degree.h" "student.cpp" "student.h" "roster.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET PerformanceAssessment PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
