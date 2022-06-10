//
// Created by mat on 6/10/2022.
//

#ifndef PONG_CLONE_MOUSE_H
#define PONG_CLONE_MOUSE_H

#include <GLFW/glfw3.h>

typedef struct {
    float x;
    float y;
} MOUSE;
extern MOUSE g_mouse;

/**
 * Gets called when them mouse input happens
 *
 * @param window handle of the window
 * @param button button that was pressed
 * @param action action on the input event
  * @param mods mods of the event
*/

void on_mouse_input(GLFWwindow *window, int button, int action, int mods);

/**
 * Gets called when them mouse moves in the window
 *
 * @param window handle of the window
 * @param x x coordinate of the mouse on the window
 * @param y y coordinate of the mouse on the window
 */

void on_mouse_move(GLFWwindow *window, double x, double y);

/**
 * Gets called when the mouse is pressed
 *
 * @param button button that was pressed
 * @param x x coordinate of the mouse on the window
 * @param y y coordinate of the mouse on the window
 */

extern void on_mouse_press(int button, float x, float y);

/**
 * Gets called when the mouse is released
 *
 * @param button button that was pressed
 * @param x x coordinate of the mouse on the window
 * @param y y coordinate of the mouse on the window
 */

extern void on_mouse_release(int button, float x, float y);

#endif //PONG_CLONE_MOUSE_H
