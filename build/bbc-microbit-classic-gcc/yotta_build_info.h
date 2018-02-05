#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2018 // UTC year
#define YOTTA_BUILD_MONTH 2 // UTC month 1-12
#define YOTTA_BUILD_DAY 5 // UTC day 1-31
#define YOTTA_BUILD_HOUR 17 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 42 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 56 // UTC second 0-61
#define YOTTA_BUILD_UUID 21744f07-fed8-48f5-8bf6-bface2a1c859 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID 977da814d84393e2dd6b1c6c611c7a9e13e85eb2 // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 1 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION 977da81 // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
