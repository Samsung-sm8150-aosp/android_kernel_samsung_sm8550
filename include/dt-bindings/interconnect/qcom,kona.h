/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2022, Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef __DT_BINDINGS_INTERCONNECT_QCOM_KONA_H
#define __DT_BINDINGS_INTERCONNECT_QCOM_KONA_H

#define MASTER_GPU_TCU				0
#define MASTER_SYS_TCU				1
#define MASTER_APPSS_PROC			2
#define MASTER_LLCC				3
#define MASTER_QDSS_BAM				4
#define MASTER_QSPI_0				5
#define MASTER_QUP_0				6
#define MASTER_QUP_1				7
#define MASTER_QUP_2				8
#define MASTER_A1NOC_CFG			9
#define MASTER_A2NOC_CFG			10
#define MASTER_A1NOC_SNOC			11
#define MASTER_A2NOC_SNOC			12
#define MASTER_CAMNOC_HF			13
#define MASTER_CAMNOC_ICP			14
#define MASTER_CAMNOC_SF			15
#define MASTER_COMPUTE_NOC			16
#define MASTER_CNOC_DC_NOC			17
#define MASTER_GEM_NOC_CFG			18
#define MASTER_GEM_NOC_PCIE_SNOC		19
#define MASTER_GFX3D				20
#define MASTER_CNOC_MNOC_CFG			21
#define MASTER_MNOC_HF_MEM_NOC			22
#define MASTER_MNOC_SF_MEM_NOC			23
#define MASTER_ANOC_PCIE_GEM_NOC		24
#define MASTER_SNOC_CFG				25
#define MASTER_SNOC_GC_MEM_NOC			26
#define MASTER_SNOC_SF_MEM_NOC			27
#define MASTER_VIDEO_P0				28
#define MASTER_VIDEO_P1				29
#define MASTER_VIDEO_PROC			30
#define MASTER_CRYPTO				31
#define MASTER_IPA				32
#define MASTER_MDP0				33
#define MASTER_MDP1				34
#define MASTER_PIMEM				35
#define MASTER_ROTATOR				36
#define MASTER_GIC				37
#define MASTER_PCIE_0				38
#define MASTER_PCIE_1				39
#define MASTER_QDSS_DAP				40
#define MASTER_QDSS_ETR				41
#define MASTER_SDCC_2				42
#define MASTER_SDCC_4				43
#define MASTER_UFS_CARD				44
#define MASTER_UFS_MEM				45
#define MASTER_USB3_0				46
#define MASTER_USB3_1				47
#define MASTER_TSIF				48
#define MASTER_PCIE_2				49
#define MASTER_CNOC_A2NOC			50
#define MASTER_SNOC_CNOC			51
#define MASTER_IPA_CORE				52
#define MASTER_GEM_NOC_SNOC			53
#define MASTER_ALC				54
#define MASTER_NPU				55
#define MASTER_NPU_SYS				56
#define MASTER_NPU_CDP				57
#define MASTER_NPU_NOC_CFG			58
#define SLAVE_EBI1				512
#define SLAVE_AHB2PHY_SOUTH			513
#define SLAVE_AHB2PHY_NORTH			514
#define SLAVE_AOSS				515
#define SLAVE_APPSS				516
#define SLAVE_CAMERA_CFG			517
#define SLAVE_CLK_CTL				518
#define SLAVE_CDSP_CFG				519
#define SLAVE_RBCPR_CX_CFG			520
#define SLAVE_RBCPR_MMCX_CFG			521
#define SLAVE_RBCPR_MX_CFG			522
#define SLAVE_CRYPTO_0_CFG			523
#define SLAVE_CX_RDPM				524
#define SLAVE_DCC_CFG				525
#define SLAVE_DISPLAY_CFG			526
#define SLAVE_GFX3D_CFG				527
#define SLAVE_IMEM_CFG				528
#define SLAVE_IPA_CFG				529
#define SLAVE_IPC_ROUTER_CFG			530
#define SLAVE_LLCC_CFG				531
#define SLAVE_LPASS				532
#define SLAVE_PCIE_0_CFG			533
#define SLAVE_PCIE_1_CFG			534
#define SLAVE_PDM				535
#define SLAVE_PIMEM_CFG				536
#define SLAVE_QDSS_CFG				537
#define SLAVE_QSPI_0				538
#define SLAVE_QUP_0				539
#define SLAVE_QUP_1				540
#define SLAVE_QUP_2				541
#define SLAVE_SDCC_2				542
#define SLAVE_SDCC_4				543
#define SLAVE_TCSR				544
#define SLAVE_UFS_CARD_CFG			545
#define SLAVE_UFS_MEM_CFG			546
#define SLAVE_USB3_0				547
#define SLAVE_USB3_1				548
#define SLAVE_VENUS_CFG				549
#define SLAVE_VSENSE_CTRL_CFG			550
#define SLAVE_A1NOC_CFG				551
#define SLAVE_A1NOC_SNOC			552
#define SLAVE_A2NOC_CFG				553
#define SLAVE_A2NOC_SNOC				554
#define SLAVE_GEM_NOC_CFG				555
#define SLAVE_SNOC_GEM_NOC_GC				556
#define SLAVE_SNOC_GEM_NOC_SF				557
#define SLAVE_LLCC					558
#define SLAVE_MNOC_HF_MEM_NOC				559
#define SLAVE_MNOC_SF_MEM_NOC				560
#define SLAVE_CNOC_MNOC_CFG				561
#define SLAVE_CDSP_MEM_NOC				562
#define SLAVE_MEM_NOC_PCIE_SNOC				563
#define SLAVE_ANOC_PCIE_GEM_NOC				564
#define SLAVE_SNOC_CFG					565
#define SLAVE_QUP_CORE_0				566
#define SLAVE_QUP_CORE_1				567
#define SLAVE_QUP_CORE_2				568
#define SLAVE_IMEM					569
#define SLAVE_PIMEM					570
#define SLAVE_SERVICE_NSP_NOC				571
#define SLAVE_SERVICE_A1NOC				572
#define SLAVE_SERVICE_A2NOC				573
#define SLAVE_SERVICE_CNOC				574
#define SLAVE_SERVICE_GEM_NOC_1				575
#define SLAVE_SERVICE_MNOC				576
#define SLAVE_SERVICE_GEM_NOC_2				577
#define SLAVE_SERVICE_SNOC				578
#define SLAVE_SERVICE_GEM_NOC				579
#define SLAVE_PCIE_0				580
#define SLAVE_PCIE_1				581
#define SLAVE_QDSS_STM				582
#define SLAVE_TCU				583
#define SLAVE_ANOC_PCIE_GEM_NOC_1		584
#define SLAVE_CNOC_DDRSS			585
#define SLAVE_NPU_CFG				586
#define SLAVE_PCIE_2_CFG			587
#define SLAVE_PRNG				588
#define SLAVE_TLMM_NORTH			589
#define SLAVE_TLMM_SOUTH			590
#define SLAVE_TLMM_WEST				591
#define SLAVE_TSIF				592
#define SLAVE_CNOC_A2NOC			593
#define SLAVE_IPA_CORE				594
#define SLAVE_OCIMEM				595
#define SLAVE_SNOC_CNOC				596
#define SLAVE_SNOC_MEM_NOC_GC			597
#define SLAVE_PCIE_2				598
#define SLAVE_GEM_NOC_SNOC			599
#define SLAVE_NPU_CAL_DP0			600
#define SLAVE_NPU_CAL_DP1			601
#define SLAVE_NPU_CP				602
#define SLAVE_NPU_INT_DMA_BWMON_CFG		603
#define SLAVE_NPU_DPM				604
#define SLAVE_ISENSE_CFG			605
#define SLAVE_NPU_LLM_CFG			606
#define SLAVE_NPU_TCM				607
#define SLAVE_NPU_COMPUTE_NOC				608
#define SLAVE_SERVICE_NPU_NOC				609
#define MASTER_LLCC_DISP				1000
#define MASTER_MNOC_HF_MEM_NOC_DISP				1001
#define MASTER_MNOC_SF_MEM_NOC_DISP				1002
#define MASTER_MDP0_DISP				1003
#define MASTER_MDP1_DISP				1004
#define MASTER_ROTATOR_DISP				1005
#define SLAVE_EBI1_DISP				1512
#define SLAVE_LLCC_DISP				1513
#define SLAVE_MNOC_HF_MEM_NOC_DISP				1514
#define SLAVE_MNOC_SF_MEM_NOC_DISP				1515

#endif
