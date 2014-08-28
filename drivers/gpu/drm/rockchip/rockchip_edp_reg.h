/* rk32xx_dp_reg.h
*
* based on exynos_dp_reg.h
* Copyright (C) Fuzhou Rockchip Electronics Co.Ltd
* Author:
*      yxj <yxj@rock-chips.com>
*      cym <cym@rock-chips.com>
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*/

#ifndef _ROCKCHIP_EDP_REG_H
#define _ROCKCHIP_EDP_REG_H

#include <linux/bitops.h>

#define DP_VERSION				0x10

#define TX_SW_RST				0x14

#define FUNC_EN_1				0x18
#define VID_CAP_FUNC_EN_N			BIT(6)
#define VID_FIFO_FUNC_EN_N			BIT(5)
#define AUD_FIFO_FUNC_EN_N			BIT(4)
#define AUD_FUNC_EN_N				BIT(3)
#define HDCP_FUNC_EN_N				BIT(2)
#define SW_FUNC_EN_N				BIT(0)

#define FUNC_EN_2				0x1C
#define SSC_FUNC_EN_N				BIT(7)
#define AUX_FUNC_EN_N				BIT(2)
#define SERDES_FIFO_FUNC_EN_N			BIT(1)
#define LS_CLK_DOMAIN_FUNC_EN_N			BIT(0)

#define VIDEO_CTL_1				0x20
#define VIDEO_EN				BIT(7)
#define VIDEO_MUTE				BIT(6)

#define VIDEO_CTL_2				0x24
#define IN_D_RANGE_MASK				(0x1 << 7)
#define IN_D_RANGE_SHIFT			(7)
#define IN_D_RANGE_CEA				(0x1 << 7)
#define IN_D_RANGE_VESA				(0x0 << 7)
#define IN_BPC_MASK				(0x7 << 4)
#define IN_BPC_SHIFT				(4)
#define IN_BPC_12_BITS				(0x3 << 4)
#define IN_BPC_10_BITS				(0x2 << 4)
#define IN_BPC_8_BITS				(0x1 << 4)
#define IN_BPC_6_BITS				(0x0 << 4)
#define IN_COLOR_F_MASK				(0x3 << 0)
#define IN_COLOR_F_SHIFT			(0)
#define IN_COLOR_F_YCBCR444			(0x2 << 0)
#define IN_COLOR_F_YCBCR422			(0x1 << 0)
#define IN_COLOR_F_RGB				(0x0 << 0)

#define VIDEO_CTL_3				0x28
#define IN_YC_COEFFI_MASK			(0x1 << 7)
#define IN_YC_COEFFI_SHIFT			(7)
#define IN_YC_COEFFI_ITU709			(0x1 << 7)
#define IN_YC_COEFFI_ITU601			(0x0 << 7)
#define VID_CHK_UPDATE_TYPE_MASK		(0x1 << 4)
#define VID_CHK_UPDATE_TYPE_SHIFT		(4)
#define VID_CHK_UPDATE_TYPE_1			(0x1 << 4)
#define VID_CHK_UPDATE_TYPE_0			(0x0 << 4)

#define VIDEO_CTL_4				0x2c
#define BIST_EN					(0x1 << 3)
#define BIST_WH_64				(0x1 << 2)
#define BIST_WH_32				(0x0 << 2)
#define BIST_TYPE_COLR_BAR			(0x0 << 0)
#define BIST_TYPE_GRAY_BAR			(0x1 << 0)
#define BIST_TYPE_MOBILE_BAR			(0x2 << 0)

#define VIDEO_CTL_8				0x3C
#define VID_HRES_TH(x)				(((x) & 0xf) << 4)
#define VID_VRES_TH(x)				(((x) & 0xf) << 0)

#define VIDEO_CTL_10				0x44
#define F_SEL					(0x1 << 4)
#define INTERACE_SCAN_CFG			(0x1 << 2)
#define VSYNC_POLARITY_CFG			(0x1 << 1)
#define HSYNC_POLARITY_CFG			(0x1 << 0)

#define TOTAL_LINE_CFG_L			0x48
#define TOTAL_LINE_CFG_H			0x4c
#define ATV_LINE_CFG_L				0x50
#define ATV_LINE_CFG_H				0x54
#define VF_PORCH_REG				0x58
#define VSYNC_CFG_REG				0x5c
#define VB_PORCH_REG				0x60
#define TOTAL_PIXELL_REG			0x64
#define TOTAL_PIXELH_REG			0x68
#define ATV_PIXELL_REG				0x6c
#define ATV_PIXELH_REG				0x70
#define HF_PORCHL_REG				0x74
#define HF_PORCHH_REG				0x78
#define HSYNC_CFGL_REG				0x7c
#define HSYNC_CFGH_REG				0x80
#define HB_PORCHL_REG				0x84
#define HB_PORCHH_REG				0x88

