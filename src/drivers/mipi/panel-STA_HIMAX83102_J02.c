/* SPDX-License-Identifier: GPL-2.0-only */

#include <mipi/panel.h>

struct panel_serializable_data STA_HIMAX83102_J02 = {
	.edid = {
		.ascii_string = "HIMAX83102-J02",
		.manufacturer_name = "STA",
		.panel_bits_per_color = 8,
		.panel_bits_per_pixel = 24,
		.mode = {
			.pixel_clock = 160368,
			.lvds_dual_channel = 0,
			.refresh = 60,
			.ha = 1200, .hbl = 100, .hso = 40, .hspw = 20,
			.va = 1920, .vbl = 136, .vso = 116, .vspw = 8,
			.phsync = '-', .pvsync = '-',
			.x_mm = 141, .y_mm = 226,
		},
	},
	.init = {
		PANEL_DCS(0xB9, 0x83, 0x10, 0x21, 0x55, 0x00),
		PANEL_DCS(0xB1, 0x2C, 0xB5, 0xB5, 0x31, 0xF1, 0x31, 0xD7, 0x2F, 0x36,
			0x36, 0x36, 0x36, 0x1A, 0x8B, 0x11, 0x65, 0x00, 0x88, 0xFA, 0xFF,
			0xFF, 0x8F, 0xFF, 0x08, 0x74, 0x33),
		PANEL_DCS(0xB2, 0x00, 0x47, 0xB0, 0x80, 0x00, 0x12, 0x72, 0x3C, 0xA3,
			0x03, 0x03, 0x00, 0x00, 0x88, 0xF5),
		PANEL_DCS(0xB4, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x63, 0x5C, 0x63,
			0x5C, 0x01, 0x9E),
		PANEL_DCS(0xE9, 0xCD),
		PANEL_DCS(0xBA, 0x84),
		PANEL_DCS(0xE9, 0x3F),
		PANEL_DCS(0xBC, 0x1B, 0x04),
		PANEL_DCS(0xBE, 0x20),
		PANEL_DCS(0xBF, 0xFC, 0xC4),
		PANEL_DCS(0xC0, 0x36, 0x36, 0x22, 0x11, 0x22, 0xA0, 0x61, 0x08, 0xF5,
			0x03),
		PANEL_DCS(0xE9, 0xCC),
		PANEL_DCS(0xC7, 0x80),
		PANEL_DCS(0xE9, 0x3F),
		PANEL_DCS(0xE9, 0xC6),
		PANEL_DCS(0xC8, 0x97),
		PANEL_DCS(0xE9, 0x3F),
		PANEL_DCS(0xC9, 0x00, 0x1E, 0x13, 0x88, 0x01),
		PANEL_DCS(0xCB, 0x08, 0x13, 0x07, 0x00, 0x0F, 0x33),
		PANEL_DCS(0xCC, 0x02),
		PANEL_DCS(0xE9, 0xC4),
		PANEL_DCS(0xD0, 0x03),
		PANEL_DCS(0xE9, 0x3F),
		PANEL_DCS(0xD1, 0x37, 0x06, 0x00, 0x02, 0x04, 0x0C, 0xFF),
		PANEL_DCS(0xD2, 0x1F, 0x11, 0x1F),
		PANEL_DCS(0xD3, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x08,
			0x37, 0x47, 0x34, 0x3B, 0x12, 0x12, 0x03, 0x03, 0x32, 0x10, 0x10,
			0x00, 0x10, 0x32, 0x10, 0x08, 0x00, 0x08, 0x32, 0x17, 0x94, 0x07,
			0x94, 0x00, 0x00),
		PANEL_DCS(0xD5, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
			0x18, 0x19, 0x19, 0x40, 0x40, 0x1A, 0x1A, 0x1B, 0x1B, 0x00, 0x01,
			0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x20, 0x21, 0x28, 0x29, 0x18,
			0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
			0x18, 0x18),
		PANEL_DCS(0xD6, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
			0x18, 0x40, 0x40, 0x19, 0x19, 0x1A, 0x1A, 0x1B, 0x1B, 0x07, 0x06,
			0x05, 0x04, 0x03, 0x02, 0x01, 0x00, 0x29, 0x28, 0x21, 0x20, 0x18,
			0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
			0x18, 0x18),
		PANEL_DCS(0xD8, 0xAA, 0xBA, 0xEA, 0xAA, 0xAA, 0xA0, 0xAA, 0xBA, 0xEA,
			0xAA, 0xAA, 0xA0, 0xAA, 0xBA, 0xEA, 0xAA, 0xAA, 0xA0, 0xAA, 0xBA,
			0xEA, 0xAA, 0xAA, 0xA0, 0xAA, 0xBA, 0xEA, 0xAA, 0xAA, 0xA0, 0xAA,
			0xBA, 0xEA, 0xAA, 0xAA, 0xA0),
		PANEL_DCS(0xE0, 0x00, 0x09, 0x14, 0x1E, 0x26, 0x48, 0x61, 0x67, 0x6C,
			0x67, 0x7D, 0x7F, 0x80, 0x8B, 0x87, 0x8F, 0x98, 0xAB, 0xAB, 0x55,
			0x5C, 0x68, 0x73, 0x00, 0x09, 0x14, 0x1E, 0x26, 0x48, 0x61, 0x67,
			0x6C, 0x67, 0x7D, 0x7F, 0x80, 0x8B, 0x87, 0x8F, 0x98, 0xAB, 0xAB,
			0x55, 0x5C, 0x68, 0x73),
		PANEL_DCS(0xE7, 0x0E, 0x10, 0x10, 0x21, 0x2B, 0x9A, 0x02, 0x54, 0x9A,
			0x14, 0x14, 0x00, 0x00, 0x00, 0x00, 0x12, 0x05, 0x02, 0x02, 0x10),
		PANEL_DCS(0xBD, 0x01),
		PANEL_DCS(0xB1, 0x01, 0xBF, 0x11),
		PANEL_DCS(0xCB, 0x86),
		PANEL_DCS(0xD2, 0x3C, 0xFA),
		PANEL_DCS(0xE9, 0xC5),
		PANEL_DCS(0xD3, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x01),
		PANEL_DCS(0xE9, 0x3F),
		PANEL_DCS(0xE7, 0x02, 0x00, 0x28, 0x01, 0x7E, 0x0F, 0x7E, 0x10, 0xA0,
			0x00, 0x00, 0x20, 0x40, 0x50, 0x40),
		PANEL_DCS(0xBD, 0x02),
		PANEL_DCS(0xD8, 0xFF, 0xFF, 0xBF, 0xFE, 0xAA, 0xA0, 0xFF, 0xFF, 0xBF,
			0xFE, 0xAA, 0xA0),
		PANEL_DCS(0xE7, 0xFE, 0x04, 0xFE, 0x04, 0xFE, 0x04, 0x03, 0x03, 0x03,
			0x26, 0x00, 0x26, 0x81, 0x02, 0x40, 0x00, 0x20, 0x9E, 0x04, 0x03,
			0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00),
		PANEL_DCS(0xBD, 0x03),
		PANEL_DCS(0xE9, 0xC6),
		PANEL_DCS(0xB4, 0x03, 0xFF, 0xF8),
		PANEL_DCS(0xE9, 0x3F),
		PANEL_DCS(0xD8, 0x00, 0x2A, 0xAA, 0xA8, 0x00, 0x00, 0x00, 0x2A, 0xAA,
			0xA8, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x3F,
			0xFF, 0xFC, 0x00, 0x00, 0x00, 0x2A, 0xAA, 0xA8, 0x00, 0x00, 0x00,
			0x2A, 0xAA, 0xA8, 0x00, 0x00),
		PANEL_DCS(0xBD, 0x00),
		PANEL_DCS(0xE9, 0xC4),
		PANEL_DCS(0xBA, 0x96),
		PANEL_DCS(0xE9, 0x3F),
		PANEL_DCS(0xBD, 0x01),
		PANEL_DCS(0xE9, 0xC5),
		PANEL_DCS(0xBA, 0x4F),
		PANEL_DCS(0xE9, 0x3F),
		PANEL_DCS(0xBD, 0x00),
		PANEL_DCS(0x11),
		PANEL_DELAY(120),
		PANEL_DCS(0x29),
	},
};
