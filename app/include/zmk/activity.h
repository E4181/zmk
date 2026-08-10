/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

enum zmk_activity_state { ZMK_ACTIVITY_ACTIVE, ZMK_ACTIVITY_IDLE, ZMK_ACTIVITY_SLEEP };

enum zmk_activity_state zmk_activity_get_state(void);

/*
 * Note activity so the idle/sleep timers restart from now.
 *
 * This is the same activity source ZMK uses internally for key presses and
 * sensor events. Custom code (e.g. a status overlay driven by a host UART)
 * can call it periodically to keep the device out of the idle state while
 * the overlay is visible.
 */
int zmk_activity_note_activity(void);
