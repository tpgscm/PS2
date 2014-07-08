// master add function 2014/07/08 13:12
int foo( int *ioValue )               // issue%1 2014/07/08 13:31
{
  printf( "Hello\n" );        			// be_master add 2014/07/08 13:17
  ioValue = 123;                      // issue%1 2014/07/08 13:31
}
int main( void )
{
  int no = 0;                         // issue%1 2014/07/08 13:31

  foo( &no );                         // issue%1 2014/07/08 13:31
  return 0;
}
