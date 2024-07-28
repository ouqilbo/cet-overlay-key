# cet-overlay-key
Let's you recover the key-binding to open Cyber Engine Tweaks' overlay

# how-to-use
Decide to use either:
- [EXE file](https://github.com/ouqilbo/cet-overlay-key/releases/download/Release/cet-overlay-key.exe)
- [javascript code](https://github.com/ouqilbo/cet-overlay-key/blob/main/cet-overlay-key.js) that you can paste in a browser console (replace CET_OVERLAY_KEY constant with the actual key code in the first few lines of code)
- [c++ code](https://github.com/ouqilbo/cet-overlay-key/blob/main/cet-overlay-key.cpp) to compile the EXE or paste it into a C++ online compiler

# why?
The CET overlay key is basically a container for hex values, represented and written in decimal. The whole reason this repo exists is to do a conversion decimal -> hex -> remove padding -> then hex keys to keys' names
