/** DEVELOPED ON APPLE M3 WITH 16GB DDR5 DRAM AND MACOS SEQUOIA 15.1 */

/**
 * @file   num7.h
 * @author Giovanni Cipriani <giocip7@gmail.com>
 * @date   2025
 * @brief  num7 ISO C++14 Standard 64-BIT LIBRARY, ARBITRARY-PRECISION GENERAL PURPOSE ARITHMETIC-LOGIC DECIMAL CLASS FOR APPLE SILICON ARCHITECTURE
 *
 * @see https://github.com/giocip/MACOS_num7
 */

#ifndef num7_h
#define num7_h

#define _CRT_SECURE_NO_WARNINGS //FOR WINDOWS O.S. 
#include <iostream>
#include <string>            
#include <cstring>            //FOR LINUX O.S. #include <cstring> without #include <string> 
#include <math.h>            //FOR LINUX ONLY
using namespace std;

///////////////////////////////////////////////// num7 NAMESPACE START
namespace num7 {          // STARTING CURLY BRACKET num7 namespace
    //COMMON DATA TYPE
    class NUM;
    extern int Error;  //ERROR HANDLING
    
    //typedef  int32_t i32;
    typedef signed int i32;
    
    //typedef uint32_t I32;
    typedef unsigned int I32;

    //typedef  int64_t i64;
    typedef  signed long int i64; 
    
    //typedef uint64_t I64;
    typedef unsigned long int I64;

    struct Division {
        char* quotient;
        char* remainder;
    };

    ////////////////////// OPERATOR  FUNCTIONS  ///////////////////////////
    ostream& operator<<(ostream&, NUM);
    istream& operator>>(istream&, NUM&);
    NUM& operator+(i64, NUM& b);
    NUM& operator+(const char* a, NUM& b);
    NUM& operator+(string a, NUM& b);
    NUM& operator-(i64, NUM&);
    NUM& operator-(const char*, NUM&);
    NUM& operator-(string, NUM&);
    NUM& operator*(i64, NUM&);
    NUM& operator*(const char*, NUM&);
    NUM& operator*(string, NUM&);
    NUM& operator/(i64, NUM&);
    NUM& operator/(const char*, NUM&);
    NUM& operator/(string, NUM&);
    NUM& operator%(i64, NUM&);
    NUM& operator%(const char*, NUM&);
    NUM& operator%(string, NUM&);
    NUM& operator^(const char*, NUM&);
    NUM& operator^(string, NUM&);
    NUM& operator^(i64, NUM&);
    int operator>(i64, NUM&);
    int operator>(const char*, NUM&);
    int operator>(string, NUM&);
    int operator>=(i64, NUM&);
    int operator>=(const char*, NUM&);
    int operator>=(string, NUM&);
    int operator<(i64, NUM&);
    int operator<(const char*, NUM&);
    int operator<(string, NUM&);
    int operator<=(i64, NUM&);
    int operator<=(const char*, NUM&);
    int operator<=(string, NUM&);
    int operator==(i64, NUM&);
    int operator==(const char*, NUM&);
    int operator==(string, NUM&);
    int operator!=(i64, NUM&);
    int operator!=(const char*, NUM&);
    int operator!=(string, NUM&);
    NUM& operator++(NUM&, int);
    NUM& operator--(NUM&, int);
    int operator!(NUM&);

