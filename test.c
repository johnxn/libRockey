#include "utils.h"

void set_buffer(char * buffer) {
    char buffer_copy[] = { 0x31, 0x4D, 0xF9, 0x0A,
    0xAD,0x4B, 0x85, 0xE1,
    0xB4, 0xA3, 0x84, 0x54,
    0xEB, 0x7E, 0x5B, 0xF3,
    0xB9, 0x7F, 0xF0, 0x2C,
    0x7D, 0xDD, 0x0D, 0xA2,
    0x8E, 0x1B, 0x8F, 0xD6,
    0x08, 0xE9, 0x6A, 0x7E,
    0xC3, 0x37, 0x88, 0x69,
    0x8D, 0x74, 0xAD, 0x66,
    0xE4, 0x85, 0xE3, 0x77,
    0x6D, 0x76, 0x0B, 0xD5,
    0xC4, 0x64, 0xA0, 0x05,
    0x79, 0x31, 0x4D, 0x83,
    0x55, 0x6F, 0xD9, 0xD1,
    0x1A, 0x26, 0x86, 0xD6
    };
    memcpy(buffer, buffer_copy, sizeof(buffer_copy));
}

void set_buffer_2(char *buffer) {
    char buffer_copy[] = {
    0x1F, 0x8B, 0x50, 0x63,
        0xB4, 0x1D, 0xB7, 0x10,
        0xDB, 0x32, 0x32, 0xF9,
        0x69, 0xB2, 0x28, 0x57,
        0x61, 0x3D, 0x39, 0x3B,
        0x91, 0x01, 0xC3, 0xD8,
        0xEE, 0x38, 0x3E, 0x03,
        0xED, 0x78, 0x3A, 0x5C,
        0x25, 0x87, 0xAD, 0x0D,
        0x71, 0x90, 0x76, 0x17,
        0x0F, 0x4D, 0x7C, 0x16,
        0x3E, 0xEF, 0xE3, 0x6A,
        0xA2, 0x76, 0x28, 0x17,
        0xE4, 0x79, 0x3F, 0xFB,
        0x54, 0x5E, 0x2B, 0x9C,
        0xBF, 0x21, 0x02, 0x14,
        0xA1, 0x62, 0x0C, 0x62,
        0x8C, 0x12, 0x65, 0x31,
        0x18, 0xBF, 0x63, 0x99,
        0x5E, 0x17, 0x74, 0xED,
        0xCA, 0xA2, 0xA9, 0xBE,
        0x34, 0x66, 0x07, 0x01,
        0x9F, 0xF6, 0x0F, 0xB6,
        0xFA, 0x73, 0x99, 0xBB,
        0x38, 0x39, 0x1D, 0x27,
        0x0B, 0xF4, 0x9A, 0x1C,
        0x95, 0xDD, 0x80, 0x93,
        0x99, 0x3A, 0xCF, 0xC9,
        0x02, 0xF9, 0xD3, 0x69,
        0x24, 0xA7, 0x17, 0x72,
        0x2D, 0xF5, 0xE2, 0xD9,
        0xEE, 0x51, 0x24, 0xDD,
        0x00, 0x00, 0x00, 0x00,
    };
    memcpy(buffer, buffer_copy, sizeof(buffer_copy));

}

