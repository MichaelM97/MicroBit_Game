#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2018 // UTC year
#define YOTTA_BUILD_MONTH 2 // UTC month 1-12
#define YOTTA_BUILD_DAY 8 // UTC day 1-31
#define YOTTA_BUILD_HOUR 13 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 2 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 30 // UTC second 0-61
#define YOTTA_BUILD_UUID 09df4091-2679-4829-a728-d951ac56f415 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID 9052adb0725c9a8faa139abd65e79a9bac130a1c // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION 9052adb // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