    ////////////////////// FUNCTIONS PROTOTYPES ///////////////////////////
    char* addis(const char*, const char*, int check = 1);
    NUM& addf(NUM*, NUM*);
    NUM& addf_signed(NUM*, NUM*);
    char* addfs(const char*, const char*, int check = 1);
    char* bits(const char*, int bin = 1);
    NUM& divf(NUM*, NUM*, i64 dp = 30);
    NUM& divf_signed(NUM*, NUM*, i64 dp = 32);
    char* divfs(const char*, const char*, i64 d = 30, int check = 1);
    Division* divis(const char*, const char*, int check = 1);
    int eq_abs(NUM*, NUM*);
    int eq(NUM*, NUM*);
    char* exp2num(NUM&);
    char* exp2str(const char*);
    char* expEQ(const char*, const char*);
    char* format(NUM, i64 d = 2, char SEP1000 = ',', int SIGN = 0);
    char* format0(NUM&, i64 d = 2);
    char* format_int(NUM&);
    int ge(NUM*, NUM*);
    int gt_abs(NUM*, NUM*);
    int gt(NUM*, NUM*);
    const char* I32tobin(I32);
    I32 I32int(const char*, int base = 10, int check = 1);
    i32 i32int(const char*, int base = 10, int check = 1);
    const char* i32str(i32, int base = 10);
    const char* I32str(I32, int base = 10);
    const char* i64str(i64);
    const char* I64str(I64, int base = 10);
    I64 I64int(const char*, int base = 10);
    //i64 i64int(const char*, I64* idx = 0, int base = 10);
    i64 i64int(const char*, char** idx = 0, int base = 10);
    char* I64HEX(I64);
    NUM& I64NUM(I64);
    NUM& i64NUM(i64);
    I64* I128int(const char*);
    I64* I128intx(const char*);
    char* I128str_hex(const char*);
    char* I128str_dec(const char*);
    char* I128str(I64*);
    I64* I128add(I64[], I64[]);
    NUM& I128addis(const char*, const char*);
    char* invfs(const char*, i64 d = 30, int check = 1);
    int is_zero(NUM*);
    int is_positive(NUM*);
    int is_negative(NUM*);
    int is_even(NUM*);
    int is_odd(NUM*);
    int is_int(NUM*);
    int is_float(NUM*);
    int is_prime(NUM*);
    const char* is_strfmt_exp(const char*);
    const char* is_strfmt_int(const char*);
    const char* is_strfmt_float(const char*);
    int is_strfmt_num(const char*);
    char* lstrip(char*, const char*);
    char* lstripc(char*, const char);
    char* lstripf0(char*);
    char* lower(const char*);
    char* upper(const char*);
    int le(NUM*, NUM*);
    int lt(NUM*, NUM*);
    NUM& mulf(NUM*, NUM*);
    NUM& mulf_signed(NUM* op1, NUM* op2);
    int ne(NUM*, NUM*);
    int not_(NUM*);
    NUM& POW(NUM&, i64);
    NUM& POW(NUM&, i64, i64);
    NUM& POW(NUM&, NUM&, i64);
    NUM& POW_MOD(NUM&, i64, i64);
    NUM& pwrf_signed(NUM*, i64);
    char* rstripf0(char*);
    char* rstrip(char*, const char*);
    char* rstripc(char*, const char);
    bool  run_once();
    char* strip(char*, const char*);
    char* mulis_school(const char*, const char*, int check = 1);
    char* mulis(const char*, const char*, int check = 1);
    char* mulfs(const char*, const char*, int check = 1);
    char* num2exp(const char*);
    int OFI31(const char*);
    int OFI32(const char*);
    int OFI64(const char*);
    int OFI128(const char*);
    int raise(const char*, const char*, int video = 1); //DEFAULT: int video = 1
    int raise_exit(const char*, const char*);
    char* rm_c(char*, const char);
    char** split(const char*, const char*);
    char* str_rev(char*);
    int strfloat_cmp(const char*, const char*);
    int strint_cmp(const char*, const char*);
    char* strip0(char*);
    char* stripf0(char*);
    char* stripi0(char*);
    char* strpads(const char*, i64);
    char* strpads0(i64);
    char* subis(const char*, const char*, int check = 1);
    NUM& subf_signed(NUM*, NUM*);
    NUM& subf(NUM*, NUM*);
    char* subfs(const char*, const char*, int check = 1);
    char* trunks(const char*, i64);
    int error();
    int error_set();
    int error_clear();
    NUM& add(NUM&, NUM&);
    NUM& add(const char*, const char*);
    NUM& add(string, string);
    NUM& add(i64, i64);
    NUM& sub(NUM&, NUM&);
    NUM& sub(const char*, const char*);
    NUM& sub(string, string);
    NUM& sub(i64, i64);
    NUM& mul(NUM&, NUM&);
    NUM& mul(const char*, const char*);
    NUM& mul(string, string);
    NUM& mul(i64, i64);
    NUM& div(NUM&, NUM&, i64 pd = 40);                //DEFAULT pd = 40
    NUM& div(const char*, const char*, i64 pd = 40); //DEFAULT pd = 40
    NUM& div(string, string, i64 pd = 40);          //DEFAULT pd = 40
    NUM& div(i64, i64, i64 pd = 40);               //DEFAULT pd = 40
    NUM& mod(NUM&, NUM&);
    NUM& mod(const char*, const char*);
    NUM& mod(string, string);
    NUM& mod(i64, i64);
    NUM& pow(NUM&, NUM&);
    NUM& pow(const char*, const char*);
    NUM& pow(string, string);
    NUM& pow(i64, i64);
    NUM& xy(NUM&, NUM&);
    NUM& xy(const char*, const char*);
    NUM& xy(string, string);
    NUM& xy(i64, i64);
    NUM& _10y(NUM&);
    NUM& _10y(const char*);
    NUM& _10y(string);
    NUM& _10y(i64);
    NUM& _2y(NUM&);
    NUM& _2y(const char*);
    NUM& _2y(string);
    NUM& _2y(i64);
    NUM& _ey(NUM&);
    NUM& _ey(const char*);
    NUM& _ey(string);
    NUM& _ey(i64);
    NUM& sqr(NUM&, i64 b = 9);
    NUM& sqr(const char*, i64 b = 9);
    NUM& sqr(string, i64 b = 9);
    NUM& sqr(i64, i64 b = 9);
    NUM& root_i(NUM&, i64 b = 3);
    NUM& root_i(const char*, i64 b = 3);
    NUM& root_i(string, i64 b = 3);
    NUM& root_i(i64, i64 b = 3);
    NUM& x2(NUM&);
    NUM& x2(const char*);
    NUM& x2(string);
    NUM& x2(i64);
    NUM& x3(NUM&);
    NUM& x3(const char*);
    NUM& x3(string);
    NUM& x3(i64);
    NUM& shift(NUM&, NUM&);
    NUM& shift(NUM&, const char*);
    NUM& shift(NUM&, string e);
    NUM& shift(NUM&, i64);
    NUM& xe10(NUM&, NUM&);
    NUM& xe10(NUM&, const char*);
    NUM& xe10(NUM&, string e);
    NUM& xe10(NUM&, i64);
    NUM& _2x(NUM&);
    NUM& _2x(const char*);
    NUM& _2x(string);
    NUM& _2x(i64);
    NUM& _3x(NUM&);
    NUM& _3x(const char*);
    NUM& _3x(string);
    NUM& _3x(i64);
    NUM& inv(NUM&, i64 decs = 32);
    NUM& inv(const char*, i64 decs = 32);
    NUM& inv(string, i64 decs = 32);
    NUM& inv(i64, i64 decs = 32);
    NUM& Abs(NUM);
    NUM& Abs(const char*);
    NUM& Abs(string);
    NUM& Abs(i64);
    NUM& pi();
    NUM& e();
    NUM& spinoff(NUM&, NUM&);
    NUM& spinoff(const char*, const char* all = "1.0");  //DEFAULT all = "1.0"
    NUM& spinoff(string, string all = "1.0");           //DEFAULT all = "1.0"
    NUM& spinoff(i64, i64 all = 1);                    //DEFAULT all = 1
    NUM& spinon(NUM&, NUM&);
    NUM& spinon(const char*, const char* all = "1.0");  //DEFAULT all = "1.0"
    NUM& spinon(string, string all = "1.0");           //DEFAULT all = "1.0"
    NUM& spinon(i64, i64 all = 1);                    //DEFAULT all = 1
    NUM& perf(NUM v_init, NUM v_end, i64 time = 1);
    NUM& fact(i64);
    i64 fact_digits(i64);
    char* FACT(i64 N);
    char* sprint_fields(NUM&);
    int print_fields(NUM&);
    int print_exp(NUM, const char* postfix = "");
    int print(NUM&, const char* postfix = "", int SIGN = 0);
    int print(const char*, NUM&, const char* postfix = "", int SIGN = 0);
    int print(const char*, const char* inter = "", const char* postfix = "");
    int print(string prefix, const char* inter = "", const char* postfix = "");
    int print(int, const char* postfix = "");
    int print(I32 a, const char* postfix = "");
    int print(i64 a, const char* postfix = "");
    int print(I64 a, const char* postfix = "");
    NUM& round(NUM&, i64 d = 2);         //DEFAULT d = 2
    NUM& round(const char*, i64 d = 2); //DEFAULT d = 2
    NUM& round(string, i64 d = 2);     //DEFAULT d = 2
    NUM& round(i64, i64 d = -1);      //DEFAULT d = -1
    NUM& round_bank(NUM&, i64 d = 2);         //DEFAULT d = 2
    NUM& round_bank(const char*, i64 d = 2); //DEFAULT d = 2
    NUM& round_bank(string, i64 d = 2);     //DEFAULT d = 2
    NUM& round_bank(i64, i64 d = -1);      //DEFAULT d = -1
    NUM& round_floor(NUM&, i64 decs = 0);         //DEFAULT decs = 0
    NUM& round_floor(const char*, i64 decs = 0); //DEFAULT decs = 0
    NUM& round_floor(string, i64 decs = 0);     //DEFAULT decs = 0
    NUM& round_floor(i64, i64 decs = 0);       //DEFAULT decs = 0
    NUM& round_ceil(NUM&, i64 decs = 0);         //DEFAULT decs = 0
    NUM& round_ceil(const char*, i64 decs = 0); //DEFAULT decs = 0
    NUM& round_ceil(string, i64 decs = 0);     //DEFAULT decs = 0
    NUM& round_ceil(i64, i64 decs = 0);       //DEFAULT decs = 0
    NUM& inc(NUM&, NUM&);
    NUM& inc(NUM&, const char*);
    NUM& inc(NUM&, string);
    NUM& inc(NUM&, i64 B = 1);
    NUM& dec(NUM&, NUM&);
    NUM& dec(NUM&, const char*);
    NUM& dec(NUM&, string);
    NUM& dec(NUM&, i64);
    NUM& clear(NUM&);
    NUM& sum(NUM*, I64);
    NUM& mean(NUM*, I64);
    NUM& min(NUM*, I64);
    NUM& max(NUM*, I64);
    NUM* minmax(NUM*, I64);
    NUM& sumG(NUM&);
    char* hex2bin(const char*);
    NUM& hex2dec(const char*);
    NUM& bin2dec(const char*);
    char* bin2hex(const char*);
    char* dec2bin(const char*, int bin = 1);
    char* dec2hex(const char*, int bin = 0);
    NUM* address(NUM&);
    NUM* id(NUM&);
    NUM& pct(NUM&, NUM&);
    NUM& pct(const char*, const char* all = "1.0"); //DEFAULT all = "1.0"
    NUM& pct(string, string all = "1.0");          //DEFAULT all = "1.0"
    NUM& pct(i64, i64 all = 1);                   //DEFAULT all = 1
    NUM& all(NUM&, NUM&);
    NUM& all(const char*, const char*);
    NUM& all(string, string);
    NUM& all(i64, i64);
    NUM& rate(NUM&, NUM&);
    NUM& rate(const char*, const char* all = "1.0"); //DEFAULT all = "1.0"
    NUM& rate(string, string all = "1.0");          //DEFAULT all = "1.0"
    NUM& rate(i64, i64 all = 1);                   //DEFAULT all = 1
    NUM& pth(NUM&, NUM&);
    NUM& pth(const char*, const char* all = "1.0"); //DEFAULT all = "1.0"
    NUM& pth(string, string all = "1.0");          //DEFAULT all = "1.0"
    NUM& pth(i64, i64 all = 1);                   //DEFAULT all = 1
    NUM& all_th(NUM&, NUM&);
    NUM& all_th(const char*, const char*);
    NUM& all_th(string, string);
    NUM& all_th(i64, i64);
    NUM& rate_th(NUM&, NUM&);
    NUM& rate_th(const char*, const char* all = "1.0"); //DEFAULT all = "1.0"
    NUM& rate_th(string, string all = "1.0");          //DEFAULT all = "1.0"
    NUM& rate_th(i64, i64 all = 1);                   //DEFAULT all = 1
    NUM& _10x(NUM&);
    NUM& _10x(const char*);
    NUM& _10x(string);
    NUM& _10x(i64);
    NUM& _100x(NUM&);
    NUM& _100x(const char*);
    NUM& _100x(string);
    NUM& _100x(i64);
    NUM& _1000x(NUM&);
    NUM& _1000x(const char*);
    NUM& _1000x(string);
    NUM& _1000x(i64);
    NUM& _10div(NUM&);
    NUM& _10div(const char*);
    NUM& _10div(string);
    NUM& _10div(i64);
    NUM& _100div(NUM&);
    NUM& _100div(const char*);
    NUM& _100div(string);
    NUM& _100div(i64);
    NUM& _1000div(NUM&);
    NUM& _1000div(const char*);
    NUM& _1000div(string);
    NUM& _1000div(i64);
    NUM& copy(NUM&, NUM&);
    int test_num7();
    NUM& into_sci(NUM&);
    NUM& into_exp(NUM&);
    char* strsub(const char*, i64 first = 0, i64 last = 0);
    int mul_check(NUM, NUM, NUM);
    int add_check(NUM, NUM, NUM);
    int sub_check(NUM, NUM, NUM);
    int div_check(NUM, NUM, NUM);
    char* pwri(I64, I64);
    char* from_double(double);
    ////////////////////// END FUNCTION PROTO   ///////////////////////////

