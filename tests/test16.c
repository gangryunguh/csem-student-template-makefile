/*
 * test16 - check to see if while works
 */
main()
{
   int i, j, k;

   i = 1;
   while (i < 5) {
      k = 1;
      while (k < 5) {
         printf("i is %d\n", i);
         k += 1;
      }
      i += 1;
   }
}
