#include <stdio.h>

int main(void)
{
    int i,n,j;
    while ( 1 )
    {
         n = 0;
        printf( "Enter the height of the pyramid (0-exit): " );


        scanf( "%d", &n );

        if ( !n ) break;

        printf( "\n" );

        for (i = 0; i < n; i++ )
        {
            printf( "%*c", n - i, '*' );
            for (j = 0; j < i; j++ )
                printf( " %c", '*' );
            printf( "\n" );
        }
    }

    return 0;
}
