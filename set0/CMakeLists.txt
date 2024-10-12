cmake_minimum_required(VERSION 3.25)

project(cprojecttemplate 
	VERSION 1.0.0 
	LANGUAGES C CXX)

add_subdirectory(src) # before app directory
add_subdirectory(app)

