# rwatari QMK config for Unikeyboard Diverge 3

This layout is intended to be similar enough to a normal QWERTY keyboard that it's not hard to switch between the Diverge and a laptop keyboard. Symbols for programming are essentially in the same spot ergonomically on the alt layer. The alt layer also has num keys on the bottom row to minimize reach.

## Initial Setup Instructions
- clone QMK git repo locally
- add this repo as submodule: `git submodule add https://github.com/rwatari/diverge3-layout ./keyboards/unikeyboard/diverge3/keymaps/rwatari`

## Flashing Instructions (for WSL)
- modify keymap.c
- compile: `qmk compile -kb unikeyboard/diverge3 -km rwatari`
- open QMK Toolbox
- make sure it's pointing to the compiled file
- press flash button on keyboard (layer switch + DEL)
- press flash button in QMK Toolbox
