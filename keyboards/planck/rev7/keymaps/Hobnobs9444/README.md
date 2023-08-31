# Hobnobs layout

## Aim/desired features

- remain QWERTYish to minimise the pain of swapping
  - QWERTY primary layer
  - number and symbol row largely unchanged
  - bilateral shift on pinkys seen as I'm in the habit
  - get rid of colemak/dvorak/plover layers
- access to HYPER/MEH for easy program specific shortcut mapping
  - tab/hyper and grave/meh borrowed from smt keymap is nice
- optimise the symbol layer for R and Vim (also Python/Shell/Markdown/MathTex)
  - R
    - annoying symbols like <- and %>% are best bound to editor shortcuts (HYPER+, and HYPER+.)
    - \#, @ and _ for comments and tidyverse functions
  - Vim
    - easy access to escape and colon
    - 
- minimal and comfortable finger movement
  - bilateral access to as many modifiers as possible
  - have common layer symbols on the opposite side to the layer key
  - easy access to HYPER and MEH for program specific keybinds
- Number layer should be an effective data entry layer 
  - able to enter .,-+*/= [ ] not there with this yet
  - able to use bkspc, enter, delete, arrow keys
  - one shot mod to allow hold and toggle use
- Some issues with OSM/MT functions and overlaying mod keys
  - overlaying enter is a bad idea (did have ' there) as it leads to accidently sent messages and emails
  - MT for control on Esc/Enter works very nicely and makes Ctrl easily accessible bilaterally
  - OSM mods generally nice, though toggle on can get you stuck in caps from time to time 



## implications for design
letters, numbers and symbols as the are on qwerty to keep the transition easy

- number layer to include calculator symbol and a numpad 
- symbol layer aiming to be qwerty number row ish?
- function keys stay in numbers or own layer?
- adjust layer

new homes needed for 8 keys / 16 symbols - without duplicates should fit nicely on symbol layer:
`¬ = lower left meh/grave
-_ = super common, home row opposite hand
=+
{[ = centralised, closing odd brackets is unusual due to auto closure
}]
'@
#~
\|

could tap dance closing brackets as these are generally autoclosed for me anyway?

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | H_Tab|   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | M_`  | Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * | Del  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   4  |   5  |   6  |   .  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |   1  |   2  |   3  |   ,  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * | Del  |   !  |   "  |   £  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   #  |   @  |   _  |   -  |   |  |      |   +  |   =  |   ~  |   '  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Caps |   \  |   <  |   [  |   (  |   {  |   }  |   )  |   ]  |   >  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Home |PageDn|PageUp| End  |
 * `-----------------------------------------------------------------------------------'

 * /* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      |      | Debug | RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |MUSmod|Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|Plover|      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 * /* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |Alt+F4|      |      |      |      |      |      |      | 
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  | RGB  |RGBMOD| HUE+ | HUE- |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 | SAT+ | SAT- |BRGTH+|BRGTH-|      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