#define SSC_REG					0x104
#define TX_REG_COMMON				0x114
#define DP_AUX					0x120
#define DP_BIAS					0x124

#define PLL_REG_1				0xfc
#define REF_CLK_24M				(0x1 << 1)
#define REF_CLK_27M				(0x0 << 1)

#define PLL_REG_2				0x9e4
#define PLL_REG_3				0x9e8
#define PLL_REG_4				0x9ec
#define PLL_REG_5				0xa00
#define DP_PWRDN				0x12c
#define PD_INC_BG				BIT(7)
#define PD_EXP_BG				BIT(6)
#define PD_AUX					BIT(5)
#define PD_PLL					BIT(4)
#define PD_CH3					BIT(3)
#define PD_CH2					BIT(2)
#define PD_CH1					BIT(1)
#define PD_CH0					BIT(0)

#define DP_RESERVE2				0x134

#define LANE_MAP				0x35C
#define LANE3_MAP_LOGIC_LANE_0			(0x0 << 6)
#define LANE3_MAP_LOGIC_LANE_1			(0x1 << 6)
#define LANE3_MAP_LOGIC_LANE_2			(0x2 << 6)
#define LANE3_MAP_LOGIC_LANE_3			(0x3 << 6)
#define LANE2_MAP_LOGIC_LANE_0			(0x0 << 4)
#define LANE2_MAP_LOGIC_LANE_1			(0x1 << 4)
#define LANE2_MAP_LOGIC_LANE_2			(0x2 << 4)
#define LANE2_MAP_LOGIC_LANE_3			(0x3 << 4)
#define LANE1_MAP_LOGIC_LANE_0			(0x0 << 2)
#define LANE1_MAP_LOGIC_LANE_1			(0x1 << 2)
#define LANE1_MAP_LOGIC_LANE_2			(0x2 << 2)
#define LANE1_MAP_LOGIC_LANE_3			(0x3 << 2)
#define LANE0_MAP_LOGIC_LANE_0			(0x0 << 0)
#define LANE0_MAP_LOGIC_LANE_1			(0x1 << 0)
#define LANE0_MAP_LOGIC_LANE_2			(0x2 << 0)
#define LANE0_MAP_LOGIC_LANE_3			(0x3 << 0)

#define ANALOG_CTL_2				0x374
#define SEL_24M					(0x1 << 3)

#define AUX_HW_RETRY_CTL			0x390

#define INT_STA					0x3c0

#define COMMON_INT_STA_1			0x3C4
#define VSYNC_DET				BIT(7)
#define PLL_LOCK_CHG				BIT(6)
#define SPDIF_ERR				BIT(5)
#define SPDIF_UNSTBL				BIT(4)
#define VID_FORMAT_CHG				BIT(3)
#define AUD_CLK_CHG				BIT(2)
#define VID_CLK_CHG				BIT(1)
#define SW_INT					BIT(0)

#define COMMON_INT_STA_2			0x3C8
#define ENC_EN_CHG				BIT(6)
#define HW_BKSV_RDY				BIT(3)
#define HW_SHA_DONE				BIT(2)
#define HW_AUTH_STATE_CHG			BIT(1)
#define HW_AUTH_DONE				BIT(0)

#define COMMON_INT_STA_3			0x3CC
#define AFIFO_UNDER				BIT(7)
#define AFIFO_OVER				BIT(6)
#define R0_CHK_FLAG				BIT(5)

#define COMMON_INT_STA_4			0x3D0
#define PSR_ACTIVE				BIT(7)
#define PSR_INACTIVE				BIT(6)
#define SPDIF_BI_PHASE_ERR			BIT(5)
#define HOTPLUG_CHG				BIT(2)
#define HPD_LOST				BIT(1)
#define PLUG					BIT(0)

#define DP_INT_STA				0x3DC
#define INT_HPD					BIT(6)
#define HW_LT_DONE				BIT(5)
#define SINK_LOST				BIT(3)
#define LINK_LOST				BIT(2)
#define RPLY_RECEIV				BIT(1)
#define AUX_ERR					BIT(0)