void set_buffer_3(char *buffer1, char *buffer2) {
    char buffer_copy1[] = {
        0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
            0xC0, 0x86, 0xF8, 0x6F,
            0xD8, 0x82, 0xD5, 0x8D,
            0xF8, 0x39, 0xEC, 0x3F,
            0xD4, 0x69, 0x8D, 0xA9,
            0x2E, 0xFC, 0x5B, 0x9A,
            0x07, 0x31, 0xEA, 0x9C,
            0x60, 0xF8, 0xDB, 0x9D,
            0xAC, 0xF1, 0xAC, 0x6F,
            0xBD, 0x1E, 0x35, 0x2C,
            0xF0, 0xC9, 0xA3, 0x4D,
            0xBA, 0x57, 0x52, 0x88,
            0xF3, 0xC7, 0xCF, 0xA5,
            0x7E, 0x43, 0x09, 0x7F,
            0x9C, 0x77, 0xCE, 0xD7,
            0x9F, 0x88, 0xB7, 0xA0,
            0xBB, 0x77, 0x1C, 0xFC,
            0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00,
    };
    memcpy(buffer1, buffer_copy1, sizeof(buffer_copy1));
    char buffer_copy2[] = {
        0x1F, 0x8B, 0x50, 0x63,
            0xB4, 0x1D, 0xB7, 0x10,
            0xDB, 0x32, 0x32, 0xF9,
            0x69, 0xB2, 0x28, 0x57,
            0x61, 0x3D, 0x39, 0x3B,
            0x91, 0x01, 0xC3, 0xD8,
            0xEE, 0x38, 0x3E, 0x03,
            0xED, 0x78, 0x3A, 0x5C,
            0x25, 0x87, 0xAD, 0x0D,
            0x71, 0x90, 0x76, 0x17,
            0x0F, 0x4D, 0x7C, 0x16,
            0x3E, 0xEF, 0xE3, 0x6A,
            0xA2, 0x76, 0x28, 0x17,
            0xE4, 0x79, 0x3F, 0xFB,
            0x54, 0x5E, 0x2B, 0x9C,
            0xBF, 0x21, 0x02, 0x14,
            0xA1, 0x62, 0x0C, 0x62,
            0x8C, 0x12, 0x65, 0x31,
            0x18, 0xBF, 0x63, 0x99,
            0x5E, 0x17, 0x74, 0xED,
            0xCA, 0xA2, 0xA9, 0xBE,
            0x34, 0x66, 0x07, 0x01,
            0x9F, 0xF6, 0x0F, 0xB6,
            0xFA, 0x73, 0x99, 0xBB,
            0x38, 0x39, 0x1D, 0x27,
            0x0B, 0xF4, 0x9A, 0x1C,
            0x95, 0xDD, 0x80, 0x93,
            0x99, 0x3A, 0xCF, 0xC9,
            0x02, 0xF9, 0xD3, 0x69,
            0x24, 0xA7, 0x17, 0x72,
            0x2D, 0xF5, 0xE2, 0xD9,
            0xEE, 0x51, 0x24, 0xDD,
            0x00, 0x00, 0x00, 0x00,
    };
    memcpy(buffer2, buffer_copy2, sizeof(buffer_copy2));
}

int test_sub_402FD0() {
    char a1[0x84];
    char a2[0x80];
    memset(a1, 0, 0x84);
    memset(a2, 0, 0x80);
    //memset(a2+4, 0xff, 0x40);
    set_buffer(a2+4);
    //printf_buffer(a2, 0x80);
        
    sub_402FD0((void *)a1, 0x84, (void * )a2, 0x80);
    printf_buffer(a1, 0x84);
    return 0;
}

int test_sub_403680() {
    char a1[0x84];
    memset(a1, 0, sizeof(a1));
    set_buffer_2(a1);
    printf_buffer(a1, sizeof(a1));
    int res = sub_403680(a1, 33);
    printf("result is %d\n", res);
    return 0;
}

int test_sub_403640() {
    char a1[0x84];
    char a2[0x84];
    memset(a1, 0, sizeof(a1));
    memset(a2, 0, sizeof(a2));
    set_buffer_3(a1, a2);
    signed int res = sub_403640(a1, a2, 0x20);
    printf("result is %d\n", res);
    return 0;
}

int test_sub_403930() {
    char a1[0x8];
    memset(a1, 0, sizeof(a1));
    int a2 = 0x675e071b;
    int a3 = 0;
    unsigned int res = sub_403930(a1, a2, a3);
    printf("a1 is:\n");
    printf_buffer(a1, sizeof(a1));
    printf("result is %d\n", res);
    return 0;
}