    class NUM {
    public:
        char* C;       /**< UNSIGNED FLOATING-POINT NUMBER COEFFICIENT STRING PART */
        i64   E;      /**< SIGNED INTEGER NUMBER EXPONENT PART */
        i64   S;     /**< SIGN=0 FOR POSITIVE OR SIGN=1 FOR NEGATIVE */
        char* CE;   /**< C._eE EXPONENT */
        i64 len_I; /**< NUMBER COEFFICIENT STRING INTEGER PART LENGTH */
        i64 len_F;/**< NUMBER COEFFICIENT STRING FLOATING-POINT PART LENGTH */

        NUM(long int);        /////// -2 ///////
        NUM(long long int);  /////// -1 ///////
        NUM(double);        ///////  0 ///////
        NUM(int n = 0);    ///////  1 ///////
        NUM(string);      ///////  2 ///////
        NUM(const char*);///////  3 ///////
        NUM(const NUM&);//COPY CONSTRUCTOR METHOD
        ~NUM();        //DESTRUCTOR METHOD

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
       //////////////////////////////////////////////// NUM IN-LINE OPERATOR OVERLOADING /////////////////////////////////////////////////
      ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      /// NUM IN-LINE /// ASSIGNMENT ALLOWS RIGHT OPERAND TO BE NUM, CODE: NUM a, b("3.14"); a = b; print("a = ", a, "  b = "); print(b, "\n"); //a = 3.14  b = 3.14
        NUM& operator=(NUM&);

        /// NUM IN-LINE /// ASSIGNMENT ALLOWS RIGHT OPERAND TO BE int, CODE: NUM a; a = -1234567890; print("a = ", a, "\n"); //a = -1234567890.0
        NUM& operator=(int b);

        /// NUM IN-LINE /// ASSIGNMENT ALLOWS RIGHT OPERAND TO BE i64, CODE: NUM a; a = -9223372036854775807 - 1; print("a = ", a, "\n"); //a = -9223372036854775808.0
        NUM& operator=(i64 b);

        /// NUM IN-LINE /// ASSIGNMENT ALLOWS RIGHT OPERAND TO BE STRING, CODE: NUM a; a = "-1234567890.0"; print("a = ", a, "\n"); //a = -1234567890.0
        NUM& operator=(const char* b);

        /// NUM IN-LINE /// ASSIGNMENT ALLOWS RIGHT OPERAND TO BE string, CODE: NUM a; a = string("-1234567890.0"); print("a = ", a, "\n"); //a = -1234567890.0
        NUM& operator=(string b);

        /// NUM IN-LINE /// BOOLEAN EVALUATION, CODE: NUM a = 0; print(a ? "true" : "false", "\n"); //false
        explicit operator bool() const;

        /// NUM IN-LINE /// UNARY OPERATOR PLUS (+), CODE: NUM a; a = 3; print("a = ", +a, "\n"); //a = 3.0
        NUM& operator+();

        /// NUM IN-LINE /// UNARY PRE-INCREMENT (++), CODE: NUM a; a = 3; print("a = ", ++a, "\n"); //a = 4.0
        NUM& operator++();

        /// NUM IN-LINE /// UNARY OPERATOR MINUS (-), CODE: NUM a; a = 3; print("a = ", -a, "\n"); //a = -3.0
        NUM& operator-();

        /// NUM IN-LINE /// UNARY PRE-DECREMENT (--), CODE: NUM a; a = 3; print("a = ", --a, "\n"); //a = 2.0
        NUM& operator--();

        /// NUM IN-LINE /// EQUALITY (==), CODE: NUM a(2), b(add("1.9", "0.1")); print(a == b, "\n"); //1 (true)
        int operator==(NUM& b);

        /// NUM IN-LINE /// EQUALITY (==), CODE: NUM a(1); a++; print(a == "2.0", "\n"); //1 (true)
        int operator==(const char* b);

        /// NUM IN-LINE /// EQUALITY (==), CODE: NUM a(1); a++; print(a == string("2.0"), "\n"); //1 (true)
        int operator==(string b);

        /// NUM IN-LINE /// EQUALITY (==), CODE: NUM a(1); a++; print(a == 2, "\n"); //1 (true)
        int operator==(i64 b);

        /// NUM IN-LINE /// NOT EQUALITY, CODE: NUM a(-2), b(add("-1.9", "-0.1")); print(a != b, "\n"); //0 (false)
        int operator!=(NUM& b);

        /// NUM IN-LINE /// NOT EQUALITY, CODE: NUM a("2.1"), b(add("2.0", "0.1")); print(a != b, "\n"); //0 (false)
        int operator!=(const char* b);

        /// NUM IN-LINE /// NOT EQUALITY, CODE: NUM a(2); string b("2.1"); print(a != b, "\n"); //1 (true)
        int operator!=(string b);

        /// NUM IN-LINE /// NOT EQUALITY, CODE: NUM a(2); i64 b(3); print(a != b, "\n"); //1 (true)
        int operator!=(i64 b);

        /// NUM IN-LINE /// GREATER THAN, CODE: NUM a(-2), b(add("-1.9", "-0.2")); print(a > b, "\n"); //1 (true)
        int operator>(NUM& b);

        /// NUM IN-LINE /// GREATER THAN, CODE: NUM a(-2); print(a > "-2.1", "\n"); //1 (true)
        int operator>(const char* b);

        /// NUM IN-LINE /// GREATER THAN, CODE: NUM a(-2); print(a > string("-2.1"), "\n"); //1 (true)
        int operator>(string b);

        /// NUM IN-LINE /// GREATER THAN, CODE: NUM a(-2); print(a > -3, "\n"); //1 (true)
        int operator>(i64 b);

        /// NUM IN-LINE /// LESS OR EQUAL THAN, CODE: NUM a(-2), b(sub("-1.9", "-0.2")); print(a <= b, "\n"); //1 (true)
        int operator<=(NUM& b);

        /// NUM IN-LINE /// LESS OR EQUAL THAN, CODE: NUM a(-2); print(a <= "2.0", "\n"); //1 (true)
        int operator<=(const char* b);

        /// NUM IN-LINE /// LESS OR EQUAL THAN, CODE: NUM a(-2); print(a <= string("-2.1"), "\n"); //0 (false)
        int operator<=(string b);

        /// NUM IN-LINE /// LESS OR EQUAL THAN, CODE: NUM a(-2); print(a <= -3, "\n"); //0 (false)
        int operator<=(i64 b);

        /// NUM IN-LINE /// LESS THAN, CODE: NUM a("-2.1"), b(sub("-1.9", "-0.2")); print(a < b, "\n"); //1 (true)
        int operator<(NUM& b);

        /// NUM IN-LINE /// LESS THAN, CODE: NUM a("-2.1"); print(a < "2.09", "\n"); //1 (true)
        int operator<(const char* b);

        /// NUM IN-LINE /// LESS THAN, CODE: NUM a("-2.1"); print(a < string("-2.9"), "\n"); //0 (false)
        int operator<(string b);

        /// NUM IN-LINE /// LESS THAN, CODE: NUM a("-2.1"); print(a < -3, "\n"); //0 (false)
        int operator<(i64 b);

        /// NUM IN-LINE /// GREATER OR EQUAL THAN, CODE: NUM a(-2), b(sub("-1.9", "-0.2")); print(a >= b, "\n"); //0 (false)
        int operator>=(NUM& b);

        /// NUM IN-LINE /// GREATER OR EQUAL THAN, CODE: NUM a(-2); print(a >= "3.0", "\n"); //0 (false)
        int operator>=(const char* b);

        /// NUM IN-LINE /// GREATER OR EQUAL THAN, CODE: NUM a("-2.0001"); print(a >= string("-2.0009"), "\n"); //1 (true)
        int operator>=(string b);

