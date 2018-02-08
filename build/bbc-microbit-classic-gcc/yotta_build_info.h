#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2018 // UTC year
#define YOTTA_BUILD_MONTH 2 // UTC month 1-12
#define YOTTA_BUILD_DAY 8 // UTC day 1-31
#define YOTTA_BUILD_HOUR 2 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 17 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 25 // UTC second 0-61
#define YOTTA_BUILD_UUID ab4c2d8a-62e1-47d2-b502-eaf6c3dac5f7 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID 926a8e01284867e3370c5bfaf0cb57eba829ef43 // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION 926a8e0 // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
