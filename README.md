# Doxygen with Github Actions

On code change or docs change,
CMake is run to generate the make build files, and written to the build-folder
When make is run in the build-folder, it generated the docs
The documentation is built automatically at build-folder/html/index.html