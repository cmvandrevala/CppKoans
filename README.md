# CppKoans

Inspired by [RubyKoans](https://github.com/edgecase/ruby_koans) and
[JavaScript-Koans](https://github.com/liammclennan/JavaScript-Koans), this is
an attempt to write such koans for C/C++.

Some ideas were taken from [PointerKoans](https://github.com/paytonrules/PointerKoan).

### Prerequesites
You will need [CMake](http://cmake.org/) and a C++ compiler. I just tested it with a recent GCC.

## How to Walk the Path to Enlightenment

1. Get the Sources

```bash
git clone git://github.com/torbjoernk/CppKoans.git
```

2. Create a build directory

```bash
cd CppKoans
mkdir build
cd build
```

3. Configure the build

```bash
cmake ..
```

4. Compile

```bash
make
```

5. Run

```bash
./CppKoans
```

Now follow the instructions printed from the very beginning.

The files, you will need to edit are in `CppKoans/koans`. Each time you save a file and want to rerun the koans, you need to compile it. Thus, walking the path to enlightenment is a repetition of these steps:

1. Edit and save a file in `CppKoans/koans`
2. Compile in `CppKoans/build` by running `make`
3. Read the master's reply with `./CppKoans/build/CppKoans`

## Adding Further Koans

### To Existing Episodes

Just define a new `private void` function without parameters in the bottom section of the episode's header file it should belong to. Then, go to the implementation file of that episode and implement your new koan. Finally, add your newly created koan to the `run()` function in the header file of that episode and increase the `num_tests` counter by one (or whatever number of koans you added).

### New Episodes

There is a sample episode, which can be used as a template for new episodes.
After copying and renaming `~/headers/koanXX_sample_koans.hpp` and
`~/koans/koanXX_sample_koans.cpp`, the following steps are necessary:

1. Add the implementation file to `~/koans/CMakeLists.txt`
2. Add the header file to `~/headers/all_koans.hpp`
3. Enable and activate the new episode in `~/cppkoans.cpp`

## Licence

MIT License Copyright 2012 Torbjörn Klatt - opensource eht torbjoern minus klatt dot de