        /// NUM IN-LINE /// GREATER OR EQUAL THAN, CODE: NUM a("-2.9999999999999999999"); print(a >= -3, "\n"); //1 (true)
        int operator>=(i64 b);

        /// NUM IN-LINE /// ADDITION, CODE: NUM a("3.0"), b("3.14"), sum = a + b; print(sum, "\n"); //6.14
        NUM& operator+(NUM& b);

        /// NUM IN-LINE /// ADDITION, CODE: NUM a("3.0"); const char* b("3.14"); NUM sum = a + b; print(sum, "\n"); //6.14
        NUM& operator+(const char* b);

        /// NUM IN-LINE /// ADDITION, CODE: NUM a("3.0"); string b("3.14"); NUM sum = a + b; print(sum, "\n"); //6.14
        NUM& operator+(string b);

        /// NUM IN-LINE /// ADDITION, CODE: NUM a("3.14"); i64 b(3); NUM sum = a + b; print(sum, "\n"); //6.14
        NUM& operator+(i64 b);

        /// NUM IN-LINE /// ADDITION AND ASSIGNMENT, CODE: NUM a("3.14"), b("3.06"); a += b; print(a, "\n"); //6.2
        NUM& operator+=(NUM& b);

        /// NUM IN-LINE /// ADDITION AND ASSIGNMENT, CODE: NUM a("3.14"); a += "3.06"; print(a, "\n"); //6.2
        NUM& operator+=(const char* b);

        /// NUM IN-LINE /// ADDITION AND ASSIGNMENT, CODE: NUM a("3.14"); a += string("3.06"); print(a, "\n"); //6.2
        NUM& operator+=(string b);

        /// NUM IN-LINE /// ADDITION AND ASSIGNMENT, CODE: NUM a("3.14"); a += 3; print(a, "\n"); //6.14
        NUM& operator+=(i64 b);

        /// NUM IN-LINE /// SUBTRACTION, CODE: NUM a("3.0"), b("3.14"), dif = a - b; print(dif, "\n"); //-0.14
        NUM& operator-(NUM& b);

        /// NUM IN-LINE /// SUBTRACTION, CODE: NUM a("3.0"), dif = a - "3.14"; print(dif, "\n"); //-0.14
        NUM& operator-(const char* b);

        /// NUM IN-LINE /// SUBTRACTION, CODE: NUM a("3.0"), dif = a - string("3.14"); print(dif, "\n"); //-0.14
        NUM& operator-(string b);

        /// NUM IN-LINE /// SUBTRACTION, CODE: NUM a("3.0"), dif = a - 3; print(dif, "\n"); //0.0
        NUM& operator-(i64 b);

        /// NUM IN-LINE /// SUBTRACTION AND ASSIGNMENT, CODE: NUM a("3.14"), b("3.06"); a -= b; print(a, "\n"); //0.08
        NUM& operator-=(NUM& b);

        /// NUM IN-LINE /// SUBTRACTION AND ASSIGNMENT, CODE: NUM a("3.14"; a -= "3.06"; print(a, "\n"); //0.08
        NUM& operator-=(const char* b);

        /// NUM IN-LINE /// SUBTRACTION AND ASSIGNMENT, CODE: NUM a("3.14"); a -= string("3.06"); print(a, "\n"); //0.08
        NUM& operator-=(string b);

        /// NUM IN-LINE /// SUBTRACTION AND ASSIGNMENT, CODE: NUM a("3.14"); a -= 3; print(a, "\n"); //0.14
        NUM& operator-=(i64 b);

        /// NUM IN-LINE /// MULTIPLICATION, CODE: NUM a("3.14"), b("2.71"), pro = a * b; print(pro, "\n"); //8.5094
        NUM& operator*(NUM& b);

        /// NUM IN-LINE /// MULTIPLICATION, CODE: NUM a("3.14"), pro = a * "2.71"; print(pro, "\n"); //8.5094
        NUM& operator*(const char* b);

        /// NUM IN-LINE /// MULTIPLICATION, CODE: NUM a("3.14"), pro = a * string("2.71"); print(pro, "\n"); //8.5094
        NUM& operator*(string b);

        /// NUM IN-LINE /// MULTIPLICATION, CODE: NUM a("-3.14"), pro = a * -4; print(pro, "\n"); //12.56
        NUM& operator*(i64 b);

        /// NUM IN-LINE /// MULTIPLICATION AND ASSIGNMENT, CODE: NUM a("-3.14"), b("-2.71"); a *= b; print(a, "\n"); //8.5094 
        NUM& operator*=(NUM& b);

        /// NUM IN-LINE /// MULTIPLICATION AND ASSIGNMENT, CODE: NUM a("-3.14"); a *= "2.71"; print(a, "\n"); //-8.5094 
        NUM& operator*=(const char* b);

        /// NUM IN-LINE /// MULTIPLICATION AND ASSIGNMENT, CODE: NUM a("+3.14"); a *= string("-2.71"); print(a, "\n"); //-8.5094
        NUM& operator*=(string b);

        /// NUM IN-LINE /// MULTIPLICATION AND ASSIGNMENT, CODE: NUM a("+3.14"); a *= -2; print(a, "\n"); //-6.28
        NUM& operator*=(i64 b);

        /// NUM IN-LINE /// DIVISION, CODE: NUM a("3.14"), b("2.71"), quo = a / b; print(quo, "\n"); //1.15867158671586715867158671586715
        NUM& operator/(NUM& b);

        /// NUM IN-LINE /// DIVISION, CODE: NUM a("3.14"), quo = a / "2.71" ; print(quo.round(), "\n"); //1.16
        NUM& operator/(const char* b);

        /// NUM IN-LINE /// DIVISION, CODE: NUM a("-3.14"), quo = a / string("2.71") ; print(quo.round(), "\n"); //-1.16
        NUM& operator/(string b);

        /// NUM IN-LINE /// DIVISION, CODE: NUM a("-3.14"), quo = a / -2; print(quo.round(), "\n"); //1.57
        NUM& operator/(i64 b);

        /// NUM IN-LINE /// DIVISION AND ASSIGNMENT, CODE: NUM a("3.14"), b("-8.0"); a /= b; print(a, "\n"); //-0.3925
        NUM& operator/=(NUM& b);

        /// NUM IN-LINE /// DIVISION AND ASSIGNMENT, CODE: NUM a("-3.14"); a /= "-8.0"; print(a, "\n"); //0.3925
        NUM& operator/=(const char* b);

        /// NUM IN-LINE /// DIVISION AND ASSIGNMENT, CODE: NUM a("-3.14"); a /= string("8.0"); print(a, "\n"); //-0.3925
        NUM& operator/=(string b);

        /// NUM IN-LINE /// DIVISION AND ASSIGNMENT, CODE: NUM a("+3.14"); a /= +8; print(a, "\n"); //0.3925
        NUM& operator/=(i64 b);

        /// NUM IN-LINE /// MODULUS, CODE: NUM a("3.14"), b("2.71"), rem = a % b; print(rem, "\n"); //0.43
        NUM& operator%(NUM& b);

        /// NUM IN-LINE /// MODULUS, CODE: NUM a("3.14"), rem = a % "-3.00"; print(rem, "\n"); //0.14
        NUM& operator%(const char* b);

        /// NUM IN-LINE /// MODULUS, CODE: NUM a("-3.14"), rem = a % string("-3.00"); print(rem, "\n"); //-0.14
        NUM& operator%(string b);

        /// NUM IN-LINE /// MODULUS, CODE: NUM a("-11.00"), rem = a % 3; print(rem, "\n"); //-2.0
        NUM& operator%(i64 b);

        /// NUM IN-LINE /// MODULUS AND ASSIGNMENT, CODE: NUM a("3.14"), b("-8.0"); a %= b; print(a, "\n"); //3.14
        NUM& operator%=(NUM& b);

        /// NUM IN-LINE /// MODULUS AND ASSIGNMENT, CODE: NUM a("13.14"); a %= "-8.0"; print(a, "\n"); //5.14
        NUM& operator%=(const char* b);

        /// NUM IN-LINE /// MODULUS AND ASSIGNMENT, CODE: NUM a("-13.14"); a %= string("-8.0"); print(a, "\n"); //-5.14
        NUM& operator%=(string b);

        /// NUM IN-LINE /// MODULUS AND ASSIGNMENT, CODE: NUM a("-25.00"); a %= 8; print(a, "\n"); //-1.0
        NUM& operator%=(i64 b);

