/* SPDX-License-Identifier: GPL-2.0 */
/*
 * This header provides constants for mcp2210 bindings
 *
 */

#ifndef _DT_BINDINGS_MCP2210_H
#define _DT_BINDINGS_MCP2210_H

/* pin mode settings */
#define MCP2210_PIN_GPIO 0
#define MCP2210_PIN_SPI 1
#define MCP2210_PIN_DEDICATED 2

/*
 * mcp2210_other_settings
 *
 * Represents byte 17 of chip settings message (section 3.1.1, 3.1.2, etc)
 *
 * These values are generally ORed together except that only one
 * MCP2210_INTERRUPT_* value may be chosen (they do not OR together). To disable
 * any of these options, exclude them (zero is "disabled" for all options).
 * See table 3-1 in the datasheet for more information.
 */
#define MCP2210_SPI_BUS_RELEASE_DISABLED	0x01
#define MCP2210_INTERRUPT_FALLING_EDGE		0x02
#define MCP2210_INTERRUPT_RISING_EDGE		0x04
#define MCP2210_INTERRUPT_LOW_PULSE		0x06
#define MCP2210_INTERRUPT_HIGH_PULSE		0x08
#define MCP2210_REMOTE_WAKEUP_ENABLED		0x80

#define MCP2210_MAX_SPEED			12000000

#endif