#define COMMON_INT_MASK_1			0x3E0
#define COMMON_INT_MASK_2			0x3E4
#define COMMON_INT_MASK_3			0x3E8
#define COMMON_INT_MASK_4			0x3EC
#define DP_INT_STA_MASK				0x3F8

#define INT_CTL					0x3FC
#define SOFT_INT_CTRL				BIT(2)
#define INT_POL					BIT(0)

#define SYS_CTL_1				0x600
#define DET_STA					BIT(2)
#define FORCE_DET				BIT(1)
#define DET_CTRL				BIT(0)

#define SYS_CTL_2				0x604
#define CHA_CRI(x)				(((x) & 0xf) << 4)
#define CHA_STA					BIT(2)
#define FORCE_CHA				BIT(1)
#define CHA_CTRL				BIT(0)

#define SYS_CTL_3				0x608
#define HPD_STATUS				BIT(6)
#define F_HPD					BIT(5)
#define HPD_CTRL				BIT(4)
#define HDCP_RDY				BIT(3)
#define STRM_VALID				BIT(2)
#define F_VALID					BIT(1)
#define VALID_CTRL				BIT(0)

#define SYS_CTL_4				0x60C
#define FIX_M_AUD				BIT(4)
#define ENHANCED				BIT(3)
#define FIX_M_VID				BIT(2)
#define M_VID_UPDATE_CTRL			BIT(0)

#define PKT_SEND_CTL				0x640
#define HDCP_CTL				0x648

#define LINK_BW_SET				0x680
#define LANE_CNT_SET				0x684

#define TRAINING_PTN_SET			0x688
#define SCRAMBLING_DISABLE			(0x1 << 5)
#define SCRAMBLING_ENABLE			(0x0 << 5)
#define LINK_QUAL_PATTERN_SET_MASK		(0x7 << 2)
#define LINK_QUAL_PATTERN_SET_HBR2		(0x5 << 2)
#define LINK_QUAL_PATTERN_SET_80BIT		(0x4 << 2)
#define LINK_QUAL_PATTERN_SET_PRBS7		(0x3 << 2)
#define LINK_QUAL_PATTERN_SET_D10_2		(0x1 << 2)
#define LINK_QUAL_PATTERN_SET_DISABLE		(0x0 << 2)
#define SW_TRAINING_PATTERN_SET_MASK		(0x3 << 0)
#define SW_TRAINING_PATTERN_SET_PTN2		(0x2 << 0)
#define SW_TRAINING_PATTERN_SET_PTN1		(0x1 << 0)
#define SW_TRAINING_PATTERN_SET_DISABLE		(0x0 << 0)

#define LN0_LINK_TRAINING_CTL			0x68C
#define LN1_LINK_TRAINING_CTL			0x690
#define LN2_LINK_TRAINING_CTL			0x694
#define LN3_LINK_TRAINING_CTL			0x698

#define HW_LT_CTL				0x6a0
#define HW_LT_ERR_CODE_MASK			0x70
#define HW_LT_EN				BIT(0)

#define DEBUG_CTL				0x6C0
#define PLL_LOCK				BIT(4)
#define F_PLL_LOCK				BIT(3)
#define PLL_LOCK_CTRL				BIT(2)
#define POLL_EN					BIT(1)
#define PN_INV					BIT(0)

#define HPD_DEGLITCH_L				0x6C4
#define HPD_DEGLITCH_H				0x6C8
#define LINK_DEBUG_CTL				0x6E0

#define M_VID_0					0x700
#define M_VID_1					0x704
#define M_VID_2					0x708
#define N_VID_0					0x70C
#define N_VID_1					0x710
#define N_VID_2					0x714

#define VIDEO_FIFO_THRD				0x730
#define AUDIO_MARGIN				0x73C

#define M_VID_GEN_FILTER_TH			0x764
#define M_AUD_GEN_FILTER_TH			0x778

#define AUX_CH_STA				0x780
#define AUX_BUSY				(0x1 << 4)
#define AUX_STATUS_MASK				(0xf << 0)

#define AUX_CH_DEFER_CTL			0x788
#define DEFER_CTRL_EN				(0x1 << 7)
#define DEFER_COUNT(x)				(((x) & 0x7f) << 0)

#define AUX_RX_COMM_I2C_DEFER			(0x2 << 2)
#define AUX_RX_COMM_AUX_DEFER			(0x2 << 0)

