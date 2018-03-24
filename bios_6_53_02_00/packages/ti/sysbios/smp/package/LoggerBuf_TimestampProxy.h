/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-D20
 */

/*
 * ======== GENERATED SECTIONS ========
 *
 *     PROLOGUE
 *     INCLUDES
 *
 *     MODULE-WIDE CONFIGS
 *     VIRTUAL FUNCTIONS
 *     FUNCTION DECLARATIONS
 *     CONVERTORS
 *     SYSTEM FUNCTIONS
 *
 *     EPILOGUE
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sysbios_smp_LoggerBuf_TimestampProxy__include
#define ti_sysbios_smp_LoggerBuf_TimestampProxy__include

#ifndef __nested__
#define __nested__
#define ti_sysbios_smp_LoggerBuf_TimestampProxy__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sysbios_smp_LoggerBuf_TimestampProxy___VERS 200


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <ti/sysbios/smp/package/package.defs.h>

#include <xdc/runtime/ITimestampClient.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsEnabled ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsEnabled__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsEnabled__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsEnabled__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsEnabled*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsEnabled__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsEnabled (ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsEnabled__C)
#endif

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsIncluded ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsIncluded__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsIncluded__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsIncluded__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsIncluded*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsIncluded__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsIncluded (ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsIncluded__C)
#endif

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsMask;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsMask ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsMask__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsMask__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsMask__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsMask*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsMask__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsMask (ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__diagsMask__C)
#endif

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gateObj;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gateObj ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gateObj__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gateObj__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gateObj__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gateObj*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gateObj__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gateObj (ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gateObj__C)
#endif

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gatePrms;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gatePrms ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gatePrms__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gatePrms__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gatePrms__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gatePrms*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gatePrms__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gatePrms (ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__gatePrms__C)
#endif

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__id;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__id ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__id__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__id__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__id__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__id*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__id__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__id (ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__id__C)
#endif

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerDefined;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerDefined ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerDefined__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerDefined__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerDefined__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerDefined*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerDefined__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerDefined (ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerDefined__C)
#endif

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerObj;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerObj ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerObj__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerObj__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerObj__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerObj*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerObj__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerObj (ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerObj__C)
#endif

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn0 ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn0__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn0__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn0__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn0*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn0__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn0 (ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn0__C)
#endif

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn1 ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn1__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn1__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn1__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn1*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn1__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn1 (ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn1__C)
#endif

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn2 ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn2__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn2__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn2__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn2*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn2__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn2 (ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn2__C)
#endif

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn4 ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn4__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn4__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn4__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn4*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn4__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn4 (ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn4__C)
#endif

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn8 ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn8__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn8__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn8__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn8*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn8__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn8 (ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__loggerFxn8__C)
#endif

/* Object__count */
typedef xdc_Int CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__count;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__count ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__count__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__count__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__count__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__count*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__count__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__count (ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__count__C)
#endif

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__heap;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__heap ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__heap__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__heap__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__heap__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__heap*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__heap__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__heap (ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__heap__C)
#endif

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__sizeof;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__sizeof ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__sizeof__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__sizeof__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__sizeof__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__sizeof*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__sizeof__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__sizeof (ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__sizeof__C)
#endif

/* Object__table */
typedef xdc_Ptr CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__table;
__extern __FAR__ const CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__table ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__table__C;
#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__table__CR
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__table__C (*((CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__table*)(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__table__C_offset)))
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__table (ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__table__C)
#endif


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sysbios_smp_LoggerBuf_TimestampProxy_Fxns__ {
    const xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Bits32 (*get32)(void);
    xdc_Void (*get64)(xdc_runtime_Types_Timestamp64* result);
    xdc_Void (*getFreq)(xdc_runtime_Types_FreqHz* freq);
    xdc_runtime_Types_SysFxns2 __sfxns;
};
#ifndef ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__FXNS__CR

/* Module__FXNS__C */
__extern const ti_sysbios_smp_LoggerBuf_TimestampProxy_Fxns__ ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__FXNS__C;
#else
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__FXNS__C (*(xdcRomConstPtr + ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__FXNS__C_offset))
#endif


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_startup( state ) (-1)

/* Handle__label__S */
xdc__CODESECT(ti_sysbios_smp_LoggerBuf_TimestampProxy_Handle__label__S, "ti_sysbios_smp_LoggerBuf_TimestampProxy_Handle__label__S")
__extern xdc_runtime_Types_Label *ti_sysbios_smp_LoggerBuf_TimestampProxy_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label *lab );

/* Module__startupDone__S */
xdc__CODESECT(ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__startupDone__S, "ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__startupDone__S")
__extern xdc_Bool ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__startupDone__S( void );

/* Object__get__S */
xdc__CODESECT(ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__get__S, "ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__get__S")
__extern xdc_Ptr ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__get__S( xdc_Ptr oarr, xdc_Int i );

/* Object__first__S */
xdc__CODESECT(ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__first__S, "ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__first__S")
__extern xdc_Ptr ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__first__S( void );

/* Object__next__S */
xdc__CODESECT(ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__next__S, "ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__next__S")
__extern xdc_Ptr ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__next__S( xdc_Ptr obj );

/* Params__init__S */
xdc__CODESECT(ti_sysbios_smp_LoggerBuf_TimestampProxy_Params__init__S, "ti_sysbios_smp_LoggerBuf_TimestampProxy_Params__init__S")
__extern xdc_Void ti_sysbios_smp_LoggerBuf_TimestampProxy_Params__init__S( xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz );

