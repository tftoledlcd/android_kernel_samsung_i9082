#ifndef __RHEA_PWR_MNGR_H__
#define __RHEA_PWR_MNGR_H__

#include <mach/rdb/brcm_rdb_pwrmgr.h>
#ifdef CONFIG_DEBUG_FS
#include <linux/stringify.h>
#include <mach/rdb/brcm_rdb_bmdm_pwrmgr.h>
#endif

#define PWRMGR_EVENT_NEGEDGE_CONDITION_ENABLE_MASK	PWRMGR_LCDTE_EVENT_LCDTE_NEGEDGE_CONDITION_ENABLE_MASK
#define PWRMGR_EVENT_POSEDGE_CONDITION_ENABLE_MASK	PWRMGR_LCDTE_EVENT_LCDTE_POSEDGE_CONDITION_ENABLE_MASK
#define PWRMGR_EVENT_CONDITION_ACTIVE_MASK		PWRMGR_LCDTE_EVENT_LCDTE_CONDITION_ACTIVE_MASK

#define PWRMGR_HW_SEM_WA_PI_ID		PI_MGR_PI_ID_ARM_CORE
#define PWRMGR_HW_SEM_LOCK_WA_PI_OPP	PI_OPP_TURBO
#define PWRMGR_HW_SEM_UNLOCK_WA_PI_OPP	PI_OPP_NORMAL
#ifdef CONFIG_DEBUG_FS
extern const char* _rhea__event2str[];
#define PWRMGR_EVENT_ID_TO_STR(e) _rhea__event2str[e]

#endif

enum {
    LCDTE_EVENT = 0,
    SSP2SYN_EVENT,	//1
    SSP2DI_EVENT,	//2
    SSP2CK_EVENT,	//3
    SSP1SYN_EVENT,
    SSP1DI_EVENT,
    SSP1CK_EVENT,
    SSP0SYN_EVENT,
    SSP0DI_EVENT,
    SSP0CK_EVENT,
    DIGCLKREQ_EVENT,
    ANA_SYS_REQ_EVENT,
    SYSCLKREQ_EVENT,
    UBRX_EVENT,		//13 or 0xd
    UBCTSN_EVENT,
    UB2RX_EVENT,
    UB2CTSN_EVENT,
    SIMDET_EVENT,
    SIM2DET_EVENT,
    MMC0D3_EVENT,
    MMC0D1_EVENT,
    MMC1D3_EVENT,
    MMC1D1_EVENT,
    SDDAT3_EVENT,
    SDDAT1_EVENT,	//24 or 0x18
    SLB1CLK_EVENT,
    SLB1DAT_EVENT,
    SWCLKTCK_EVENT,
    SWDIOTMS_EVENT,
    KEY_R0_EVENT,	//29 or 0x1D
    KEY_R1_EVENT,
    KEY_R2_EVENT,
    KEY_R3_EVENT,
    KEY_R4_EVENT,
    KEY_R5_EVENT,
    KEY_R6_EVENT,
    KEY_R7_EVENT,
    CAWAKE_EVENT,
    CAREADY_EVENT,
    CAFLAG_EVENT,
    BATRM_EVENT,	//40 ox 0x28
    USBDP_EVENT,
    USBDN_EVENT,
    RXD_EVENT,
    GPIO29_A_EVENT,
    GPIO32_A_EVENT,
    GPIO33_A_EVENT,
    GPIO43_A_EVENT,
    GPIO44_A_EVENT,
    GPIO45_A_EVENT,
    GPIO46_A_EVENT,	//50
    GPIO47_A_EVENT,
    GPIO48_A_EVENT,
    GPIO71_A_EVENT,
    GPIO72_A_EVENT,
    GPIO73_A_EVENT,
    GPIO74_A_EVENT,
    GPIO95_A_EVENT,
    GPIO96_A_EVENT,
    GPIO99_A_EVENT,
    GPIO100_A_EVENT,	//6-
    GPIO111_A_EVENT,
    GPIO18_A_EVENT,
    GPIO19_A_EVENT,
    GPIO20_A_EVENT,
    GPIO89_A_EVENT,
    GPIO90_A_EVENT,
    GPIO91_A_EVENT,
    GPIO92_A_EVENT,
    GPIO93_A_EVENT,
    GPIO18_B_EVENT,	//70
    GPIO19_B_EVENT,
    GPIO20_B_EVENT,
    GPIO89_B_EVENT,
    GPIO90_B_EVENT,
    GPIO91_B_EVENT,
    GPIO92_B_EVENT,
    GPIO93_B_EVENT,
    GPIO29_B_EVENT,
    GPIO32_B_EVENT,
    GPIO33_B_EVENT,	//80
    GPIO43_B_EVENT,
    GPIO44_B_EVENT,
    GPIO45_B_EVENT,
    GPIO46_B_EVENT,
    GPIO47_B_EVENT,
    GPIO48_B_EVENT,
    GPIO71_B_EVENT,
    GPIO72_B_EVENT,
    GPIO73_B_EVENT,
    GPIO74_B_EVENT,	//90 or 0x5A
    GPIO95_B_EVENT,
    GPIO96_B_EVENT,
    GPIO99_B_EVENT,
    GPIO100_B_EVENT,
    GPIO111_B_EVENT,
    COMMON_TIMER_0_EVENT,
    COMMON_TIMER_1_EVENT,
    COMMON_TIMER_2_EVENT,
    COMMON_TIMER_3_EVENT,
    COMMON_TIMER_4_EVENT,	//100 0r 0x64
    COMMON_INT_TO_AC_EVENT,
    TZCFG_INT_TO_AC_EVENT,
    DMA_REQUEST_EVENT,
    MODEM1_EVENT,
    MODEM2_EVENT,
    MODEM_UART_EVENT,
    BRIDGE_TO_AC_EVENT,
    BRIDGE_TO_MODEM_EVENT,
    VREQ_NONZERO_PI_MODEM_EVENT, //109 or 6D
    DUMMY_EVENT, /*missing register hence added dummy event*/ //110
    USBOTG_EVENT,
    GPIO_EXP_IRQ_EVENT,
    DBR_IRQ_EVENT,
    ACI_EVENT,
    PHY_RESUME_EVENT,
    MODEMBUS_ACTIVE_EVENT,
    SOFTWARE_0_EVENT,	//117 or 0x75
    SOFTWARE_1_EVENT,	//118 or 0x76
    SOFTWARE_2_EVENT,	//119 or 0x77
    PWR_MGR_NUM_EVENTS

};


int rhea_pwr_mgr_init(void);
#endif /*__RHEA_PWR_MNGR_H__*/
