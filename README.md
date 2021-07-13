# Conway's Game of Life

This project is a reproduction of the Game of Life, also known as Conway game.

## Getting Started

This project uses the C programming language and the Allegro library to simulate the Conway game.

### Pre requisites
* C language programming
* gcc
* [Allegro](https://liballeg.org/index.html)

## Install

Mac
First install package manager brew

```bash
http://brew.sh/
```

Download dependencies for library compilation

```bash
sudo port install cmake zlib freetype jpeg libogg physfs libpng flac libtheora +universal
```
or 
```bash
brew install cmake zlib freetype jpeg libogg physfs libpng flac libtheora
```

After obtaining the packages, an adjustment is made so that, during compilation, cmake correctly finds the FreeType library

```bash
sudo ln -s /usr/local/opt/freetype/include/freetype2 /usr/local/include/freetype
```

Download and extract allegro source code

```bash
https://liballeg.org/download.html
```
exctact e.g. in `~/Allegro`
In terminal open local extract allegro
`cd ~/Allegro`
create build folder
`mkdir build`
open build folder 
`cd build`

build, create and install allegro project
run 
```bash
$ cmake ..
$ make 
$ sudo make install
```

## Run

To run the project, navigate to the project root folder in the terminal and run the command

```bash
gcc [fileNameWithMain].c -o [nameExec] $(pkg-config –cflags –libs allegro-5) -lallegro -lallegro_main
```
P.S. When compiling it may give some error, but the executable will work.

## Contributing 

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [Git](https://git-scm.com/) for versioning. For the versions available, see the [tags on this repository](https://github.com/TosinRoger/Conway-s-Game-of-Life/tags). 

## Authors

* **Roger Tosin** - *Initial work* - [TosinRoger](https://github.com/TosinRoger)

See also the list of [contributors](https://github.com/TosinRoger/Conway-s-Game-of-Life/graphs/contributors) who participated in this project.