/* Proxy__abstract__S */
xdc__CODESECT(ti_sysbios_smp_LoggerBuf_TimestampProxy_Proxy__abstract__S, "ti_sysbios_smp_LoggerBuf_TimestampProxy_Proxy__abstract__S")
__extern xdc_Bool ti_sysbios_smp_LoggerBuf_TimestampProxy_Proxy__abstract__S( void );

/* Proxy__delegate__S */
xdc__CODESECT(ti_sysbios_smp_LoggerBuf_TimestampProxy_Proxy__delegate__S, "ti_sysbios_smp_LoggerBuf_TimestampProxy_Proxy__delegate__S")
__extern xdc_CPtr ti_sysbios_smp_LoggerBuf_TimestampProxy_Proxy__delegate__S( void );

/* get32__E */
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_get32 ti_sysbios_smp_LoggerBuf_TimestampProxy_get32__E
xdc__CODESECT(ti_sysbios_smp_LoggerBuf_TimestampProxy_get32__E, "ti_sysbios_smp_LoggerBuf_TimestampProxy_get32")
__extern xdc_Bits32 ti_sysbios_smp_LoggerBuf_TimestampProxy_get32__E( void );

/* get64__E */
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_get64 ti_sysbios_smp_LoggerBuf_TimestampProxy_get64__E
xdc__CODESECT(ti_sysbios_smp_LoggerBuf_TimestampProxy_get64__E, "ti_sysbios_smp_LoggerBuf_TimestampProxy_get64")
__extern xdc_Void ti_sysbios_smp_LoggerBuf_TimestampProxy_get64__E( xdc_runtime_Types_Timestamp64 *result );

/* getFreq__E */
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_getFreq ti_sysbios_smp_LoggerBuf_TimestampProxy_getFreq__E
xdc__CODESECT(ti_sysbios_smp_LoggerBuf_TimestampProxy_getFreq__E, "ti_sysbios_smp_LoggerBuf_TimestampProxy_getFreq")
__extern xdc_Void ti_sysbios_smp_LoggerBuf_TimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq );


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline xdc_runtime_ITimestampClient_Module ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_upCast(void);
static inline xdc_runtime_ITimestampClient_Module ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_upCast(void)
{
    return (xdc_runtime_ITimestampClient_Module)ti_sysbios_smp_LoggerBuf_TimestampProxy_Proxy__delegate__S();
}

/* Module_to_xdc_runtime_ITimestampClient */
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_to_xdc_runtime_ITimestampClient ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_upCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_startupDone() ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__startupDone__S()

/* Object_heap */
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Object_heap() ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__heap__C

/* Module_heap */
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_heap() ti_sysbios_smp_LoggerBuf_TimestampProxy_Object__heap__C

/* Module_id */
static inline CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__id ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_id(void);
static inline CT__ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__id ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_id( void ) 
{
    return ti_sysbios_smp_LoggerBuf_TimestampProxy_Module__id__C;
}

/* Proxy_abstract */
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Proxy_abstract() ti_sysbios_smp_LoggerBuf_TimestampProxy_Proxy__abstract__S()

/* Proxy_delegate */
#define ti_sysbios_smp_LoggerBuf_TimestampProxy_Proxy_delegate() ((xdc_runtime_ITimestampClient_Module)ti_sysbios_smp_LoggerBuf_TimestampProxy_Proxy__delegate__S())


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sysbios_smp_LoggerBuf_TimestampProxy__top__
#undef __nested__
#endif

#endif /* ti_sysbios_smp_LoggerBuf_TimestampProxy__include */


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sysbios_smp_LoggerBuf_TimestampProxy__nolocalnames)

#ifndef ti_sysbios_smp_LoggerBuf_TimestampProxy__localnames__done
#define ti_sysbios_smp_LoggerBuf_TimestampProxy__localnames__done

/* module prefix */
#define LoggerBuf_TimestampProxy_get32 ti_sysbios_smp_LoggerBuf_TimestampProxy_get32
#define LoggerBuf_TimestampProxy_get64 ti_sysbios_smp_LoggerBuf_TimestampProxy_get64
#define LoggerBuf_TimestampProxy_getFreq ti_sysbios_smp_LoggerBuf_TimestampProxy_getFreq
#define LoggerBuf_TimestampProxy_Module_name ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_name
#define LoggerBuf_TimestampProxy_Module_id ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_id
#define LoggerBuf_TimestampProxy_Module_startup ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_startup
#define LoggerBuf_TimestampProxy_Module_startupDone ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_startupDone
#define LoggerBuf_TimestampProxy_Module_hasMask ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_hasMask
#define LoggerBuf_TimestampProxy_Module_getMask ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_getMask
#define LoggerBuf_TimestampProxy_Module_setMask ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_setMask
#define LoggerBuf_TimestampProxy_Object_heap ti_sysbios_smp_LoggerBuf_TimestampProxy_Object_heap
#define LoggerBuf_TimestampProxy_Module_heap ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_heap
#define LoggerBuf_TimestampProxy_Proxy_abstract ti_sysbios_smp_LoggerBuf_TimestampProxy_Proxy_abstract
#define LoggerBuf_TimestampProxy_Proxy_delegate ti_sysbios_smp_LoggerBuf_TimestampProxy_Proxy_delegate
#define LoggerBuf_TimestampProxy_Module_upCast ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_upCast
#define LoggerBuf_TimestampProxy_Module_to_xdc_runtime_ITimestampClient ti_sysbios_smp_LoggerBuf_TimestampProxy_Module_to_xdc_runtime_ITimestampClient

#endif /* ti_sysbios_smp_LoggerBuf_TimestampProxy__localnames__done */
#endif