/** @file le_atServer_local.h
 *
 * Implementation of AT commands server API.
 *
 * Copyright (C) Sierra Wireless Inc. Use of this work is subject to license.
 */

#ifndef LEGATO_LE_ATSERVER_LOCAL_INCLUDE_GUARD
#define LEGATO_LE_ATSERVER_LOCAL_INCLUDE_GUARD

//--------------------------------------------------------------------------------------------------
/**
 * Device pool size
 */
//--------------------------------------------------------------------------------------------------
#define DEVICE_POOL_SIZE    2

//--------------------------------------------------------------------------------------------------
/**
 * Max length of thread name
 */
//--------------------------------------------------------------------------------------------------
#define THREAD_NAME_MAX_LENGTH  30

//--------------------------------------------------------------------------------------------------
/**
 * AT commands pool size
 */
//--------------------------------------------------------------------------------------------------
#define CMD_POOL_SIZE       100

//--------------------------------------------------------------------------------------------------
/**
 * Is character a letter ?
 */
//--------------------------------------------------------------------------------------------------
#define IS_CHAR(X)              ((X>='A')&&(X<='Z'))||((X>='a')&&(X<='z')) /*[A-Z]||[a-z]*/

//--------------------------------------------------------------------------------------------------
/**
 * This function gets the bridge reference on a AT command in progress.
 *
 * @return
 *      - Reference to the requested device.
 *      - NULL if the device is not available.
 *
 * @note
 *  This function internal, not exposed as API
 */
//--------------------------------------------------------------------------------------------------
le_result_t le_atServer_GetBridgeRef
(
    le_atServer_CmdRef_t     commandRef,
    le_atServer_BridgeRef_t* bridgeRefPtr
);

#endif //LEGATO_LE_ATSERVER_LOCAL_INCLUDE_GUARD
