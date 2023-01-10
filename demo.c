#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sm3.h>


int main()
{
	SM3_CTX sm3_ctx;
	uint8_t buf[4096]="whoareyou";
    ssize_t len = sizeof (buf);
	uint8_t dgst[32];
	int i;

	sm3_init(&sm3_ctx);


    sm3_update(&sm3_ctx, buf, len);


	sm3_finish(&sm3_ctx, dgst);

	for (i = 0; i < sizeof(dgst); i++) {
        printf("%d",dgst[i]);
	}
	printf("\n");
	return 0;
}
