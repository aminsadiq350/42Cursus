#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <ctype.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(void)
{
	printf("Testing ft_isalpha\n");
	printf("Test 1 - alpha\n");
	ft_isalpha('c') == isalpha('c') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 2 - numeric\n");
	ft_isalpha('1') == isalpha('1') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 3 - special char\n");
	ft_isalpha('&') == isalpha('&') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	
	printf("\nTesting ft_isdigit\n");
	printf("Test 1 - alpha\n");
	ft_isdigit('c') == isdigit('c') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 2 - numeric\n");
	ft_isdigit('1') == isdigit('1') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 3 - special char\n");
	ft_isdigit('&') == isdigit('&') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");

	printf("\nTesting ft_isalnum\n");
	printf("Test 1 - alpha\n");
	ft_isalnum('c') == isalnum('c') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 2 - numeric\n");
	ft_isalnum('1') == isalnum('1') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 3 - special char\n");
	ft_isalnum('&') == isalnum('&') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");

	printf("\nTesting ft_isascii\n");
	printf("Test 1 - alpha\n");
	ft_isascii('c') == isascii('c') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 2 - numeric\n");
	ft_isascii('1') == isascii('1') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 3 - special char\n");
	ft_isascii(0x7f) == isascii(0x7f) ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");

	printf("\nTesting ft_isprint\n");
	printf("Test 1 - alpha\n");
	ft_isprint('c') == isprint('c') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 2 - numeric\n");
	ft_isprint('1') == isprint('1') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 3 - non-print charecter\n");
	ft_isprint(0x7f) == isprint(0x7f) ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 4 - special char\n");
	ft_isprint('&') == isprint('&') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") : printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");

	printf("\nTesting ft_strlen\n");
	printf("Test 1 - normal string\n");
	ft_strlen("checking strlen") == strlen("checking strlen") ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");	
	printf("Test 2 - string with non print charecters\n");
	ft_strlen("n\non\0print\0") == strlen("n\non\0print\0") ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 3 - alpha numeric\n");
	ft_strlen("1a") == strlen("1a") ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");

	printf("\nTesting ft_memset\n");
	printf("Test 1 - IaMaTeStStrINg\n");
	char test[] = "IaMaTeStStrINg";
	strcmp(ft_memset(test, 0x26, 2), memset(test, 0x26, 2)) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 2 - 0x260x27\n");
	char test2[] = "0x260x27";
	strcmp(ft_memset(test2, 0x27, 8), memset(test2, 0x27, 8)) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");

	printf("\nTesting ft_bzero\n");
	char ft_bzero_test_string1[] = "test", bzero_test_string1[] = "test";
	printf("\nTesting ft_bzero with size 2\n");
	ft_bzero(ft_bzero_test_string1, 2);
	bzero(bzero_test_string1, 2);
	strlen(ft_bzero_test_string1) == strlen(bzero_test_string1) ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	
	char ft_bzero_test_string2[] = "test", bzero_test_string2[] = "test";
	printf("Testing ft_bzero with size 0\n");
	ft_bzero(ft_bzero_test_string2, 0);
	bzero(bzero_test_string2, (0));
	strlen(ft_bzero_test_string2) == strlen(bzero_test_string2) ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");

	printf("\nTesting ft_memcpy\n");
	printf("Elements : 0, 1, 2, 3, 4, 5, 6, 7, 8, 9");
	char memcpy_array[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	printf("\nTest 1 - %s\n","ft_memcpy((void *)&memcpy_array[5], (void *)&memcpy_array[3], 5)");
	strcmp(ft_memcpy((void *)&memcpy_array[5], (void *)&memcpy_array[3], 5), memcpy((void *)&memcpy_array[5], (void *)&memcpy_array[3], 5)) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	char memcpy_array2[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	printf("Test 2 - %s\n","ft_memcpy((void *)&memcpy_array2[4], (void *)&memcpy_array2[3], 6)");
	strcmp(ft_memcpy((void *)&memcpy_array2[4], (void *)&memcpy_array2[3], 6), memcpy((void *)&memcpy_array2[4], (void *)&memcpy_array2[3], 6)) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	char memcpy_array3[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	printf("Test 3 - %s\n","ft_memcpy((void *)&memcpy_array3[2], (void *)&memcpy_array3[1], 8)");
	strcmp(ft_memcpy((void *)&memcpy_array3[2], (void *)&memcpy_array3[1], 8), memcpy((void *)&memcpy_array3[2], (void *)&memcpy_array3[1], 8)) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");

	printf("\nTesting ft_memmove\n");
	printf("Elements : 0, 1, 2, 3, 4, 5, 6, 7, 8, 9");
	char memmove_array[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	printf("\nTest 1 - %s\n","ft_memmove((void *)&memmove_array[5], (void *)&memmove_array[3], 5)");
	strcmp(ft_memmove((void *)&memmove_array[5], (void *)&memmove_array[3], 5), memmove((void *)&memmove_array[5], (void *)&memmove_array[3], 5)) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	char memmove_array2[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	printf("Test 2 - %s\n","ft_memmove((void *)&memmove_array2[4], (void *)&memmove_array2[3], 6)");
	strcmp(ft_memmove((void *)&memmove_array2[4], (void *)&memmove_array2[3], 6), memmove((void *)&memmove_array2[4], (void *)&memmove_array2[3], 6)) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	char memmove_array3[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	printf("Test 3 - %s\n","ft_memmove((void *)&memmove_array3[2], (void *)&memmove_array3[1], 8)");
	strcmp(ft_memmove((void *)&memmove_array3[2], (void *)&memmove_array3[1], 8), memmove((void *)&memmove_array3[2], (void *)&memmove_array3[1], 8)) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");

	printf("\nTesting ft_strchr\n");
	printf("Test 1 - Find c in this string\n");
	char testchr[] = "Find c in this string";
	strcmp(ft_strchr(testchr, 'c'), strchr(testchr, 'c')) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 2 - return null here\n");
	char testchr2[] = "return null here";
	ft_strchr(testchr2, 'd') == strchr(testchr2, 'd') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 3 - c at beginning\n");
	char testchr3[] = "c at beginning";
	strcmp(ft_strchr(testchr3, 'c'), strchr(testchr3, 'c')) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 4 - at the end c\n");
	char testchr4[] = "at the end c";
	strcmp(ft_strchr(testchr4, 'c'), strchr(testchr4, 'c')) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");

	printf("\nTesting ft_strrchr\n");
	printf("Test 1 - Find c in this string from back\n");
	char testchrr[] = " Find c in this string from back";
	strcmp(ft_strrchr(testchrr, 'c'), strrchr(testchrr, 'c')) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 2 - return null here\n");
	char testchrr2[] = "return null here";
	ft_strrchr(testchrr2, 'd') == strrchr(testchrr2, 'd') ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 3 - at end c\n");
	char testchrr3[] = "at end c";
	strcmp(ft_strrchr(testchrr3, 'c'), strrchr(testchrr3, 'c')) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 4 - c at start\n");
	char testchrr4[] = "c at start";
	strcmp(ft_strrchr(testchrr4, 'c'), strrchr(testchrr4, 'c')) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	

	printf("\nTesting ft_memchr\n");
	printf("Test 1 - Find c in this string\n");
	char testmemchr[] = " Find c in this string";
	strcmp(ft_memchr(testmemchr, 'c', strlen(testmemchr)), memchr(testmemchr, 'c', strlen(testmemchr))) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 2 - return null here\n");
	char testmemchr2[] = "return null here";
	ft_memchr(testmemchr2, 'd', strlen(testmemchr2)) == memchr(testmemchr2, 'd', strlen(testmemchr2)) ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 3 - at end c\n");
	char testmemchr3[] = "at end c";
	strcmp(ft_memchr(testmemchr3, 'c', strlen(testmemchr3)), memchr(testmemchr3, 'c', strlen(testmemchr3))) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	printf("Test 4 - c at start\n");
	char testmemchr4[] = "c at start";
	strcmp(ft_memchr(testmemchr4, 'c', strlen(testmemchr4)), memchr(testmemchr4, 'c', strlen(testmemchr4))) == 0 ? printf(ANSI_COLOR_GREEN "Passed." ANSI_COLOR_RESET "\n") :printf(ANSI_COLOR_RED "Failed!" ANSI_COLOR_RESET "\n");
	
	return 0;
}