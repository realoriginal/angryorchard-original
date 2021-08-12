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

#define H_LIB_ADVAPI32				0x64bb3129
#define H_LIB_KERNEL32				0x6ddb9555
#define H_LIB_NTDLL				0x1edab0ed

#define H_API_INITIALIZESECURITYDESCRIPTOR	0x31e175ce
#define H_API_RTLANSISTRINGTOUNICODESTRING 	0x6c606cba
#define H_API_NTCREATESYMBOLICLINKOBJECT	0xfbada4a2
#define H_API_RTLANSISTRINGTOUNICODESIZE	0xd7aa575e
#define H_API_SETSECURITYDESCRIPTORDACL		0x5c048f5c
#define H_API_NTCREATEDIRECTORYOBJECTEX		0x185c3c24
#define H_API_NTQUERYSYSTEMINFORMATION		0x7bc23928
#define H_API_SETKERNELOBJECTSECURITY		0xf543d2a1
#define H_API_NTQUERYINFORMATIONTOKEN		0x0f371fe4
#define H_API_CREATEPROCESSWITHTOKENW		0xf3e5480c
#define H_API_CONVERTSTRINGSIDTOSIDA		0x0d370be1
#define H_API_CREATEFILETRANSACTEDW		0x0e864b59
#define H_API_NTWAITFORSINGLEOBJECT		0xe8ac0c3c
#define H_API_RTLINITUNICODESTRING		0xef52b589
#define H_API_NTCREATETRANSACTION		0x06e54201
#define H_API_NTREADVIRTUALMEMORY		0xa3288103
#define H_API_NTOPENPROCESSTOKEN		0x350dca99
#define H_API_RTLINITANSISTRING			0xa0c8436d
#define H_API_ISTOKENRESTRICTED			0x8e8025fb
#define H_API_NTGETNEXTPROCESS			0x0963c3a5
#define H_API_DUPLICATETOKENEX			0x10ad057e
#define H_API_DEFINEDOSDEVICEW			0x682dda9d
#define H_API_REGCREATEKEYEXW			0x0c988e74
#define H_API_NTCREATESECTION			0xb80f7b50
#define H_API_REGSETVALUEEXW			0x2cea05e0
#define H_API_SETTHREADTOKEN			0xc9f4966a
#define H_API_LOADLIBRARYEXA			0x9592af38
#define H_API_GETPROCADDRESS			0xdecfc1bf
#define H_API_RTLGETVERSION			0x0dde5cdd
#define H_API_FREELIBRARY			0x4ad9b11c
#define H_API_RTLEQUALSID			0x5f7a694f
#define H_API_LOCALALLOC			0x72073b5b
#define H_API_VSNPRINTF				0xa59022ce
#define H_API_WRITEFILE				0xf1d207d0
#define H_API_LOCALFREE				0x32030e92
#define H_API_NTCLOSE				0x40d6e69d
#define H_API_SLEEP				0x0e07cd7e

#define H_STR_CIINITIALIZE			0x249f1683
#define H_STR_CI				0xa96c087b
