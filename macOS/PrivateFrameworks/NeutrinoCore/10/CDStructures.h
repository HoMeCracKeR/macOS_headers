//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CC_MD5state_st {
    unsigned int A;
    unsigned int B;
    unsigned int C;
    unsigned int D;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double _field1;
    double _field2;
};

struct Context {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct _CGLPixelFormatObject *_field4;
    struct _CGLContextObject *_field5;
    struct _CGLContextObject *_field6;
};

struct DataSet {
    struct vector<double, std::__1::allocator<double>> _values;
};

struct Histogram<long, double>;

struct NSArray {
    Class _field1;
};

struct NSDictionary {
    Class _field1;
};

struct NSMutableDictionary {
    Class _field1;
};

struct NUResponse {
    Class _field1;
};

struct Region {
    struct unordered_set<NU::RegionRect, NU::RectHash, NU::RectEqualTo, std::__1::allocator<NU::RegionRect>> _field1;
};

struct _CGLContextObject;

struct _CGLPixelFormatObject;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __hash_node_base<std::__1::__hash_node<NU::RegionRect, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<NU::RegionRect, void *>*> *_field1;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct map<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int>>>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int>>>>>> {
    struct __tree<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int>>>>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int>>>>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int>>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int>>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int>>>>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct unique_ptr<NU::Histogram<long, double>, std::__1::default_delete<NU::Histogram<long, double>>> {
    struct __compressed_pair<NU::Histogram<long, double>*, std::__1::default_delete<NU::Histogram<long, double>>> {
        struct Histogram<long, double> *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<NU::RegionRect, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_set<NU::RegionRect, NU::RectHash, NU::RectEqualTo, std::__1::allocator<NU::RegionRect>> {
    struct __hash_table<NU::RegionRect, NU::RectHash, NU::RectEqualTo, std::__1::allocator<NU::RegionRect>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *>*>, std::__1::allocator<std::__1::__hash_node<NU::RegionRect, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<NU::RegionRect, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, NU::RectHash> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, NU::RectEqualTo> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<double, std::__1::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *__value_;
    } __end_cap_;
};

struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *__begin_;
    char *__end_;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    char _field1;
    char _field2;
    char _field3;
} CDStruct_550fdc95;

typedef struct {
    double min;
    double max;
} CDStruct_59a221c9;

typedef struct {
    float m00;
    float m01;
    float m02;
    float m03;
    float m10;
    float m11;
    float m12;
    float m13;
    float m20;
    float m21;
    float m22;
    float m23;
    float m30;
    float m31;
    float m32;
    float m33;
} CDStruct_81e6f6d3;

typedef struct {
    float a;
    float b;
    float _unused1;
    float c;
    float d;
    float _unused2;
    float tx;
    float ty;
    float _unused3;
} CDStruct_6fdb7d3f;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
} CDStruct_869f9c67;

typedef struct {
    float x;
    float y;
} CDStruct_6e3f967a;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_83984b6f r;
    CDStruct_83984b6f g;
    CDStruct_83984b6f b;
    CDStruct_83984b6f a;
} CDStruct_68f7c993;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

typedef struct {
    CDStruct_f261e59c origin;
    CDStruct_d58201db size;
} CDStruct_996ac03c;

// Ambiguous groups
typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} CDStruct_818bb265;

typedef struct {
    float r;
    float g;
    float b;
    float a;
} CDStruct_83984b6f;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    long long numerator;
    long long denominator;
} CDStruct_1e2b2e48;

typedef struct {
    long long width;
    long long height;
} CDStruct_d58201db;

typedef struct {
    long long x;
    long long y;
} CDStruct_f261e59c;