#define AUX_RX_COMM				0x78C
#define BUFFER_DATA_CTL				0x790
#define BUF_CLR					(0x1 << 7)
#define BUF_HAVE_DATA				(0x1 << 4)
#define BUF_DATA_COUNT(x)			(((x) & 0xf) << 0)

#define AUX_CH_CTL_1				0x794
#define AUX_LENGTH(x)				(((x - 1) & 0xf) << 4)
#define AUX_TX_COMM_MASK			(0xf << 0)
#define AUX_TX_COMM_DP_TRANSACTION		(0x1 << 3)
#define AUX_TX_COMM_I2C_TRANSACTION		(0x0 << 3)
#define AUX_TX_COMM_MOT				(0x1 << 2)
#define AUX_TX_COMM_WRITE			(0x0 << 0)
#define AUX_TX_COMM_READ			(0x1 << 0)

#define DP_AUX_ADDR_7_0				0x798
#define DP_AUX_ADDR_15_8			0x79C
#define DP_AUX_ADDR_19_16			0x7A0

#define AUX_CH_CTL_2				0x7A4
#define PD_AUX_IDLE				BIT(3)
#define ADDR_ONLY				BIT(1)
#define AUX_EN					BIT(0)

#define BUF_DATA_0				0x7C0

#define SOC_GENERAL_CTL				0x800

/* TX_SW_RESET */
#define RST_DP_TX				BIT(0)

/* ANALOG_CTL_1 */
#define TX_TERMINAL_CTRL_50_OHM			BIT(4)

/* ANALOG_CTL_3 */
#define DRIVE_DVDD_BIT_1_0625V			(0x4 << 5)
#define VCO_BIT_600_MICRO			(0x5 << 0)

/* PLL_FILTER_CTL_1 */
#define PD_RING_OSC				(0x1 << 6)
#define AUX_TERMINAL_CTRL_37_5_OHM		(0x0 << 4)
#define AUX_TERMINAL_CTRL_45_OHM		(0x1 << 4)
#define AUX_TERMINAL_CTRL_50_OHM		(0x2 << 4)
#define AUX_TERMINAL_CTRL_65_OHM		(0x3 << 4)
#define TX_CUR1_2X				(0x1 << 2)
#define TX_CUR_16_MA				(0x3 << 0)

/* TX_AMP_TUNING_CTL */
#define CH3_AMP_SHIFT				(24)
#define CH3_AMP_400_MV				(0x0 << 24)
#define CH2_AMP_SHIFT				(16)
#define CH2_AMP_400_MV				(0x0 << 16)
#define CH1_AMP_SHIFT				(8)
#define CH1_AMP_400_MV				(0x0 << 8)
#define CH0_AMP_SHIFT				(0)
#define CH0_AMP_400_MV				(0x0 << 0)

/* AUX_HW_RETRY_CTL */
#define AUX_BIT_PERIOD_EXPECTED_DELAY(x)	(((x) & 0x7) << 8)
#define AUX_HW_RETRY_INTERVAL_MASK		(0x3 << 3)
#define AUX_HW_RETRY_INTERVAL_600_MICROSECONDS	(0x0 << 3)
#define AUX_HW_RETRY_INTERVAL_800_MICROSECONDS	(0x1 << 3)
#define AUX_HW_RETRY_INTERVAL_1000_MICROSECONDS	(0x2 << 3)
#define AUX_HW_RETRY_INTERVAL_1800_MICROSECONDS	(0x3 << 3)
#define AUX_HW_RETRY_COUNT_SEL(x)		(((x) & 0x7) << 0)

/* LN0_LINK_TRAINING_CTL */
#define PRE_EMPHASIS_SET_MASK			(0x3 << 3)
#define PRE_EMPHASIS_SET_SHIFT			(3)

/* PLL_CTL */
#define DP_PLL_PD				(0x1 << 7)
#define DP_PLL_RESET				(0x1 << 6)
#define DP_PLL_LOOP_BIT_DEFAULT			(0x1 << 4)
#define DP_PLL_REF_BIT_1_1250V			(0x5 << 0)
#define DP_PLL_REF_BIT_1_2500V			(0x7 << 0)

/* PHY_TEST */
#define MACRO_RST				BIT(5)
#define CH1_TEST				BIT(1)
#define CH0_TEST				BIT(0)

#define AUX_ADDR_7_0(x)			(((x) >> 0) & 0xff)
#define AUX_ADDR_15_8(x)		(((x) >> 8) & 0xff)
#define AUX_ADDR_19_16(x)		(((x) >> 16) & 0x0f)

#endif /* _ROCKCHIP_EDP_REG_H */
