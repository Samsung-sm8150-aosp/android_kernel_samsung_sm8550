/*
 * tas5805m.h - Driver for the TAS5805M Audio Amplifier
 *
 * Copyright (C) 2017 Texas Instruments Incorporated -  http://www.ti.com
 *
 * Author: Andy Liu <andy-liu@ti.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 */

#ifndef TAS5805M_CONFIG_H
#define TAS5805M_CONFIG_H

typedef struct {
	unsigned char offset;
	unsigned char value;
} cfg_reg;

#define CFG_META_SWITCH (255)
#define CFG_META_DELAY  (254)
#define CFG_META_BURST  (253)

const cfg_reg tas5805m_init_sequence1[] = {
	{ 0x00, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x03, 0x02 },
	{ 0x01, 0x11 },
	{ 0x00, 0x00 },
	{ 0x00, 0x00 },
	{ 0x00, 0x00 },
	{ 0x00, 0x00 },
	{ 0x00, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x03, 0x02 },
};

const cfg_reg tas5805m_init_sequence2[] = {
	{ 0x00, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x03, 0x00 },
	{ 0x00, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x46, 0x01 },

	{ 0x00, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x03, 0x02 },
	{ 0x00, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x78, 0x80 },

	{ 0x00, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x61, 0x0b },
	{ 0x60, 0x01 },
	{ 0x7d, 0x11 },
	{ 0x7e, 0xff },
	{ 0x00, 0x01 },
	{ 0x51, 0x05 },

	{ 0x00, 0x00 },
	{ 0x02, 0x00 },
	{ 0x53, 0x00 },
	{ 0x54, 0x00 },
	{ 0x00, 0x00 },
	{ 0x00, 0x00 },
	{ 0x00, 0x00 },
	{ 0x00, 0x00 },
	{ 0x00, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x66, 0x87 },
	{ 0x7f, 0x8c },
	{ 0x00, 0x29 },
	{ 0x18, 0x00 },
	{ 0x19, 0x80 },
	{ 0x1a, 0x00 },
	{ 0x1b, 0x00 },
	{ 0x1c, 0x00 },
	{ 0x1d, 0x00 },
	{ 0x1e, 0x00 },
	{ 0x1f, 0x00 },
	{ 0x20, 0x00 },
	{ 0x21, 0x00 },
	{ 0x22, 0x00 },
	{ 0x23, 0x00 },
	{ 0x24, 0x00 },
	{ 0x25, 0x80 },
	{ 0x26, 0x00 },
	{ 0x27, 0x00 },
	{ 0x00, 0x2a },
	{ 0x24, 0x00 },
	{ 0x25, 0x80 },
	{ 0x26, 0x00 },
	{ 0x27, 0x00 },
	{ 0x28, 0x00 },
	{ 0x29, 0x80 },
	{ 0x2a, 0x00 },
	{ 0x2b, 0x00 },
	{ 0x30, 0x00 },
	{ 0x31, 0x71 },
	{ 0x32, 0x94 },
	{ 0x33, 0x9a },
	{ 0x00, 0x2c },
	{ 0x0c, 0x00 },
	{ 0x0d, 0x00 },
	{ 0x0e, 0x00 },
	{ 0x0f, 0x00 },
	{ 0x10, 0x00 },
	{ 0x11, 0x00 },
	{ 0x12, 0x00 },
	{ 0x13, 0x00 },
	{ 0x14, 0x00 },
	{ 0x15, 0x80 },
	{ 0x16, 0x00 },
	{ 0x17, 0x00 },
	{ 0x18, 0x00 },
	{ 0x19, 0x00 },
	{ 0x1a, 0x00 },
	{ 0x1b, 0x00 },
	{ 0x1c, 0x00 },
	{ 0x1d, 0x80 },
	{ 0x1e, 0x00 },
	{ 0x1f, 0x00 },
	{ 0x20, 0x00 },
	{ 0x21, 0x00 },
	{ 0x22, 0x00 },
	{ 0x23, 0x00 },
	{ 0x28, 0x00 },
	{ 0x29, 0x00 },
	{ 0x2a, 0x00 },
	{ 0x2b, 0x00 },
	{ 0x2c, 0x00 },
	{ 0x2d, 0x80 },
	{ 0x2e, 0x00 },
	{ 0x2f, 0x00 },
	{ 0x34, 0x00 },
	{ 0x35, 0x80 },
	{ 0x36, 0x00 },
	{ 0x37, 0x00 },
	{ 0x38, 0x00 },
	{ 0x39, 0x00 },
	{ 0x3a, 0x00 },
	{ 0x3b, 0x00 },
	{ 0x48, 0x00 },
	{ 0x49, 0x00 },
	{ 0x4a, 0x00 },
	{ 0x4b, 0x00 },
	{ 0x4c, 0x00 },
	{ 0x4d, 0x80 },
	{ 0x4e, 0x00 },
	{ 0x4f, 0x00 },
	{ 0x5c, 0x00 },
	{ 0x5d, 0x00 },
	{ 0x5e, 0x57 },
	{ 0x5f, 0x62 },
	{ 0x60, 0x00 },
	{ 0x61, 0x89 },
	{ 0x62, 0x37 },
	{ 0x63, 0x4c },
	{ 0x64, 0x08 },
	{ 0x65, 0x13 },
	{ 0x66, 0x85 },
	{ 0x67, 0x62 },
	{ 0x68, 0x40 },
	{ 0x69, 0x00 },
	{ 0x6a, 0x00 },
	{ 0x6b, 0x00 },
	{ 0x6c, 0x02 },
	{ 0x6d, 0x66 },
	{ 0x6e, 0xc4 },
	{ 0x6f, 0x1b },
	{ 0x74, 0x00 },
	{ 0x75, 0x80 },
	{ 0x76, 0x00 },
	{ 0x77, 0x00 },
	{ 0x00, 0x2d },
	{ 0x18, 0x7d },
	{ 0x19, 0x99 },
	{ 0x1a, 0x3b },
	{ 0x1b, 0xe5 },
	{ 0x1c, 0x00 },
	{ 0x1d, 0x00 },
	{ 0x1e, 0x57 },
	{ 0x1f, 0x62 },
	{ 0x20, 0x00 },
	{ 0x21, 0x00 },
	{ 0x22, 0x00 },
	{ 0x23, 0x00 },
	{ 0x24, 0x00 },
	{ 0x25, 0x00 },
	{ 0x26, 0x00 },
	{ 0x27, 0x00 },
	{ 0x28, 0x00 },
	{ 0x29, 0x00 },
	{ 0x2a, 0x00 },
	{ 0x2b, 0x00 },
	{ 0x2c, 0x00 },
	{ 0x2d, 0x80 },
	{ 0x2e, 0x00 },
	{ 0x2f, 0x00 },
	{ 0x00, 0x2e },
	{ 0x24, 0x11 },
	{ 0x25, 0x3d },
	{ 0x26, 0xc3 },
	{ 0x27, 0x1a },
	{ 0x00, 0x00 },
	{ 0x7f, 0xaa },
	{ 0x00, 0x24 },
	{ 0x18, 0x08 },
	{ 0x19, 0x00 },
	{ 0x1a, 0x00 },
	{ 0x1b, 0x00 },
	{ 0x1c, 0x00 },
	{ 0x1d, 0x00 },
	{ 0x1e, 0x00 },
	{ 0x1f, 0x00 },
	{ 0x20, 0x00 },
	{ 0x21, 0x00 },
	{ 0x22, 0x00 },
	{ 0x23, 0x00 },
	{ 0x24, 0x00 },
	{ 0x25, 0x00 },
	{ 0x26, 0x00 },
	{ 0x27, 0x00 },
	{ 0x28, 0x00 },
	{ 0x29, 0x00 },
	{ 0x2a, 0x00 },
	{ 0x2b, 0x00 },
	{ 0x2c, 0x08 },
	{ 0x2d, 0x00 },
	{ 0x2e, 0x00 },
	{ 0x2f, 0x00 },
	{ 0x30, 0x00 },
	{ 0x31, 0x00 },
	{ 0x32, 0x00 },
	{ 0x33, 0x00 },
	{ 0x34, 0x00 },
	{ 0x35, 0x00 },
	{ 0x36, 0x00 },
	{ 0x37, 0x00 },
	{ 0x38, 0x00 },
	{ 0x39, 0x00 },
	{ 0x3a, 0x00 },
	{ 0x3b, 0x00 },
	{ 0x3c, 0x00 },
	{ 0x3d, 0x00 },
	{ 0x3e, 0x00 },
	{ 0x3f, 0x00 },
	{ 0x40, 0x08 },
	{ 0x41, 0x00 },
	{ 0x42, 0x00 },
	{ 0x43, 0x00 },
	{ 0x44, 0x00 },
	{ 0x45, 0x00 },
	{ 0x46, 0x00 },
	{ 0x47, 0x00 },
	{ 0x48, 0x00 },
	{ 0x49, 0x00 },
	{ 0x4a, 0x00 },
	{ 0x4b, 0x00 },
	{ 0x4c, 0x00 },
	{ 0x4d, 0x00 },
	{ 0x4e, 0x00 },
	{ 0x4f, 0x00 },
	{ 0x50, 0x00 },
	{ 0x51, 0x00 },
	{ 0x52, 0x00 },
	{ 0x53, 0x00 },
	{ 0x54, 0x08 },
	{ 0x55, 0x00 },
	{ 0x56, 0x00 },
	{ 0x57, 0x00 },
	{ 0x58, 0x00 },
	{ 0x59, 0x00 },
	{ 0x5a, 0x00 },
	{ 0x5b, 0x00 },
	{ 0x5c, 0x00 },
	{ 0x5d, 0x00 },
	{ 0x5e, 0x00 },
	{ 0x5f, 0x00 },
	{ 0x60, 0x00 },
	{ 0x61, 0x00 },
	{ 0x62, 0x00 },
	{ 0x63, 0x00 },
	{ 0x64, 0x00 },
	{ 0x65, 0x00 },
	{ 0x66, 0x00 },
	{ 0x67, 0x00 },
	{ 0x68, 0x08 },
	{ 0x69, 0x00 },
	{ 0x6a, 0x00 },
	{ 0x6b, 0x00 },
	{ 0x6c, 0x00 },
	{ 0x6d, 0x00 },
	{ 0x6e, 0x00 },
	{ 0x6f, 0x00 },
	{ 0x70, 0x00 },
	{ 0x71, 0x00 },
	{ 0x72, 0x00 },
	{ 0x73, 0x00 },
	{ 0x74, 0x00 },
	{ 0x75, 0x00 },
	{ 0x76, 0x00 },
	{ 0x77, 0x00 },
	{ 0x78, 0x00 },
	{ 0x79, 0x00 },
	{ 0x7a, 0x00 },
	{ 0x7b, 0x00 },
	{ 0x7c, 0x08 },
	{ 0x7d, 0x00 },
	{ 0x7e, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x00, 0x25 },
	{ 0x08, 0x00 },
	{ 0x09, 0x00 },
	{ 0x0a, 0x00 },
	{ 0x0b, 0x00 },
	{ 0x0c, 0x00 },
	{ 0x0d, 0x00 },
	{ 0x0e, 0x00 },
	{ 0x0f, 0x00 },
	{ 0x10, 0x00 },
	{ 0x11, 0x00 },
	{ 0x12, 0x00 },
	{ 0x13, 0x00 },
	{ 0x14, 0x00 },
	{ 0x15, 0x00 },
	{ 0x16, 0x00 },
	{ 0x17, 0x00 },
	{ 0x18, 0x08 },
	{ 0x19, 0x00 },
	{ 0x1a, 0x00 },
	{ 0x1b, 0x00 },
	{ 0x1c, 0x00 },
	{ 0x1d, 0x00 },
	{ 0x1e, 0x00 },
	{ 0x1f, 0x00 },
	{ 0x20, 0x00 },
	{ 0x21, 0x00 },
	{ 0x22, 0x00 },
	{ 0x23, 0x00 },
	{ 0x24, 0x00 },
	{ 0x25, 0x00 },
	{ 0x26, 0x00 },
	{ 0x27, 0x00 },
	{ 0x28, 0x00 },
	{ 0x29, 0x00 },
	{ 0x2a, 0x00 },
	{ 0x2b, 0x00 },
	{ 0x2c, 0x08 },
	{ 0x2d, 0x00 },
	{ 0x2e, 0x00 },
	{ 0x2f, 0x00 },
	{ 0x30, 0x00 },
	{ 0x31, 0x00 },
	{ 0x32, 0x00 },
	{ 0x33, 0x00 },
	{ 0x34, 0x00 },
	{ 0x35, 0x00 },
	{ 0x36, 0x00 },
	{ 0x37, 0x00 },
	{ 0x38, 0x00 },
	{ 0x39, 0x00 },
	{ 0x3a, 0x00 },
	{ 0x3b, 0x00 },
	{ 0x3c, 0x00 },
	{ 0x3d, 0x00 },
	{ 0x3e, 0x00 },
	{ 0x3f, 0x00 },
	{ 0x40, 0x08 },
	{ 0x41, 0x00 },
	{ 0x42, 0x00 },
	{ 0x43, 0x00 },
	{ 0x44, 0x00 },
	{ 0x45, 0x00 },
	{ 0x46, 0x00 },
	{ 0x47, 0x00 },
	{ 0x48, 0x00 },
	{ 0x49, 0x00 },
	{ 0x4a, 0x00 },
	{ 0x4b, 0x00 },
	{ 0x4c, 0x00 },
	{ 0x4d, 0x00 },
	{ 0x4e, 0x00 },
	{ 0x4f, 0x00 },
	{ 0x50, 0x00 },
	{ 0x51, 0x00 },
	{ 0x52, 0x00 },
	{ 0x53, 0x00 },
	{ 0x54, 0x08 },
	{ 0x55, 0x00 },
	{ 0x56, 0x00 },
	{ 0x57, 0x00 },
	{ 0x58, 0x00 },
	{ 0x59, 0x00 },
	{ 0x5a, 0x00 },
	{ 0x5b, 0x00 },
	{ 0x5c, 0x00 },
	{ 0x5d, 0x00 },
	{ 0x5e, 0x00 },
	{ 0x5f, 0x00 },
	{ 0x60, 0x00 },
	{ 0x61, 0x00 },
	{ 0x62, 0x00 },
	{ 0x63, 0x00 },
	{ 0x64, 0x00 },
	{ 0x65, 0x00 },
	{ 0x66, 0x00 },
	{ 0x67, 0x00 },
	{ 0x68, 0x08 },
	{ 0x69, 0x00 },
	{ 0x6a, 0x00 },
	{ 0x6b, 0x00 },
	{ 0x6c, 0x00 },
	{ 0x6d, 0x00 },
	{ 0x6e, 0x00 },
	{ 0x6f, 0x00 },
	{ 0x70, 0x00 },
	{ 0x71, 0x00 },
	{ 0x72, 0x00 },
	{ 0x73, 0x00 },
	{ 0x74, 0x00 },
	{ 0x75, 0x00 },
	{ 0x76, 0x00 },
	{ 0x77, 0x00 },
	{ 0x78, 0x00 },
	{ 0x79, 0x00 },
	{ 0x7a, 0x00 },
	{ 0x7b, 0x00 },
	{ 0x7c, 0x08 },
	{ 0x7d, 0x00 },
	{ 0x7e, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x00, 0x26 },
	{ 0x08, 0x00 },
	{ 0x09, 0x00 },
	{ 0x0a, 0x00 },
	{ 0x0b, 0x00 },
	{ 0x0c, 0x00 },
	{ 0x0d, 0x00 },
	{ 0x0e, 0x00 },
	{ 0x0f, 0x00 },
	{ 0x10, 0x00 },
	{ 0x11, 0x00 },
	{ 0x12, 0x00 },
	{ 0x13, 0x00 },
	{ 0x14, 0x00 },
	{ 0x15, 0x00 },
	{ 0x16, 0x00 },
	{ 0x17, 0x00 },
	{ 0x18, 0x08 },
	{ 0x19, 0x00 },
	{ 0x1a, 0x00 },
	{ 0x1b, 0x00 },
	{ 0x1c, 0x00 },
	{ 0x1d, 0x00 },
	{ 0x1e, 0x00 },
	{ 0x1f, 0x00 },
	{ 0x20, 0x00 },
	{ 0x21, 0x00 },
	{ 0x22, 0x00 },
	{ 0x23, 0x00 },
	{ 0x24, 0x00 },
	{ 0x25, 0x00 },
	{ 0x26, 0x00 },
	{ 0x27, 0x00 },
	{ 0x28, 0x00 },
	{ 0x29, 0x00 },
	{ 0x2a, 0x00 },
	{ 0x2b, 0x00 },
	{ 0x2c, 0x08 },
	{ 0x2d, 0x00 },
	{ 0x2e, 0x00 },
	{ 0x2f, 0x00 },
	{ 0x30, 0x00 },
	{ 0x31, 0x00 },
	{ 0x32, 0x00 },
	{ 0x33, 0x00 },
	{ 0x34, 0x00 },
	{ 0x35, 0x00 },
	{ 0x36, 0x00 },
	{ 0x37, 0x00 },
	{ 0x38, 0x00 },
	{ 0x39, 0x00 },
	{ 0x3a, 0x00 },
	{ 0x3b, 0x00 },
	{ 0x3c, 0x00 },
	{ 0x3d, 0x00 },
	{ 0x3e, 0x00 },
	{ 0x3f, 0x00 },
	{ 0x40, 0x08 },
	{ 0x41, 0x00 },
	{ 0x42, 0x00 },
	{ 0x43, 0x00 },
	{ 0x44, 0x00 },
	{ 0x45, 0x00 },
	{ 0x46, 0x00 },
	{ 0x47, 0x00 },
	{ 0x48, 0x00 },
	{ 0x49, 0x00 },
	{ 0x4a, 0x00 },
	{ 0x4b, 0x00 },
	{ 0x4c, 0x00 },
	{ 0x4d, 0x00 },
	{ 0x4e, 0x00 },
	{ 0x4f, 0x00 },
	{ 0x50, 0x00 },
	{ 0x51, 0x00 },
	{ 0x52, 0x00 },
	{ 0x53, 0x00 },
	{ 0x54, 0x08 },
	{ 0x55, 0x00 },
	{ 0x56, 0x00 },
	{ 0x57, 0x00 },
	{ 0x58, 0x00 },
	{ 0x59, 0x00 },
	{ 0x5a, 0x00 },
	{ 0x5b, 0x00 },
	{ 0x5c, 0x00 },
	{ 0x5d, 0x00 },
	{ 0x5e, 0x00 },
	{ 0x5f, 0x00 },
	{ 0x60, 0x00 },
	{ 0x61, 0x00 },
	{ 0x62, 0x00 },
	{ 0x63, 0x00 },
	{ 0x64, 0x00 },
	{ 0x65, 0x00 },
	{ 0x66, 0x00 },
	{ 0x67, 0x00 },
	{ 0x68, 0x08 },
	{ 0x69, 0x00 },
	{ 0x6a, 0x00 },
	{ 0x6b, 0x00 },
	{ 0x6c, 0x00 },
	{ 0x6d, 0x00 },
	{ 0x6e, 0x00 },
	{ 0x6f, 0x00 },
	{ 0x70, 0x00 },
	{ 0x71, 0x00 },
	{ 0x72, 0x00 },
	{ 0x73, 0x00 },
	{ 0x74, 0x00 },
	{ 0x75, 0x00 },
	{ 0x76, 0x00 },
	{ 0x77, 0x00 },
	{ 0x78, 0x00 },
	{ 0x79, 0x00 },
	{ 0x7a, 0x00 },
	{ 0x7b, 0x00 },
	{ 0x7c, 0x08 },
	{ 0x7d, 0x00 },
	{ 0x7e, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x00, 0x27 },
	{ 0x08, 0x00 },
	{ 0x09, 0x00 },
	{ 0x0a, 0x00 },
	{ 0x0b, 0x00 },
	{ 0x0c, 0x00 },
	{ 0x0d, 0x00 },
	{ 0x0e, 0x00 },
	{ 0x0f, 0x00 },
	{ 0x10, 0x00 },
	{ 0x11, 0x00 },
	{ 0x12, 0x00 },
	{ 0x13, 0x00 },
	{ 0x14, 0x00 },
	{ 0x15, 0x00 },
	{ 0x16, 0x00 },
	{ 0x17, 0x00 },
	{ 0x18, 0x08 },
	{ 0x19, 0x00 },
	{ 0x1a, 0x00 },
	{ 0x1b, 0x00 },
	{ 0x1c, 0x00 },
	{ 0x1d, 0x00 },
	{ 0x1e, 0x00 },
	{ 0x1f, 0x00 },
	{ 0x20, 0x00 },
	{ 0x21, 0x00 },
	{ 0x22, 0x00 },
	{ 0x23, 0x00 },
	{ 0x24, 0x00 },
	{ 0x25, 0x00 },
	{ 0x26, 0x00 },
	{ 0x27, 0x00 },
	{ 0x28, 0x00 },
	{ 0x29, 0x00 },
	{ 0x2a, 0x00 },
	{ 0x2b, 0x00 },
	{ 0x2c, 0x08 },
	{ 0x2d, 0x00 },
	{ 0x2e, 0x00 },
	{ 0x2f, 0x00 },
	{ 0x30, 0x00 },
	{ 0x31, 0x00 },
	{ 0x32, 0x00 },
	{ 0x33, 0x00 },
	{ 0x34, 0x00 },
	{ 0x35, 0x00 },
	{ 0x36, 0x00 },
	{ 0x37, 0x00 },
	{ 0x38, 0x00 },
	{ 0x39, 0x00 },
	{ 0x3a, 0x00 },
	{ 0x3b, 0x00 },
	{ 0x3c, 0x00 },
	{ 0x3d, 0x00 },
	{ 0x3e, 0x00 },
	{ 0x3f, 0x00 },
	{ 0x40, 0x08 },
	{ 0x41, 0x00 },
	{ 0x42, 0x00 },
	{ 0x43, 0x00 },
	{ 0x44, 0x00 },
	{ 0x45, 0x00 },
	{ 0x46, 0x00 },
	{ 0x47, 0x00 },
	{ 0x48, 0x00 },
	{ 0x49, 0x00 },
	{ 0x4a, 0x00 },
	{ 0x4b, 0x00 },
	{ 0x4c, 0x00 },
	{ 0x4d, 0x00 },
	{ 0x4e, 0x00 },
	{ 0x4f, 0x00 },
	{ 0x50, 0x00 },
	{ 0x51, 0x00 },
	{ 0x52, 0x00 },
	{ 0x53, 0x00 },
	{ 0x54, 0x08 },
	{ 0x55, 0x00 },
	{ 0x56, 0x00 },
	{ 0x57, 0x00 },
	{ 0x58, 0x00 },
	{ 0x59, 0x00 },
	{ 0x5a, 0x00 },
	{ 0x5b, 0x00 },
	{ 0x5c, 0x00 },
	{ 0x5d, 0x00 },
	{ 0x5e, 0x00 },
	{ 0x5f, 0x00 },
	{ 0x60, 0x00 },
	{ 0x61, 0x00 },
	{ 0x62, 0x00 },
	{ 0x63, 0x00 },
	{ 0x64, 0x00 },
	{ 0x65, 0x00 },
	{ 0x66, 0x00 },
	{ 0x67, 0x00 },
	{ 0x68, 0x08 },
	{ 0x69, 0x00 },
	{ 0x6a, 0x00 },
	{ 0x6b, 0x00 },
	{ 0x6c, 0x00 },
	{ 0x6d, 0x00 },
	{ 0x6e, 0x00 },
	{ 0x6f, 0x00 },
	{ 0x70, 0x00 },
	{ 0x71, 0x00 },
	{ 0x72, 0x00 },
	{ 0x73, 0x00 },
	{ 0x74, 0x00 },
	{ 0x75, 0x00 },
	{ 0x76, 0x00 },
	{ 0x77, 0x00 },
	{ 0x78, 0x00 },
	{ 0x79, 0x00 },
	{ 0x7a, 0x00 },
	{ 0x7b, 0x00 },
	{ 0x7c, 0x08 },
	{ 0x7d, 0x00 },
	{ 0x7e, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x00, 0x28 },
	{ 0x08, 0x00 },
	{ 0x09, 0x00 },
	{ 0x0a, 0x00 },
	{ 0x0b, 0x00 },
	{ 0x0c, 0x00 },
	{ 0x0d, 0x00 },
	{ 0x0e, 0x00 },
	{ 0x0f, 0x00 },
	{ 0x10, 0x00 },
	{ 0x11, 0x00 },
	{ 0x12, 0x00 },
	{ 0x13, 0x00 },
	{ 0x14, 0x00 },
	{ 0x15, 0x00 },
	{ 0x16, 0x00 },
	{ 0x17, 0x00 },
	{ 0x18, 0x08 },
	{ 0x19, 0x00 },
	{ 0x1a, 0x00 },
	{ 0x1b, 0x00 },
	{ 0x1c, 0x00 },
	{ 0x1d, 0x00 },
	{ 0x1e, 0x00 },
	{ 0x1f, 0x00 },
	{ 0x20, 0x00 },
	{ 0x21, 0x00 },
	{ 0x22, 0x00 },
	{ 0x23, 0x00 },
	{ 0x24, 0x00 },
	{ 0x25, 0x00 },
	{ 0x26, 0x00 },
	{ 0x27, 0x00 },
	{ 0x28, 0x00 },
	{ 0x29, 0x00 },
	{ 0x2a, 0x00 },
	{ 0x2b, 0x00 },
	{ 0x2c, 0x08 },
	{ 0x2d, 0x00 },
	{ 0x2e, 0x00 },
	{ 0x2f, 0x00 },
	{ 0x30, 0x00 },
	{ 0x31, 0x00 },
	{ 0x32, 0x00 },
	{ 0x33, 0x00 },
	{ 0x34, 0x00 },
	{ 0x35, 0x00 },
	{ 0x36, 0x00 },
	{ 0x37, 0x00 },
	{ 0x38, 0x00 },
	{ 0x39, 0x00 },
	{ 0x3a, 0x00 },
	{ 0x3b, 0x00 },
	{ 0x3c, 0x00 },
	{ 0x3d, 0x00 },
	{ 0x3e, 0x00 },
	{ 0x3f, 0x00 },
	{ 0x40, 0x08 },
	{ 0x41, 0x00 },
	{ 0x42, 0x00 },
	{ 0x43, 0x00 },
	{ 0x44, 0x00 },
	{ 0x45, 0x00 },
	{ 0x46, 0x00 },
	{ 0x47, 0x00 },
	{ 0x48, 0x00 },
	{ 0x49, 0x00 },
	{ 0x4a, 0x00 },
	{ 0x4b, 0x00 },
	{ 0x4c, 0x00 },
	{ 0x4d, 0x00 },
	{ 0x4e, 0x00 },
	{ 0x4f, 0x00 },
	{ 0x50, 0x00 },
	{ 0x51, 0x00 },
	{ 0x52, 0x00 },
	{ 0x53, 0x00 },
	{ 0x54, 0x08 },
	{ 0x55, 0x00 },
	{ 0x56, 0x00 },
	{ 0x57, 0x00 },
	{ 0x58, 0x00 },
	{ 0x59, 0x00 },
	{ 0x5a, 0x00 },
	{ 0x5b, 0x00 },
	{ 0x5c, 0x00 },
	{ 0x5d, 0x00 },
	{ 0x5e, 0x00 },
	{ 0x5f, 0x00 },
	{ 0x60, 0x00 },
	{ 0x61, 0x00 },
	{ 0x62, 0x00 },
	{ 0x63, 0x00 },
	{ 0x64, 0x00 },
	{ 0x65, 0x00 },
	{ 0x66, 0x00 },
	{ 0x67, 0x00 },
	{ 0x68, 0x08 },
	{ 0x69, 0x00 },
	{ 0x6a, 0x00 },
	{ 0x6b, 0x00 },
	{ 0x6c, 0x00 },
	{ 0x6d, 0x00 },
	{ 0x6e, 0x00 },
	{ 0x6f, 0x00 },
	{ 0x70, 0x00 },
	{ 0x71, 0x00 },
	{ 0x72, 0x00 },
	{ 0x73, 0x00 },
	{ 0x74, 0x00 },
	{ 0x75, 0x00 },
	{ 0x76, 0x00 },
	{ 0x77, 0x00 },
	{ 0x78, 0x00 },
	{ 0x79, 0x00 },
	{ 0x7a, 0x00 },
	{ 0x7b, 0x00 },
	{ 0x7c, 0x08 },
	{ 0x7d, 0x00 },
	{ 0x7e, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x00, 0x29 },
	{ 0x08, 0x00 },
	{ 0x09, 0x00 },
	{ 0x0a, 0x00 },
	{ 0x0b, 0x00 },
	{ 0x0c, 0x00 },
	{ 0x0d, 0x00 },
	{ 0x0e, 0x00 },
	{ 0x0f, 0x00 },
	{ 0x10, 0x00 },
	{ 0x11, 0x00 },
	{ 0x12, 0x00 },
	{ 0x13, 0x00 },
	{ 0x14, 0x00 },
	{ 0x15, 0x00 },
	{ 0x16, 0x00 },
	{ 0x17, 0x00 },
	{ 0x00, 0x2e },
	{ 0x7c, 0x08 },
	{ 0x7d, 0x00 },
	{ 0x7e, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x00, 0x2f },
	{ 0x08, 0x00 },
	{ 0x09, 0x00 },
	{ 0x0a, 0x00 },
	{ 0x0b, 0x00 },
	{ 0x0c, 0x00 },
	{ 0x0d, 0x00 },
	{ 0x0e, 0x00 },
	{ 0x0f, 0x00 },
	{ 0x10, 0x00 },
	{ 0x11, 0x00 },
	{ 0x12, 0x00 },
	{ 0x13, 0x00 },
	{ 0x14, 0x00 },
	{ 0x15, 0x00 },
	{ 0x16, 0x00 },
	{ 0x17, 0x00 },
	{ 0x1c, 0x08 },
	{ 0x1d, 0x00 },
	{ 0x1e, 0x00 },
	{ 0x1f, 0x00 },
	{ 0x20, 0x00 },
	{ 0x21, 0x00 },
	{ 0x22, 0x00 },
	{ 0x23, 0x00 },
	{ 0x24, 0x00 },
	{ 0x25, 0x00 },
	{ 0x26, 0x00 },
	{ 0x27, 0x00 },
	{ 0x28, 0x00 },
	{ 0x29, 0x00 },
	{ 0x2a, 0x00 },
	{ 0x2b, 0x00 },
	{ 0x2c, 0x00 },
	{ 0x2d, 0x00 },
	{ 0x2e, 0x00 },
	{ 0x2f, 0x00 },
	{ 0x00, 0x2a },
	{ 0x48, 0x00 },
	{ 0x49, 0x01 },
	{ 0x4a, 0x64 },
	{ 0x4b, 0x0a },
	{ 0x4c, 0x00 },
	{ 0x4d, 0x01 },
	{ 0x4e, 0x64 },
	{ 0x4f, 0x0a },
	{ 0x50, 0x00 },
	{ 0x51, 0x01 },
	{ 0x52, 0x64 },
	{ 0x53, 0x0a },
	{ 0x54, 0x7e },
	{ 0x55, 0xd0 },
	{ 0x56, 0xb5 },
	{ 0x57, 0x2d },
	{ 0x58, 0x82 },
	{ 0x59, 0x59 },
	{ 0x5a, 0x05 },
	{ 0x5b, 0x7b },
	{ 0x00, 0x00 },
	{ 0x7f, 0x8c },
	{ 0x00, 0x2b },
	{ 0x34, 0x00 },
	{ 0x35, 0x0d },
	{ 0x36, 0xa6 },
	{ 0x37, 0x86 },
	{ 0x38, 0x00 },
	{ 0x39, 0x0d },
	{ 0x3a, 0xa6 },
	{ 0x3b, 0x86 },
	{ 0x3c, 0x00 },
	{ 0x3d, 0x06 },
	{ 0x3e, 0xd3 },
	{ 0x3f, 0x72 },
	{ 0x40, 0x00 },
	{ 0x41, 0x00 },
	{ 0x42, 0x00 },
	{ 0x43, 0x00 },
	{ 0x44, 0x00 },
	{ 0x45, 0x00 },
	{ 0x46, 0x00 },
	{ 0x47, 0x00 },
	{ 0x48, 0xff },
	{ 0x49, 0x81 },
	{ 0x4a, 0x47 },
	{ 0x4b, 0xae },
	{ 0x4c, 0xf9 },
	{ 0x4d, 0x06 },
	{ 0x4e, 0x21 },
	{ 0x4f, 0xa9 },
	{ 0x50, 0xfe },
	{ 0x51, 0x01 },
	{ 0x52, 0xc0 },
	{ 0x53, 0x79 },
	{ 0x54, 0x00 },
	{ 0x55, 0x00 },
	{ 0x56, 0x00 },
	{ 0x57, 0x00 },
	{ 0x58, 0x00 },
	{ 0x59, 0x00 },
	{ 0x5a, 0x00 },
	{ 0x5b, 0x00 },
	{ 0x00, 0x2d },
	{ 0x58, 0x01 },
	{ 0x59, 0x53 },
	{ 0x5a, 0x8f },
	{ 0x5b, 0xcc },
	{ 0x5c, 0x01 },
	{ 0x5d, 0x53 },
	{ 0x5e, 0x8f },
	{ 0x5f, 0xcc },
	{ 0x60, 0x00 },
	{ 0x61, 0x22 },
	{ 0x62, 0x1d },
	{ 0x63, 0x95 },
	{ 0x64, 0x00 },
	{ 0x65, 0x00 },
	{ 0x66, 0x00 },
	{ 0x67, 0x00 },
	{ 0x68, 0x00 },
	{ 0x69, 0x00 },
	{ 0x6a, 0x00 },
	{ 0x6b, 0x00 },
	{ 0x6c, 0xff },
	{ 0x6d, 0x81 },
	{ 0x6e, 0x47 },
	{ 0x6f, 0xae },
	{ 0x70, 0xf9 },
	{ 0x71, 0x06 },
	{ 0x72, 0x21 },
	{ 0x73, 0xa9 },
	{ 0x74, 0xfe },
	{ 0x75, 0x01 },
	{ 0x76, 0xc0 },
	{ 0x77, 0x79 },
	{ 0x78, 0x00 },
	{ 0x79, 0x00 },
	{ 0x7a, 0x00 },
	{ 0x7b, 0x00 },
	{ 0x7c, 0x00 },
	{ 0x7d, 0x00 },
	{ 0x7e, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x00, 0x00 },
	{ 0x7f, 0xaa },
	{ 0x00, 0x2e },
	{ 0x40, 0x01 },
	{ 0x41, 0xd7 },
	{ 0x42, 0xe8 },
	{ 0x43, 0x0a },
	{ 0x44, 0x01 },
	{ 0x45, 0xd7 },
	{ 0x46, 0xe8 },
	{ 0x47, 0x0a },
	{ 0x48, 0x01 },
	{ 0x49, 0xd7 },
	{ 0x4a, 0xe8 },
	{ 0x4b, 0x0a },
	{ 0x4c, 0x68 },
	{ 0x4d, 0x82 },
	{ 0x4e, 0xf5 },
	{ 0x4f, 0xbf },
	{ 0x50, 0xa7 },
	{ 0x51, 0x9a },
	{ 0x52, 0x74 },
	{ 0x53, 0x5a },
	{ 0x00, 0x2b },
	{ 0x20, 0x6a },
	{ 0x21, 0x5a },
	{ 0x22, 0xdd },
	{ 0x23, 0xc9 },
	{ 0x24, 0x95 },
	{ 0x25, 0xa5 },
	{ 0x26, 0x22 },
	{ 0x27, 0x37 },
	{ 0x28, 0x6a },
	{ 0x29, 0x5a },
	{ 0x2a, 0xdd },
	{ 0x2b, 0xc9 },
	{ 0x2c, 0x68 },
	{ 0x2d, 0x82 },
	{ 0x2e, 0xf5 },
	{ 0x2f, 0xbf },
	{ 0x30, 0xa7 },
	{ 0x31, 0x9a },
	{ 0x32, 0x74 },
	{ 0x33, 0x5a },
	{ 0x0c, 0x6a },
	{ 0x0d, 0x5a },
	{ 0x0e, 0xdd },
	{ 0x0f, 0xc9 },
	{ 0x10, 0x95 },
	{ 0x11, 0xa5 },
	{ 0x12, 0x22 },
	{ 0x13, 0x37 },
	{ 0x14, 0x6a },
	{ 0x15, 0x5a },
	{ 0x16, 0xdd },
	{ 0x17, 0xc9 },
	{ 0x18, 0x68 },
	{ 0x19, 0x82 },
	{ 0x1a, 0xf5 },
	{ 0x1b, 0xbf },
	{ 0x1c, 0xa7 },
	{ 0x1d, 0x9a },
	{ 0x1e, 0x74 },
	{ 0x1f, 0x5a },
	{ 0x00, 0x2a },
	{ 0x34, 0x00 },
	{ 0x35, 0x01 },
	{ 0x36, 0x64 },
	{ 0x37, 0x0a },
	{ 0x38, 0x00 },
	{ 0x39, 0x01 },
	{ 0x3a, 0x64 },
	{ 0x3b, 0x0a },
	{ 0x3c, 0x00 },
	{ 0x3d, 0x01 },
	{ 0x3e, 0x64 },
	{ 0x3f, 0x0a },
	{ 0x40, 0x7e },
	{ 0x41, 0xd0 },
	{ 0x42, 0xb5 },
	{ 0x43, 0x2d },
	{ 0x44, 0x82 },
	{ 0x45, 0x59 },
	{ 0x46, 0x05 },
	{ 0x47, 0x7b },
	{ 0x00, 0x00 },
	{ 0x7f, 0x8c },
	{ 0x00, 0x2d },
	{ 0x30, 0x01 },
	{ 0x31, 0x53 },
	{ 0x32, 0x8f },
	{ 0x33, 0xcc },
	{ 0x34, 0x01 },
	{ 0x35, 0x53 },
	{ 0x36, 0x8f },
	{ 0x37, 0xcc },
	{ 0x38, 0x00 },
	{ 0x39, 0x03 },
	{ 0x3a, 0x69 },
	{ 0x3b, 0xc5 },
	{ 0x3c, 0x00 },
	{ 0x3d, 0x00 },
	{ 0x3e, 0x00 },
	{ 0x3f, 0x00 },
	{ 0x40, 0x00 },
	{ 0x41, 0x00 },
	{ 0x42, 0x00 },
	{ 0x43, 0x00 },
	{ 0x44, 0xff },
	{ 0x45, 0x81 },
	{ 0x46, 0x47 },
	{ 0x47, 0xae },
	{ 0x48, 0xf9 },
	{ 0x49, 0x06 },
	{ 0x4a, 0x21 },
	{ 0x4b, 0xa9 },
	{ 0x4c, 0xfe },
	{ 0x4d, 0x01 },
	{ 0x4e, 0xc0 },
	{ 0x4f, 0x79 },
	{ 0x50, 0x00 },
	{ 0x51, 0x00 },
	{ 0x52, 0x00 },
	{ 0x53, 0x00 },
	{ 0x54, 0x00 },
	{ 0x55, 0x00 },
	{ 0x56, 0x00 },
	{ 0x57, 0x00 },
	{ 0x00, 0x00 },
	{ 0x7f, 0xaa },
	{ 0x00, 0x2a },
	{ 0x5c, 0x7e },
	{ 0x5d, 0xd2 },
	{ 0x5e, 0x19 },
	{ 0x5f, 0x37 },
	{ 0x60, 0x81 },
	{ 0x61, 0x2d },
	{ 0x62, 0xe6 },
	{ 0x63, 0xc9 },
	{ 0x64, 0x7e },
	{ 0x65, 0xd2 },
	{ 0x66, 0x19 },
	{ 0x67, 0x37 },
	{ 0x68, 0x7e },
	{ 0x69, 0xd0 },
	{ 0x6a, 0xb5 },
	{ 0x6b, 0x2d },
	{ 0x6c, 0x82 },
	{ 0x6d, 0x59 },
	{ 0x6e, 0x05 },
	{ 0x6f, 0x7b },
	{ 0x70, 0x7e },
	{ 0x71, 0xd2 },
	{ 0x72, 0x19 },
	{ 0x73, 0x37 },
	{ 0x74, 0x81 },
	{ 0x75, 0x2d },
	{ 0x76, 0xe6 },
	{ 0x77, 0xc9 },
	{ 0x78, 0x7e },
	{ 0x79, 0xd2 },
	{ 0x7a, 0x19 },
	{ 0x7b, 0x37 },
	{ 0x7c, 0x7e },
	{ 0x7d, 0xd0 },
	{ 0x7e, 0xb5 },
	{ 0x7f, 0x2d },
	{ 0x00, 0x2b },
	{ 0x08, 0x82 },
	{ 0x09, 0x59 },
	{ 0x0a, 0x05 },
	{ 0x0b, 0x7b },
	{ 0x00, 0x2e },
	{ 0x54, 0x01 },
	{ 0x55, 0xd7 },
	{ 0x56, 0xe8 },
	{ 0x57, 0x0a },
	{ 0x58, 0x01 },
	{ 0x59, 0xd7 },
	{ 0x5a, 0xe8 },
	{ 0x5b, 0x0a },
	{ 0x5c, 0x01 },
	{ 0x5d, 0xd7 },
	{ 0x5e, 0xe8 },
	{ 0x5f, 0x0a },
	{ 0x60, 0x68 },
	{ 0x61, 0x82 },
	{ 0x62, 0xf5 },
	{ 0x63, 0xbf },
	{ 0x64, 0xa7 },
	{ 0x65, 0x9a },
	{ 0x66, 0x74 },
	{ 0x67, 0x5a },
	{ 0x00, 0x00 },
	{ 0x7f, 0x8c },
	{ 0x00, 0x2e },
	{ 0x10, 0x00 },
	{ 0x11, 0x80 },
	{ 0x12, 0x00 },
	{ 0x13, 0x00 },
	{ 0x0c, 0x00 },
	{ 0x0d, 0x80 },
	{ 0x0e, 0x00 },
	{ 0x0f, 0x00 },
	{ 0x08, 0x00 },
	{ 0x09, 0x80 },
	{ 0x0a, 0x00 },
	{ 0x0b, 0x00 },
	{ 0x18, 0x00 },
	{ 0x19, 0x80 },
	{ 0x1a, 0x00 },
	{ 0x1b, 0x00 },
	{ 0x1c, 0x40 },
	{ 0x1d, 0x00 },
	{ 0x1e, 0x00 },
	{ 0x1f, 0x00 },
	{ 0x20, 0x40 },
	{ 0x21, 0x00 },
	{ 0x22, 0x00 },
	{ 0x23, 0x00 },
//Register Tuning
	{ 0x00, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x30, 0x00 },
	{ 0x4c, 0x30 },
	{ 0x03, 0x03 },

	{ 0x00, 0x00 },
	{ 0x7f, 0x00 },
	{ 0x78, 0x80 },
};

#endif