        /// NUM IN-LINE /// POWER, CODE: NUM a(2), b(128), power =  a ^ b; print(power, "\n"); //340282366920938463463374607431768211456.0
        NUM& operator^(NUM& e);

        /// NUM IN-LINE /// POWER, CODE: NUM a(2), power = a ^ "256.0"; print(power, "\n"); //115792089237316195423570985008687907853269984665640564039457584007913129639936.0
        NUM& operator^(const char* e);

        /// NUM IN-LINE /// POWER, CODE: NUM a(2), power = a ^ string("512.0"); print(power, "\n"); //13407807929942597099574024998205846127479365820592393377723561443721764030073546976801874298166903427690031858186486050853753882811946569946433649006084096.0
        NUM& operator^(string e);

        /// NUM IN-LINE /// POWER, CODE: NUM a(-2), power = a ^ -5; print(power, "\n"); //-0.03125
        NUM& operator^(i64 e);

        /// NUM IN-LINE /// POWER AND ASSIGNMENT, CODE: NUM a("25.00"), b(-8); a ^= b; print(a, "\n"); //0.0000000000065536
        NUM& operator^=(NUM& e);

        /// NUM IN-LINE /// POWER AND ASSIGNMENT, CODE: NUM a("25.00"), b(-8); a ^= b; print(a, "\n"); //0.0000000000065536
        NUM& operator^=(const char* e);

        /// NUM IN-LINE /// POWER AND ASSIGNMENT, CODE: NUM a("25.00"); a ^= string("-8.0"); print(a, "\n"); //0.0000000000065536
        NUM& operator^=(string e);

        /// NUM IN-LINE /// POWER AND ASSIGNMENT, CODE: NUM a("-25.00"); a ^= 8; print(a, "\n"); //152587890625.0
        NUM& operator^=(i64 e);

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
       //////////////////////////////////////////// NUM IN-LINE HELPER FUNCTIONS /////////////////////////////////////////////////
      ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        /// NUM IN-LINE /// RETURN OBJECT *this COPIED ON b, CODE: NUM a("-3.14"), b("2.71"); print(b, " => "); a.copy(b); print(b, "\n"); //2.71 => -3.14
        NUM& copy(NUM& b);

        /// NUM IN-LINE /// RETURN OBJECT ADDRESS LIKE address(), CODE: NUM a(2 + 3); NUM* ap = a.id(); print(*ap, "\n"); //5.0
        NUM* id();

        /// NUM IN-LINE /// RETURN OBJECT ADDRESS LIKE id(), CODE: NUM a(2 + 3); NUM* ap = a.address(); print(*ap, "\n"); //5.0
        NUM* address();

        /// NUM IN-LINE /// NEED: free(p[0]) (C_I => p[0]) RETURN COEFFICIENT INTEGER PART OF NUM, CODE: NUM a("5.123"); char** p = a.I_(); a.print_fields(); print(p[0], "\n"); free(p[0]); //5
        char** I_();

        /// NUM IN-LINE /// NEED: free(p[0]) (C_F => p[1]) RETURN COEFFICIENT FLOATING-POINT PART OF NUM, CODE: NUM a("5.123"); char** p = a.F_(); a.print_fields(); print(p[1], "\n"); free(p[0]); //123
        char** F_();

        /// NUM IN-LINE /// NEED: free() RETURN NUM AS STORED EXPONENTIAL NUMBER STRING (SIGNED), CODE: NUM a("-5.123"); a.print_fields(); char* p = a.get_NUM(); print(p, "\n"); free(p); //-5.123e0
        char* get_NUM();

        /// NUM IN-LINE /// NEED: free() CONVERT NUM TO BINARY FORMAT NUMBER STRING (UNSIGNED) (LIKE to_bin(), CODE: NUM a("15.0"); a.print_fields(); char* ram = a.bits(); print(ram, "\n"); free(ram); //1111
        char* bits(int bin = 1);

        /// NUM IN-LINE /// NEED: free() RETURN NUM STRING FORMATTED WITH SEPARATORS AND FRACTIONAL PART d ZERO PADDED WHEN REQUIRED, CODE: NUM a("1003.2"); char* ram = a.format(); print(ram, "\n"); free(ram); //1,003.20
        char* format(i64 d = 2, char SEP1000 = ',', int SIGN = 0);

        /// NUM IN-LINE /// NEED: free() RETURN Num STRING NUMBER FORMATTED WITH FRACTIONAL PART d ZERO PADDED WHEN REQUIRED, CODE: NUM a("1003.2"); char* ram = a.format0(); print(ram, "\n"); free(ram); //1003.20
        char* format0(i64 d = 2);

        /// NUM IN-LINE /// NEED: free() RETURN NUM INTEGER STRING WITHOUT .0 IF INTEGER VALUE, CODE: NUM a("3.0"); char *p = a.format_int(); print(p, "\n"); free(p); //3
        char* format_int(void);

        /// NUM IN-LINE /// BOOLEAN FOR ZERO NUMBER VALUE CHECK, CODE: NUM a(0); print(a.is_zero(), " "); a--; print(a.is_zero(), "\n"); //1 0
        int is_zero();

        /// NUM IN-LINE /// BOOLEAN FOR NUMBER POSITIVE VALUE CHECK, CODE: NUM a(1); print(a.is_positive(), " "); a--; print(a.is_positive(), "\n"); //1 0
        int is_positive();

        /// NUM IN-LINE /// BOOLEAN FOR NUMBER NEGATIVE VALUE CHECK, CODE: NUM a(-1); print(a.is_negative(), " "); a++; print(a.is_negative(), "\n"); //1 0
        int is_negative();

        /// NUM IN-LINE /// BOOLEAN FOR NUMBER INTEGER VALUE CHECK, CODE: NUM a("3.000001"); print(a.is_integer(), "\n"); //0
        int is_integer();

        /// NUM IN-LINE /// BOOLEAN FOR NUMBER FLOATING VALUE CHECK, CODE: NUM a("3.000001"); print(a.is_floating(), "\n"); //1
        int is_floating();

        /// NUM IN-LINE /// BOOLEAN FOR NUMBER EVEN VALUE CHECK (2.0), CODE: NUM a("4.00"); print(a.is_even(), "\n"); //1
        int is_even();

        /// NUM IN-LINE /// BOOLEAN FOR NUMBER ODD VALUE CHECK (3.0), CODE: NUM a("5.00"); print(a.is_odd(), "\n"); //1
        int is_odd();

        /// NUM IN-LINE /// CHECKER FOR PRIME NUMBERS, CODE: NUM a("257.0"); print(a.is_prime() ? "is prime!" : "is NOT prime.", "\n"); //is prime!
        int is_prime();

        /// NUM IN-LINE /// NEED: free() CONVERT NUM TO BINARY FORMAT NUMBER STRING (UNSIGNED), CODE: NUM a("5.00"); char* ram; ram = a.to_bin(); print(ram, "\n"); free(ram); //101
        char* to_bin(int bin = 1);

        /// NUM IN-LINE /// NEED: free() CONVERT NUM TO HEXADECIMAL FORMAT NUMBER STRING (UNSIGNED), CODE: NUM a("250.00"); char* ram; ram = a.to_hex(); print(ram, "\n"); free(ram); //FA
        char* to_hex();

        /// NUM IN-LINE /// RETURN SCIENTIFIC NOTATION NUMBER OBJECT, CODE: NUM a("123.0e45"), b("678.0e9"), c = a * b; NUM d = c.into_sci(); d.print_fields(); //S=0 CE=8.3394e58 C=8.3394 E=58 len_I=1 len_F=4 SCIENTIFIC NOTATION
        NUM& into_sci();

        /// NUM IN-LINE /// NORMALIZE OBJECT ITSELF INTO SCIENTIFIC NOTATION NUMBER , CODE: NUM a("123.0e45"), b("678.0e9"), c = a * b; c.into_exp(); c.print_fields(); //S=0 CE=8.3394e58 C=8.3394 E=58 len_I=1 len_F=4 SCIENTIFIC NOTATION
        NUM& into_exp();

        /// NUM IN-LINE /// CONVERT NUM TO i32 (SIGNED 32-BIT INTEGER) RANGE BETWEEN -2147483648 TO 2147483647, CODE: NUM a("123.0e3"); int A = a.to_i32(); print(A, "\n"); //123000
        i32 to_i32();

