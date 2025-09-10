Forked from https://github.com/eliasdaler/cmake-fetchcontent-tutorial-code.

# Introduction

'Fireflies' project developed with `SFML`, `imgui` and `imgui-sfml`.

Fireflies synchronisation inspired by the following video and paper:

[![AMAZING example of complex emergent behavior from a very simple rule](https://img.youtube.com/vi/ix66tQ93bdU/0.jpg)](https://www.youtube.com/watch?v=ix66tQ93bdU)

Paper: [Article: Firefly Synchronization in Ad Hoc Networks](https://www.rlocman.ru/i/File/2007/10/24/2006_WSL_Firefly_Synchronization_Ad_Hoc_Networks.pdf)

[fireflies-screenshot]: images/overview.png

[![Fireflies screenshot][fireflies-screenshot]]()

# Features

- Set program title.
- FPS shown in UI.
- Set background color of program and of fireflies.
- Initialise network of fireflies given a set of initial parameters (number, radius, influence, min./max. blinking rate).
- Creating, deleting independent fireflies.
- Clearing all fireflies.
- Fireflies can be dragged around and rotated.
- Live plots of fireflies blinking rates.
- Detection of fireflies neighbours (with additional visualisation).

# TODO

- Mainly, fireflies synchronisation still not working as expected. I should continue working on this whenever I can.

# Building and running

```sh
cd fireflies
cmake -S . -B build
cmake --build build
./build/src/fireflies
```

Alternatively, you can build and run 'Fireflies' using Visual Studio Code with the launch configuration provided.
