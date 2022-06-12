#include <am.h>

void __am_timer_init() {
}

#define DEVICE_BASE 0xa0000000
#define RTC_ADDR (DEVICE_BASE + 0x00000048)

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = 0;
  uint64_t us = *(volatile uint32_t *)(RTC_ADDR + 4);
  us = ( us << 32 ) | *(volatile uint32_t *)(RTC_ADDR);
  uptime->us = us;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
