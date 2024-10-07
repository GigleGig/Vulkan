#pragma once

#include "defines.h"

typedef enum buttons {
    BUTTON_LEFT,
    BUTTON_RIGHT,
    BUTTON_MIDDLE,
    BUTTON_MAX_BUTTONS
} buttons;

#define DEFINE_KEY(name, code) KEY_##name = code

typedef enum keys {
    /** @brief The backspace key. */
    DEFINE_KEY(BACKSPACE, 0x08),
    /** @brief The enter key. */
    DEFINE_KEY(ENTER, 0x0D),
    /** @brief The tab key. */
    DEFINE_KEY(TAB, 0x09),
    /** @brief The shift key. */
    DEFINE_KEY(SHIFT, 0x10),
    /** @brief The Control/Ctrl key. */
    DEFINE_KEY(CONTROL, 0x11),

    /** @brief The pause key. */
    DEFINE_KEY(PAUSE, 0x13),
    /** @brief The Caps Lock key. */
    DEFINE_KEY(CAPITAL, 0x14),

    /** @brief The Escape key. */
    DEFINE_KEY(ESCAPE, 0x1B),

    DEFINE_KEY(CONVERT, 0x1C),
    DEFINE_KEY(NONCONVERT, 0x1D),
    DEFINE_KEY(ACCEPT, 0x1E),
    DEFINE_KEY(MODECHANGE, 0x1F),

    /** @brief The spacebar key. */
    DEFINE_KEY(SPACE, 0x20),
    /** @brief The page up key. */
    DEFINE_KEY(PAGEUP, 0x21),
    /** @brief The page down key. */
    DEFINE_KEY(PAGEDOWN, 0x22),
    /** @brief The end key. */
    DEFINE_KEY(END, 0x23),
    /** @brief The home key. */
    DEFINE_KEY(HOME, 0x24),
    /** @brief The left arrow key. */
    DEFINE_KEY(LEFT, 0x25),
    /** @brief The up arrow key. */
    DEFINE_KEY(UP, 0x26),
    /** @brief The right arrow key. */
    DEFINE_KEY(RIGHT, 0x27),
    /** @brief The down arrow key. */
    DEFINE_KEY(DOWN, 0x28),
    DEFINE_KEY(SELECT, 0x29),
    DEFINE_KEY(PRINT, 0x2A),
    DEFINE_KEY(MY_EXECUTE, 0x2B),
    /** @brief The Print Screen key. */
    DEFINE_KEY(PRINTSCREEN, 0x2C),
    /** @brief The insert key. */
    DEFINE_KEY(INSERT, 0x2D),
    /** @brief The delete key. */
    DEFINE_KEY(DELETE, 0x2E),
    DEFINE_KEY(HELP, 0x2F),

    /** @brief The 0 key */
    DEFINE_KEY(0, 0x30),
    /** @brief The 1 key */
    DEFINE_KEY(1, 0x31),
    /** @brief The 2 key */
    DEFINE_KEY(2, 0x32),
    /** @brief The 3 key */
    DEFINE_KEY(3, 0x33),
    /** @brief The 4 key */
    DEFINE_KEY(4, 0x34),
    /** @brief The 5 key */
    DEFINE_KEY(5, 0x35),
    /** @brief The 6 key */
    DEFINE_KEY(6, 0x36),
    /** @brief The 7 key */
    DEFINE_KEY(7, 0x37),
    /** @brief The 8 key */
    DEFINE_KEY(8, 0x38),
    /** @brief The 9 key */
    DEFINE_KEY(9, 0x39),

    /** @brief The A key. */
    DEFINE_KEY(A, 0x41),
    /** @brief The B key. */
    DEFINE_KEY(B, 0x42),
    /** @brief The C key. */
    DEFINE_KEY(C, 0x43),
    /** @brief The D key. */
    DEFINE_KEY(D, 0x44),
    /** @brief The E key. */
    DEFINE_KEY(E, 0x45),
    /** @brief The F key. */
    DEFINE_KEY(F, 0x46),
    /** @brief The G key. */
    DEFINE_KEY(G, 0x47),
    /** @brief The H key. */
    DEFINE_KEY(H, 0x48),
    /** @brief The I key. */
    DEFINE_KEY(I, 0x49),
    /** @brief The J key. */
    DEFINE_KEY(J, 0x4A),
    /** @brief The K key. */
    DEFINE_KEY(K, 0x4B),
    /** @brief The L key. */
    DEFINE_KEY(L, 0x4C),
    /** @brief The M key. */
    DEFINE_KEY(M, 0x4D),
    /** @brief The N key. */
    DEFINE_KEY(N, 0x4E),
    /** @brief The O key. */
    DEFINE_KEY(O, 0x4F),
    /** @brief The P key. */
    DEFINE_KEY(P, 0x50),
    /** @brief The Q key. */
    DEFINE_KEY(Q, 0x51),
    /** @brief The R key. */
    DEFINE_KEY(R, 0x52),
    /** @brief The S key. */
    DEFINE_KEY(S, 0x53),
    /** @brief The T key. */
    DEFINE_KEY(T, 0x54),
    /** @brief The U key. */
    DEFINE_KEY(U, 0x55),
    /** @brief The V key. */
    DEFINE_KEY(V, 0x56),
    /** @brief The W key. */
    DEFINE_KEY(W, 0x57),
    /** @brief The X key. */
    DEFINE_KEY(X, 0x58),
    /** @brief The Y key. */
    DEFINE_KEY(Y, 0x59),
    /** @brief The Z key. */
    DEFINE_KEY(Z, 0x5A),

    /** @brief The left Windows/Super key. */
    DEFINE_KEY(LSUPER, 0x5B),
    /** @brief The right Windows/Super key. */
    DEFINE_KEY(RSUPER, 0x5C),
    /** @brief The applications key. */
    DEFINE_KEY(APPS, 0x5D),

    /** @brief The sleep key. */
    DEFINE_KEY(SLEEP, 0x5F),

    /** @brief The numberpad 0 key. */
    DEFINE_KEY(NUMPAD0, 0x60),
    /** @brief The numberpad 1 key. */
    DEFINE_KEY(NUMPAD1, 0x61),
    /** @brief The numberpad 2 key. */
    DEFINE_KEY(NUMPAD2, 0x62),
    /** @brief The numberpad 3 key. */
    DEFINE_KEY(NUMPAD3, 0x63),
    /** @brief The numberpad 4 key. */
    DEFINE_KEY(NUMPAD4, 0x64),
    /** @brief The numberpad 5 key. */
    DEFINE_KEY(NUMPAD5, 0x65),
    /** @brief The numberpad 6 key. */
    DEFINE_KEY(NUMPAD6, 0x66),
    /** @brief The numberpad 7 key. */
    DEFINE_KEY(NUMPAD7, 0x67),
    /** @brief The numberpad 8 key. */
    DEFINE_KEY(NUMPAD8, 0x68),
    /** @brief The numberpad 9 key. */
    DEFINE_KEY(NUMPAD9, 0x69),
    /** @brief The numberpad multiply key. */
    DEFINE_KEY(MULTIPLY, 0x6A),
    /** @brief The numberpad add key. */
    DEFINE_KEY(ADD, 0x6B),
    /** @brief The numberpad separator key. */
    DEFINE_KEY(SEPARATOR, 0x6C),
    /** @brief The numberpad subtract key. */
    DEFINE_KEY(SUBTRACT, 0x6D),
    /** @brief The numberpad decimal key. */
    DEFINE_KEY(DECIMAL, 0x6E),
    /** @brief The numberpad divide key. */
    DEFINE_KEY(DIVIDE, 0x6F),

    /** @brief The F1 key. */
    DEFINE_KEY(F1, 0x70),
    /** @brief The F2 key. */
    DEFINE_KEY(F2, 0x71),
    /** @brief The F3 key. */
    DEFINE_KEY(F3, 0x72),
    /** @brief The F4 key. */
    DEFINE_KEY(F4, 0x73),
    /** @brief The F5 key. */
    DEFINE_KEY(F5, 0x74),
    /** @brief The F6 key. */
    DEFINE_KEY(F6, 0x75),
    /** @brief The F7 key. */
    DEFINE_KEY(F7, 0x76),
    /** @brief The F8 key. */
    DEFINE_KEY(F8, 0x77),
    /** @brief The F9 key. */
    DEFINE_KEY(F9, 0x78),
    /** @brief The F10 key. */
    DEFINE_KEY(F10, 0x79),
    /** @brief The F11 key. */
    DEFINE_KEY(F11, 0x7A),
    /** @brief The F12 key. */
    DEFINE_KEY(F12, 0x7B),
    /** @brief The F13 key. */
    DEFINE_KEY(F13, 0x7C),
    /** @brief The F14 key. */
    DEFINE_KEY(F14, 0x7D),
    /** @brief The F15 key. */
    DEFINE_KEY(F15, 0x7E),
    /** @brief The F16 key. */
    DEFINE_KEY(F16, 0x7F),
    /** @brief The F17 key. */
    DEFINE_KEY(F17, 0x80),
    /** @brief The F18 key. */
    DEFINE_KEY(F18, 0x81),
    /** @brief The F19 key. */
    DEFINE_KEY(F19, 0x82),
    /** @brief The F20 key. */
    DEFINE_KEY(F20, 0x83),
    /** @brief The F21 key. */
    DEFINE_KEY(F21, 0x84),
    /** @brief The F22 key. */
    DEFINE_KEY(F22, 0x85),
    /** @brief The F23 key. */
    DEFINE_KEY(F23, 0x86),
    /** @brief The F24 key. */
    DEFINE_KEY(F24, 0x87),

    /** @brief The number lock key. */
    DEFINE_KEY(NUMLOCK, 0x90),

    /** @brief The scroll lock key. */
    DEFINE_KEY(SCROLL, 0x91),

    /** @brief The numberpad equal key. */
    DEFINE_KEY(NUMPAD_EQUAL, 0x92),

    /** @brief The left shift key. */
    DEFINE_KEY(LSHIFT, 0xA0),
    /** @brief The right shift key. */
    DEFINE_KEY(RSHIFT, 0xA1),
    /** @brief The left control key. */
    DEFINE_KEY(LCONTROL, 0xA2),
    /** @brief The right control key. */
    DEFINE_KEY(RCONTROL, 0xA3),
    /** @brief The left alt key. */
    DEFINE_KEY(LALT, 0xA4),
    /** @brief The right alt key. */
    DEFINE_KEY(RALT, 0xA5),

    /** @brief The semicolon key. */
    DEFINE_KEY(SEMICOLON, 0xBA),
    /** @brief The equal/plus key. */
    DEFINE_KEY(PLUS, 0xBB),
    /** @brief The comma key. */
    DEFINE_KEY(COMMA, 0xBC),
    /** @brief The minus key. */
    DEFINE_KEY(MINUS, 0xBD),
    /** @brief The period key. */
    DEFINE_KEY(PERIOD, 0xBE),
    /** @brief The slash key. */
    DEFINE_KEY(SLASH, 0xBF),
    /** @brief The grave key. */
    DEFINE_KEY(GRAVE, 0xC0),

    KEYS_MAX_KEYS
} keys;


void input_initialize();
void input_shutdown();
void input_update(f64 delta_time);

// Keyboard input
KAPI b8 input_is_key_down(keys key);
KAPI b8 input_is_key_up(keys key);
KAPI b8 input_was_key_down(keys key);
KAPI b8 input_was_key_up(keys key);

void input_process_key(keys key, b8 pressed);

// Mouse input
KAPI b8 input_is_button_down(buttons button);
KAPI b8 input_is_button_up(buttons button);
KAPI b8 input_was_button_down(buttons button);
KAPI b8 input_was_button_up(buttons button);
KAPI void input_get_mouse_position(i32 *x, i32 *y);
KAPI void input_get_previous_mouse_position(i32 *x, i32 *y);

void input_process_button(buttons button, b8 pressed);
void input_process_mouse_move(i16 x, i16 y);
void input_process_mouse_wheel(i8 z_delta);