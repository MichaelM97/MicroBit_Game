#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2018 // UTC year
#define YOTTA_BUILD_MONTH 2 // UTC month 1-12
#define YOTTA_BUILD_DAY 8 // UTC day 1-31
#define YOTTA_BUILD_HOUR 12 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 25 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 35 // UTC second 0-61
#define YOTTA_BUILD_UUID d9b3c1e6-437c-451b-9317-3ee6f881c392 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID c757c968de4da677923a6495ed9dee7c4aa9512b // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION c757c96 // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
