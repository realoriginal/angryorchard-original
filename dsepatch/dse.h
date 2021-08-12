/**
 *
 * Disables driver signing enforcement from
 * usermode, and loads a requested driver
 * into memory.
 *
 * Do to the lack of a driver and usage of
 * a userland bug, this project remains 
 * closed source.
 *
**/

#pragma once

/**
 *
 * Purpose:
 *
 * Attempts to use the elevated thread to
 * disable driver signing enforcement.
 *
**/

D_SEC( B ) VOID WINAPI DsePatch( _In_ PBEACON_API BeaconApi, _In_ PAPI Api );
