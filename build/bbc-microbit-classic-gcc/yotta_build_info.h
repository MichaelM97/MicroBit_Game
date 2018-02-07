#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2018 // UTC year
#define YOTTA_BUILD_MONTH 2 // UTC month 1-12
#define YOTTA_BUILD_DAY 7 // UTC day 1-31
#define YOTTA_BUILD_HOUR 22 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 51 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 11 // UTC second 0-61
#define YOTTA_BUILD_UUID 63ab0373-17c8-4695-aa2c-e1d39eae8f86 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID c2584a6b822742dbeb1babf273aa89ed36f2ccf0 // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION c2584a6 // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