void setup_buffer(void *buffer) {
   char buf[] = {
       0x00,0x00,0x00,0x00,
           0x72,0x11,0x31,0x9D,
           0x66,0x46,0x1A,0x2C,
           0x47,0xC2,0xEE,0xD8,
           0xCA,0x2F,0x1E,0xC2,
           0xE7,0x52,0x9E,0x18,
           0xD1,0xAD,0x3F,0x02,
           0x65,0xD5,0x1D,0x7C,
           0x09,0xCE,0xB8,0x0C,
           0xCC,0xC5,0x2D,0xBC,
           0x48,0x89,0x94,0x6F,
           0x7C,0x72,0x16,0x52,
           0xB7,0x40,0xAB,0x16,
           0x4D,0x8B,0x92,0x31,
           0x18,0xCF,0x00,0xC7,
           0x0D,0x38,0x89,0x11,
           0xEA,0xAA,0xD9,0x3F,
           0x00,0x00,0x00,0x00,
           0x00,0x00,0x00,0x00,
           0x00,0x00,0x00,0x00,
           0x00,0x00,0x00,0x00,
           0x00,0x00,0x00,0x00,
           0x00,0x00,0x00,0x00,
           0x00,0x00,0x00,0x00,
           0x00,0x00,0x00,0x00,
           0x00,0x00,0x00,0x00,
           0x00,0x00,0x00,0x00,
           0x00,0x00,0x00,0x00,
           0x00,0x00,0x00,0x00,
           0x00,0x00,0x00,0x00,
           0x00,0x00,0x00,0x00,
           0x00,0x00,0x00,0x00,
   };
   memcpy(buffer, buf, sizeof(buf));
}

char global_string0[] = {
    0x00, 0x04, 0x00, 0x00
};

char global_string1[] = {
    0xEE, 0x51, 0x24, 0xDD, 0x2D, 0xF5, 0xE2, 0xD9,
    0x24, 0xA7, 0x17, 0x72, 0x02, 0xF9, 0xD3, 0x69,
    0x99, 0x3A, 0xCF, 0xC9, 0x95, 0xDD, 0x80, 0x93,
    0x0B, 0xF4, 0x9A, 0x1C, 0x38, 0x39, 0x1D, 0x27,
    0xFA, 0x73, 0x99, 0xBB, 0x9F, 0xF6, 0x0F, 0xB6,
    0x34, 0x66, 0x07, 0x01, 0xCA, 0xA2, 0xA9, 0xBE,
    0x5E, 0x17, 0x74, 0xED, 0x18, 0xBF, 0x63, 0x99,
    0x8C, 0x12, 0x65, 0x31, 0xA1, 0x62, 0x0C, 0x62,
    0xBF, 0x21, 0x02, 0x14, 0x54, 0x5E, 0x2B, 0x9C,
    0xE4, 0x79, 0x3F, 0xFB, 0xA2, 0x76, 0x28, 0x17,
    0x3E, 0xEF, 0xE3, 0x6A, 0x0F, 0x4D, 0x7C, 0x16,
    0x71, 0x90, 0x76, 0x17, 0x25, 0x87, 0xAD, 0x0D,
    0xED, 0x78, 0x3A, 0x5C, 0xEE, 0x38, 0x3E, 0x03,
    0x91, 0x01, 0xC3, 0xD8, 0x61, 0x3D, 0x39, 0x3B,
    0x69, 0xB2, 0x28, 0x57, 0xDB, 0x32, 0x32, 0xF9,
    0xB4, 0x1D, 0xB7, 0x10, 0x1F, 0x8B, 0x50, 0x63
};

char global_string2[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01
};

int test_sub_4037F0() {
    char a1[0x80];
    //char a2[0x3] = {0x38, 0xff, 0x12};
    int a2;
    char g_a5[0x80 * 2 + 0x04];
    setup_buffer(a1);
    memcpy(g_a5, global_string0, sizeof(global_string0));
    memcpy(g_a5 + sizeof(global_string0), global_string1, sizeof(global_string1));
    memcpy(g_a5 + + sizeof(global_string0) + sizeof(global_string1), global_string2, sizeof(global_string2));
    //printf_buffer(g_a5, sizeof(g_a5));
    //
    printf("before, a1 is: \n");
    printf_buffer(a1, sizeof(a1));
    int res = sub_4037F0(a1, &a2, a1, 128, g_a5);
    printf("a2 is 0x%x\n", a2);
    printf("after, a1 is: \n");
    printf_buffer(a1, sizeof(a1));
    return 0;
}


int main() {
    //test_sub_403680();
    //test_sub_402FD0();
    //test_sub_403640();
    //test_sub_403930();
    test_sub_4037F0();
    return 0;
}

