
// We shouldn't be logging time or doing
// performance measurements of our software
// in production code, so we ensure
// time measurements and production code doesn't go together
//
#ifdef PRODUCTION_BUILD
  #ifdef LOGGING_TIME_IN_AND_OUT
  #error "No logging time measurements in production code"
  #endif
#endif

#ifdef PRODUCTION_BUILD
int myadd(int x, int y)
{
  return x + y;
}
#endif

//functions for in out times
// measure how much time is spent,
// some bogus implementation for now in start_timer and stop_timer
#ifdef LOGGING_TIME_IN_AND_OUT
void start_timer()
{
}
void stop_timer()
{
}
#endif

int main()
{
  #ifdef LOGGING_TIME_IN_AND_OUT
  start_timer();
  #endif

  int r = myadd(3, 4);

  #ifdef LOGGING_TIME_IN_AND_OUT
  stop_timer();
  #endif
}
