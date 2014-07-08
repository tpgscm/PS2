// master add function 2014/07/08 13:12
int foo2( char *pDest, char *pSrc )       // mp add 2014/07/08 13:22
{
}
int foo( int *ioValue )               // issue%1 2014/07/08 13:31
{
  ioValue = 123;                      // issue%1 2014/07/08 13:31
}
int main( void )
{
  int no = 0;                         // issue%1 2014/07/08 13:31

  foo( &no );                         // issue%1 2014/07/08 13:31
  foo2();                                 // mp add 2014/07/08 13:22
  return 0;
}