        /// NUM IN-LINE /// CONVERT NUM TO i64 (SIGNED 64-BIT INTEGER) RANGE BETWEEN -9223372036854775808 TO 9223372036854775807, CODE: NUM a("123.0e12"); i64 A = a.to_i64(); print(A, "\n"); //123000000000000
        i64 to_i64();

        /// NUM IN-LINE /// CONVERT NUM TO I64 (UNSIGNED 64-BIT INTEGER) RANGE BETWEEN 0 TO 18446744073709551615, CODE: NUM a("18446744073709551614.0"); printf("%llu\n", a.to_I64() + 1); //18446744073709551615
        I64 to_I64();

        /// NUM IN-LINE /// NEED: free() CONVERT NUM TO INTERNAL EXPONENTIAL NOTATION NUMBER STRING, CODE: NUM a("-123.0e-3"); char* ram = a.to_exp(); print(ram, "\n"); free(ram); //-123.0e-3
        char* to_exp();

        /// NUM IN-LINE /// NEED: free() CONVERT NUM TO SCIENTIFIC NOTATION NUMBER STRING, CODE: NUM a("-123.0e-3"); char* ram = a.to_sci(); print(ram, "\n"); free(ram); //-1.23e-1
        char* to_sci();

        /// NUM IN-LINE /// NEED: free() CONVERT NUM TO STANDARD NOTATION NUMBER STRING (SIGNED), CODE: NUM a("123.0e3"); char* ram = a.to_string(); print(ram, "\n"); free(ram); //123000.0
        char* to_string();

        /// NUM IN-LINE => CONVERT NUM TO double TYPE (LOSS PRECISION) CODE: printf("%.9f\n", add("0.000000001", "0.000000002").to_double()); //0.000000003
        double to_double();

        /// NUM IN-LINE /// PRINT NUM STANDARD FORMAT, CODE: NUM a("2.0"); a.print("\n"); //2.0
        int print(const char* postfix = "", int SIGN = 0);

        /// NUM IN-LINE /// PRINT NUM EXPONENTIAL FORMAT (SIGNED), CODE: NUM a("-123.0e-3"); a.print_exp("\n"); //-123.0e-3
        int print_exp(const char* postfix = "");

        /// NUM IN-LINE /// PRINT NUM FIELDS, CODE: NUM a("-123.0e-3"); a.print_fields(); //S=1 CE=123.0e-3 C=123.0 E=-3 len_I=3 len_F=1
        int print_fields();

        /// NUM IN-LINE /// (DEBUG) RETURN STRING NUM STRUCTURE ATTRIBUTES, CODE: NUM a("-123.0e-3"); char* s = a.sprint_fields(); print(s, "\n"); //S=1 CE=123.0e-3 C=123.0 E=-3 len_I=3 len_F=1
        char* sprint_fields() const;

        /// NUM IN-LINE /// RETURN OBJECT TRUNCATION TO THE SPECIFIED NUMBER DECIMALS (LOSS PRECISION), CODE: NUM a("123.456"); a = a.trunk(2); print(a, "\n"); //123.45
        NUM& trunk(i64 decs);

        /// NUM IN-LINE /// RETURN ROUND FLOOR OF THE OBJECT DECIMAL DIGITS TO THE SPECIFIED NUMBER (LOSS PRECISION), CODE: NUM a("123.456"); a = a.round_floor(0); print(a, "\n"); //123.0
        NUM& round_floor(i64 decs = 0);

        /// NUM IN-LINE /// RETURN ROUND CEIL OF THE OBJECT TO THE SPECIFIED DIGIT NUMBER (LOSS PRECISION), CODE: NUM a("123.456"); a = a.round_ceil(0); print(a, "\n"); //124.0
        NUM& round_ceil(i64 decs = 0);

        /// NUM IN-LINE /// RETURN STANDARD ROUND OF THE OBJECT DECIMAL DIGITS TO THE SPECIFIED NUMBER (LOSS PRECISION), CODE: NUM a("000123.12345678900"); a.round(5).print("\n"); //123.12346
        NUM& round(i64 d = 2);

        /// NUM IN-LINE /// BANK ROUND OF THE OBJECT DECIMAL DIGITS TO THE SPECIFIED NUMBER (LOSS PRECISION), CODE: NUM a("000123.12345678900"); a.round_bank(4).print("\n"); //123.1234
        NUM& round_bank(i64 d = 2);

        /// NUM IN-LINE /// WITH THE ALL, RETURN THE PERCENTAGE OF SPECIFIED RATE, CODE: NUM all("1_000.0"), rate(2); all.pct(rate).round().print("\n"); //20.0
        NUM& pct(NUM& rate);

        /// NUM IN-LINE /// WITH THE ALL, RETURN THE PERCENTAGE OF SPECIFIED RATE, CODE: NUM all("1_000.0"); all.pct("2.0").round().print("\n"); //20.0
        NUM& pct(const char* rate);

        /// NUM IN-LINE /// WITH THE ALL, RETURN THE PERCENTAGE OF SPECIFIED RATE, CODE: NUM all("1_000.0"); all.pct(string("2.0")).round().print("\n"); //20.0
        NUM& pct(string rate);

        /// NUM IN-LINE /// WITH THE ALL, RETURN THE PERCENTAGE OF SPECIFIED RATE, CODE: NUM all("1_000.0"); all.pct(2).round().print("\n"); //20.0
        NUM& pct(i64 rate);

        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE OF SPECIFIED PERCENTAGE, CODE: NUM ALL("1_000.0"), pct(20); ALL.rate(pct).print("\n"); //2.0
        NUM& rate(NUM& pct);

        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE OF SPECIFIED PERCENTAGE, CODE: NUM ALL("1_000.0"); ALL.rate("20.0").print("\n"); //2.0
        NUM& rate(const char* pct);

        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE OF SPECIFIED PERCENTAGE, CODE: NUM ALL("1_000.0"); ALL.rate(string("20.0")).print("\n"); //2.0
        NUM& rate(string pct);

        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE OF SPECIFIED PERCENTAGE, CODE: NUM ALL("1_000.0"); ALL.rate(20).print("\n"); //2.0
        NUM& rate(i64 pct);

        /// NUM IN-LINE /// WITH THE PERCENTAGE RETURN THE ALL OF SPECIFIED RATE, CODE: NUM pct(20), rate(2); pct.all(rate).print("\n"); //1000.0
        NUM& all(NUM& rate);

        /// NUM IN-LINE /// WITH THE PERCENTAGE RETURN THE ALL OF SPECIFIED RATE, CODE: NUM pct(20); pct.all("2.0").print("\n"); //1000.0
        NUM& all(const char* rate);

        /// NUM IN-LINE /// WITH THE PERCENTAGE RETURN THE ALL OF SPECIFIED RATE, CODE: NUM pct(20); pct.all(string("2.0")).print("\n"); //1000.0
        NUM& all(string rate);

        /// NUM IN-LINE /// WITH THE PERCENTAGE RETURN THE ALL OF SPECIFIED RATE, CODE: NUM pct(20); pct.all(2).print("\n"); //1000.0
        NUM& all(i64 rate);

        /// NUM IN-LINE /// RETURN THE PERTHOUSAND TO SPECIFIED RATE, CODE: NUM all("10_000.0"), rate(2); all.pth(rate).print("\n"); //20.0
        NUM& pth(NUM& rate);

        /// NUM IN-LINE /// RETURN THE PERTHOUSAND TO SPECIFIED RATE, CODE: NUM all("10_000.0"); all.pth("2.0").print("\n"); //20.0
        NUM& pth(const char* rate);

        /// NUM IN-LINE /// RETURN THE PERTHOUSAND TO SPECIFIED RATE, CODE: NUM all("10_000.0"); all.pth(string("2.0")).print("\n"); //20.0
        NUM& pth(string rate);

        /// NUM IN-LINE /// RETURN THE PERTHOUSAND TO SPECIFIED RATE, CODE: NUM all("10_000.0"); all.pth(2).print("\n"); //20.0
        NUM& pth(i64 rate);

        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE TO SPECIFIED PERTHOUSAND, CODE: NUM all_th(10000), pth(20); all_th.rate_th(pth).print("\n"); //2.0
        NUM& rate_th(NUM& pth);

        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE TO SPECIFIED PERTHOUSAND, CODE: NUM all_th(10000); all_th.rate_th("20.0").print("\n"); //2.0
        NUM& rate_th(const char* pth);

        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE TO SPECIFIED PERTHOUSAND, CODE: NUM all_th(10000); all_th.rate_th(string("20.0")).print("\n"); //2.0
        NUM& rate_th(string pth);

