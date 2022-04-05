# Doxygen with Github Actions

In this repository, Sphinx documentation is generated from the output generated by Doxygen using Breathe.

### Repository structure

`include` : The header files or .h files that contain function declarations

`src` : The .cpp files that contain function definitions

`docs_sphinx`: This is where the documentation is generated. In the `_build/html` folder, `index.html` is the landing page for the Sphinx docs

### Working

On changing/adding/deleting code or files to the `src` folder, run `make html` in the `docs_sphinx` folder, this generated the latest documentation, and is present in the `_build` folder
