#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2018 // UTC year
#define YOTTA_BUILD_MONTH 2 // UTC month 1-12
#define YOTTA_BUILD_DAY 5 // UTC day 1-31
#define YOTTA_BUILD_HOUR 23 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 57 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 51 // UTC second 0-61
#define YOTTA_BUILD_UUID 1d5a3163-482d-4e72-8fb2-802105308178 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID c15344dbb3394a2dc088cb3ac88b0415485dfa44 // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION c15344d // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