        /// NUM IN-LINE /// WITH THE ALL, RETURN THE RATE TO SPECIFIED PERTHOUSAND, CODE: NUM all_th(10000); all_th.rate_th(20).print("\n"); //2.0
        NUM& rate_th(i64 pth);

        /// NUM IN-LINE /// WITH THE PERTHOUSAND RETURN THE ALL TO SPECIFIED RATE, CODE: NUM pth(20), rate_th(2); pth.all_th(rate_th).print("\n"); //10000.0
        NUM& all_th(NUM& rate_th);

        /// NUM IN-LINE /// WITH THE PERTHOUSAND RETURN THE ALL TO SPECIFIED RATE, CODE: NUM pth(20); pth.all_th("2.0").print("\n"); //10000.0
        NUM& all_th(const char* rate_th);

        /// NUM IN-LINE /// WITH THE PERTHOUSAND RETURN THE ALL TO SPECIFIED RATE, CODE: NUM pth(20); pth.all_th(string("2.0")).print("\n"); //10000.0
        NUM& all_th(string rate_th);

        /// NUM IN-LINE /// WITH THE PERTHOUSAND RETURN THE ALL TO SPECIFIED RATE, CODE: NUM pth(20); pth.all_th(2).print("\n"); //10000.0
        NUM& all_th(i64 rate_th);

        /// NUM IN-LINE /// RETURN THE SPIN-ON OF SPECIFIED RATE, CODE: NUM factory_price("44.74"); NUM rate("22.00"); factory_price.spinon(rate).round().print("\n"); //54.58
        NUM& spinon(NUM& rate);

        /// NUM IN-LINE /// RETURN THE SPIN-ON OF SPECIFIED RATE, CODE: NUM factory_price("44.74"); factory_price.spinon("22.0").round().print("\n"); //54.58
        NUM& spinon(const char* rate);

        /// NUM IN-LINE /// RETURN THE SPIN-ON OF SPECIFIED RATE, CODE: NUM factory_price("44.74"); factory_price.spinon(string("22.0")).round().print("\n"); //54.58
        NUM& spinon(string rate);

        /// NUM IN-LINE /// RETURN THE SPIN-ON OF SPECIFIED RATE, CODE: NUM factory_price("44.74"); factory_price.spinon(22).round().print("\n"); //54.58
        NUM& spinon(i64 rate);

        /// NUM IN-LINE /// RETURN THE SPIN-OFF OF SPECIFIED RATE, CODE: NUM asus("842.00"), rate("22.0"); asus.spinoff(rate).round().print("\n"); //690.16
        NUM& spinoff(NUM& rate);

        /// NUM IN-LINE /// RETURN THE SPIN-OFF OF SPECIFIED RATE, CODE: NUM asus("842.00"); asus.spinoff("22.0").round().print("\n"); //690.16
        NUM& spinoff(const char* RATE);

        /// NUM IN-LINE /// RETURN THE SPIN-OFF OF SPECIFIED RATE, CODE: NUM asus("842.00"); asus.spinoff(string("22.0")).round().print("\n"); //690.16
        NUM& spinoff(string RATE);

        /// NUM IN-LINE /// RETURN THE SPIN-OFF OF SPECIFIED RATE, CODE: NUM asus("842.00"); asus.spinoff(22).round().print("\n"); //690.16
        NUM& spinoff(i64 RATE);

        /// NUM IN-LINE /// RETURN THE INVERSE, CODE: NUM a("10.0"); a.inv().print("\n"); //0.1
        NUM& inv(i64 decs = 32);

        /// NUM IN-LINE /// DOUBLED VALUE => CODE: NUM a("3.14"); a._2x().print("\n"); //6.28
        NUM& _2x();

        /// NUM IN-LINE /// TRIPLED VALUE => CODE: NUM a("3.14"); a._3x().print("\n"); //9.42
        NUM& _3x();

        /// NUM IN-LINE /// MULTIPLY FOR TEN, CODE: NUM a(3); a._10y().print("\n"); //30.0
        NUM& _10x();

        /// NUM IN-LINE /// MULTIPLY FOR HUNDRED, CODE: NUM a(3); a._100x().print("\n"); //300.0
        NUM& _100x();

        /// NUM IN-LINE /// MULTIPLY FOR THOUSAND, CODE: NUM a(3); a._1000x().print("\n"); //3000.0
        NUM& _1000x();

        /// NUM IN-LINE /// DIVIDE FOR TEN, CODE: NUM a(3); a._10div().print("\n"); //0.3
        NUM& _10div();

        /// NUM IN-LINE /// DIVIDE FOR HUNDRED, CODE: NUM a(3); a._100div().print("\n"); //0.03
        NUM& _100div();

        /// NUM IN-LINE /// DIVIDE FOR THOUSAND, CODE: NUM a(3); a._1000div().print("\n"); //0.003
        NUM& _1000div();

        /// NUM IN-LINE /// RETURN THE SQUARE, CODE: NUM a("10.0"); a.x2().print("\n"); //100.0
        NUM& x2();

        /// NUM IN-LINE ///RETURN THE CUBE, CODE: NUM a("10.0"); a.x3().print("\n"); //1000.0
        NUM& x3();

        /// NUM IN-LINE /// CALCULATOR MODE: POWER => CODE: NUM b("3.141592654"), e("5.0"); b.xy(e).print("\n"); //306.019684985070792201693945033260775421740493024
        NUM& xy(NUM& e);

        /// NUM IN-LINE /// CALCULATOR MODE: POWER => CODE: NUM b("3.141592654"); b.xy("5.0").print("\n"); //306.019684985070792201693945033260775421740493024
        NUM& xy(const char* e);

        /// NUM IN-LINE /// CALCULATOR MODE: POWER => CODE: NUM b("3.141592654"); b.xy(string("5.0")).print("\n"); //306.019684985070792201693945033260775421740493024
        NUM& xy(string e);

        /// NUM IN-LINE /// CALCULATOR MODE: POWER => CODE: NUM b("3.141592654"); b.xy(5).print("\n"); //306.019684985070792201693945033260775421740493024
        NUM& xy(i64 e);

        /// NUM IN-LINE /// CALCULATOR MODE: TEN POWER => CODE: NUM a(6); a._10y().print("\n"); //1000000.0
        NUM& _10y();

        /// NUM IN-LINE /// CALCULATOR MODE: TWO POWER => CODE: NUM a(6); a._2y().print("\n"); //64.0
        NUM& _2y();

        /// NUM IN-LINE /// CALCULATOR MODE: e POWER => CODE: NUM a(6); a._ey().round(32).print("\n"); //403.42879349273512260838718054342167
        NUM& _ey();

        /// NUM IN-LINE /// CALCULATOR MODE: MULTIPLY OR DIVIDE SELF OBJECT FOR 10 POWER, CODE: NUM a("1000.0"), e("-6.0"); a.shift(e).print("\n"); //0.001	
        NUM& shift(NUM e);

        /// NUM IN-LINE /// CALCULATOR MODE: MULTIPLY OR DIVIDE SELF OBJECT FOR 10 POWER, CODE: NUM a("1000.0"); a.shift("-6.0").print("\n"); //0.001	
        NUM& shift(const char* e);

        /// NUM IN-LINE /// CALCULATOR MODE: MULTIPLY OR DIVIDE SELF OBJECT FOR 10 POWER, CODE: NUM a("1000.0"); a.shift(string("-6.0")).print("\n"); //0.001	
        NUM& shift(string e);

        /// NUM IN-LINE /// CALCULATOR MODE: MULTIPLY OR DIVIDE SELF OBJECT FOR 10 POWER, CODE: NUM a("1000.0"); a.shift(-6).print("\n"); //0.001	
        NUM& shift(i64 e);

        /// NUM IN-LINE /// CALCULATOR MODE: RETURN OBJECT MULTIPLIED OR DIVIDED FOR 10 POWER NUM, CODE: NUM a("0.001"), e(6); a.xe10(e).print("\n"); //1000.0	
        NUM& xe10(NUM& e);

        /// NUM IN-LINE /// CALCULATOR MODE: RETURN OBJECT MULTIPLIED OR DIVIDED FOR 10 POWER STRING, CODE: NUM a("0.001"); a.xe10("6.0").print("\n"); //1000.0	
        NUM& xe10(const char* e);

