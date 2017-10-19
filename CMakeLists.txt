cmake_minimum_required(VERSION 2.8.10)

project("IO Library" CXX)

add_executable(RecipeFromGit main.cpp)

set_target_properties(RecipeFromGit PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)

install(TARGETS RecipeFromGit RUNTIME DESTINATION bin)
