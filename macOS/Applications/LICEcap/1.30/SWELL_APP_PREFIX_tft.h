//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SWELL_APP_PREFIX_tft : NSObject
{
    CDUnknownFunctionPointerType m_cb;
    struct HWND__ *m_hwnd;
    unsigned long long m_timerid;
}

- (void)SWELL_Timer:(id)arg1;
- (id)initWithId:(unsigned long long)arg1 hwnd:(struct HWND__ *)arg2 callback:(CDUnknownFunctionPointerType)arg3;

@end

