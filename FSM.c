#include "stdio.h"

/**
 * state enum typedef
 */
typedef enum{
	RESET,
	NORMAL,
	LIMPHOME
} state;

/**
 * Events enum typedef
 */
typedef enum{
	INIT_EVENT,
	NORMAL_TIMEOUT_EVENT,
	RESET_TXRX_COUNT_SM_LIMIT_EVENT,
	LH_NMMSGRCV_AND_LHMSGTX_EVENT ,
	RESET_TXRX_COUNT_MORE_LIMIT_EVENT,
	NORMAL_RX_COUNT_MORE_LIMIT_EVENT,
	LH_BUS_ERROR_EVENT

} event;

/**
 * Functions Definations
 */
void _D_Init(void);
void _NM_Reset(void);
void _Init_Normal(void);
void _TERROR(void);
void _Init_Reset(void);
void _LH_TError_Reset(void);
void _Init_LimpHome(void);
/**
 * Main Function
 */
void main(void) {


}