        /// NUM IN-LINE /// CALCULATOR MODE: RETURN OBJECT MULTIPLIED OR DIVIDED FOR 10 POWER string, CODE: NUM a("0.001"); a.xe10(string("6.0")).print("\n"); //1000.0	
        NUM& xe10(string e);

        /// NUM IN-LINE /// CALCULATOR MODE: RETURN OBJECT MULTIPLIED OR DIVIDED FOR 10 POWER i64, CODE: NUM a("0.001"); a.xe10(6).print("\n"); //1000.0	
        NUM& xe10(i64 e);

        /// NUM IN-LINE /// RETURN NUM SQUARE ROOT, CODE: NUM a("10.0"); a.sqrt().print("\n"); //3.162277
        NUM& sqrt(i64 d = 6);

        /// NUM IN-LINE /// RETURN NUM i-ROOT, CODE: NUM a("64.0"); a.root_i(3).print("\n"); //4.0
        NUM& root_i(i64 i = 3, i64 d = 3);

        /// NUM IN-LINE /// RETURN THE ADDITION, CODE: NUM tot("5.102"), n("0.003"); tot.add(n).print("\n"); //10.105
        NUM& add(NUM& b);

        /// NUM IN-LINE /// RETURN THE ADDITION, CODE: NUM tot("5.103"); tot.add("5.1").print("\n"); //10.203
        NUM& add(const char* b);

        /// NUM IN-LINE /// RETURN THE ADDITION, CODE: NUM tot("5.103"); tot.add(string("5.1")).print("\n"); //10.203
        NUM& add(string b);

        /// NUM IN-LINE /// RETURN THE ADDITION, CODE: NUM tot("5.102"); tot.add(5).print("\n"); //10.102
        NUM& add(i64 b);

        /// NUM IN-LINE /// RETURN THE SUBTRACTION, CODE: NUM tot("5.102"), n("0.003"); tot.sub(n).print("\n"); //5.099
        NUM& sub(NUM& b);

        /// NUM IN-LINE /// RETURN THE SUBTRACTION, CODE: NUM tot("5.103"); tot.sub("5.1").print("\n"); //0.003
        NUM& sub(const char* b);

        /// NUM IN-LINE /// RETURN THE SUBTRACTION, CODE: NUM tot("5.103"); tot.sub(string("5.1")).print("\n"); //0.003
        NUM& sub(string b);

        /// NUM IN-LINE /// RETURN THE SUBTRACTION, CODE: NUM tot("5.102"); tot.sub(5).print("\n"); //0.102
        NUM& sub(i64 b);

        /// NUM IN-LINE /// RETURN THE MULTIPLICATION, CODE: NUM tot("5.102"), n("0.003"); tot.mul(n).print("\n"); //0.015306
        NUM& mul(NUM& b);

        /// NUM IN-LINE /// RETURN THE MULTIPLICATION, CODE: NUM tot("5.103"); tot.mul("5.1").print("\n"); //26.0253
        NUM& mul(const char* b);

        /// NUM IN-LINE /// RETURN THE MULTIPLICATION, CODE: NUM tot("5.103"); tot.mul(string("5.1")).print("\n"); //26.0253
        NUM& mul(string b);

        /// NUM IN-LINE /// RETURN THE MULTIPLICATION, CODE: NUM tot("5.102"); tot.mul(5).print("\n"); //25.51
        NUM& mul(i64 b);

        /// NUM IN-LINE /// RETURN THE DIVISION, CODE: NUM tot("5.102"), n("0.003"); tot.div(n, 9).print("\n"); //1700.666666
        NUM& div(NUM& b, i64 dp = 40);

        /// NUM IN-LINE /// RETURN THE DIVISION, CODE: NUM tot("5.102"); tot.div("5.2").print("\n"); //0.9811538461538461538461538461538461538461
        NUM& div(const char* b, i64 dp = 40);

        /// NUM IN-LINE /// RETURN THE DIVISION, CODE: NUM tot("5.102"); tot.div(string("5.2")).print("\n"); //0.9811538461538461538461538461538461538461
        NUM& div(string b, i64 dp = 40);

        /// NUM IN-LINE /// RETURN THE DIVISION, CODE: NUM tot("5.102"); tot.div(5).print("\n"); //1.0204
        NUM& div(i64 b, i64 dp = 40);

        /// NUM IN-LINE /// RETURN THE MODULUS (DIVISION REMAINDER), CODE: NUM a("123456789012345678901234567890.0"), b("8917988.0"); a.mod(b).print("\n"); //398122.0
        NUM& mod(NUM& b);

        /// NUM IN-LINE /// RETURN THE MODULUS (DIVISION REMAINDER), CODE: NUM a("-15.2"); a.mod("8.0").print("\n"); //-7.2
        NUM& mod(const char* b);

        /// NUM IN-LINE /// RETURN THE MODULUS (DIVISION REMAINDER), CODE: NUM a("-15.2"); a.mod(string("8.0")).print("\n"); //-7.2
        NUM& mod(string b);

        /// NUM IN-LINE /// RETURN THE MODULUS (DIVISION REMAINDER), CODE: NUM a("123.0"); a.mod(-120).print("\n"); //3.0
        NUM& mod(i64 b);

        /// NUM IN-LINE /// RETURN THE POWER, CODE: NUM a("3.2"); NUM b("4.0"); a.pow(b).print("\n"); //104.8576
        NUM& pow(NUM& b);

        /// NUM IN-LINE /// RETURN THE POWER, CODE: NUM a("3.2"); a.pow("-4.0").print("\n"); //0.0095367431640625
        NUM& pow(const char* b);

        /// NUM IN-LINE /// RETURN THE POWER, CODE: NUM a("3.2"); a.pow(string("-4.0")).print("\n"); //0.0095367431640625
        NUM& pow(string b);

        /// NUM IN-LINE /// RETURN THE POWER, CODE: NUM a("3.0"); a.pow(80).print("\n"); //147808829414345923316083210206383297601.0
        NUM& pow(i64 b);

        /// NUM IN-LINE /// RETURN FACTORIAL COMPUTATION, CODE: NUM a("5.0"); a.fact().print("\n"); //120
        NUM& fact();

        /// NUM IN-LINE /// RETURN INCREMENTED OBJECT, CODE: NUM a("1.1"); a.inc(3).print("\n"); //4.1
        NUM& inc(i64 b = 1);

        /// NUM IN-LINE /// RETURN INCREMENTED OBJECT, CODE: NUM a("1.1"); NUM b("3.21"); a.inc(b).print("\n"); //4.31
        NUM& inc(NUM& b);

        /// NUM IN-LINE /// RETURN INCREMENTED OBJECT, CODE: NUM a("1.1"); a.inc("3.21").print("\n"); //4.31
        NUM& inc(const char* b);

        /// NUM IN-LINE /// RETURN INCREMENTED OBJECT, CODE: NUM a("1.1"); a.inc(string("3.21")).print("\n"); //4.31
        NUM& inc(string b);

        /// NUM IN-LINE /// RETURN DECREMENTED OBJECT, CODE: NUM a("1.1"); a.dec(3).print("\n"); //-1.9
        NUM& dec(i64 b = 1);

        /// NUM IN-LINE /// RETURN DECREMENTED OBJECT, CODE: NUM a("1.1"); NUM b("3.21"); a.dec(b).print("\n"); //-2.11
        NUM& dec(NUM& b);

        /// NUM IN-LINE /// RETURN DECREMENTED OBJECT, CODE: NUM a("1.1"); a.dec("3.21").print("\n"); //-2.11
        NUM& dec(const char* b);

        /// NUM IN-LINE /// RETURN DECREMENTED OBJECT, CODE: NUM a("1.1"); a.dec(string("3.21")).print("\n"); //-2.11
        NUM& dec(string b);

        /// NUM IN-LINE /// RETURN CLEARED OBJECT TO ZERO VALUE, CODE: NUM M("3.0"); M.clear(); M.print("\n"); //0.0
        NUM& clear();

        /// NUM IN-LINE /// CONVERT DOUBLE TO NUM OBJECT (MAY BE PRECISION LOSS IF NOT ROUNDED), CODE: double a(-2543.9935500001); NUM A; A = A.from_double(a).round(5); print(A, "\n"); //-2543.99355
        NUM& from_double(double d);

    };
    ///////////////// END CLASS NUM /////////////////     ///////////////// END CLASS NUM /////////////////
} // ENDING CURLY BRACKET num7 NAMESPACE END
///////////////////////////////////////////////// 

///////////////////////////////////////// END-FILE      /////////////////////////////////////////
#endif // num7_h
