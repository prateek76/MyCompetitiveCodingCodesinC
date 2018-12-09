#include <stdio.h>

int main()
{
short int si;
long int li;
unsigned short int usi;
unsigned long int uli;

si = -10;
li = si;                                  /* sign extension - li should be -10 */
printf("si = %8hd li = %8ld\n",si,li);

usi = 40000U;                             /* usigned decimal constant */
uli = usi;                                /* zero extension - uli should be 40000 */
printf("usi = %8hu uli = %8lu\n",usi,uli);

uli = 0xabcdef12;                         /* sets most bits ! */
usi = uli;                                /* will truncate-discard more sigficant bits */
printf("usi = %8hx uli = %8lx\n",usi,uli);

si = usi;                                 /* preserves bit pattern */
printf("si = %8hd usi = %8hu\n",si,usi);

si = -10;
usi = si;                                 /* preserves bit pattern */
printf("si = %8hd usi = %8hu\n",si,usi);

return 0;
}
