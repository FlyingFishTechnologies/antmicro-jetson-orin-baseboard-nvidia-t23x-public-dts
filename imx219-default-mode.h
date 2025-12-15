// SPDX-License-Identifier: GPL-2.0-only
/* IMX219 Default Mode Properties
 *
 * Copyright (c) 2022, NVIDIA CORPORATION.  All rights reserved.
 * Copyright (c) 2023 Antmicro <www.antmicro.com>
 * 
 */

#ifndef _IMX219_DEFAULT_MODE_H
#define _IMX219_DEFAULT_MODE_H

#define IMX219_DEFAULT_MODE \
	phy_mode = "DPHY"; \
	discontinuous_clk = "yes"; \
	dpcm_enable = "false"; \
	cil_settletime = "0"; \
	mode_type = "bayer"; \
	pixel_phase = "rggb"; \
	csi_pixel_bit_depth = "10"; \
	readout_orientation = "90"; \
	line_length = "3448"; \
	inherent_gain = "1"; \
	mclk_khz = "24000"; \
	mclk_multiplier = "9.33"; \
	pix_clk_hz = "182400000"; \
	gain_factor = "16"; \
	framerate_factor = "1000000"; \
	exposure_factor = "1000000"; \
	min_gain_val = "16"; /* 1.00x */ \
	max_gain_val = "170"; /* 10.66x */ \
	step_gain_val = "1"; \
	default_gain = "16"; /* 1.00x */ \
	min_hdr_ratio = "1"; \
	max_hdr_ratio = "1"; \
	min_framerate = "2000000"; /* 2.0 fps */ \
	step_framerate = "1"; \
	min_exp_time = "13"; /* us */ \
	max_exp_time = "683709"; /* us */ \
	step_exp_time = "1"; \
	default_exp_time = "2495"; /* us */ \
	embedded_metadata_height = "2";

#endif // #ifndef _IMX219_DEFAULT_MODE_H

