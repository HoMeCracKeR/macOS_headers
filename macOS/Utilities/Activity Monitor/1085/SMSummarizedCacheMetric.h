//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSImage, NSNumberFormatter, NSString;

@interface SMSummarizedCacheMetric : NSObject
{
    unsigned char _isPressure;
    unsigned char _textBold;
    NSImage *_icon;
    NSString *_localizedName;
    unsigned long long _lastHourBytes;
    unsigned long long _lastDayBytes;
    unsigned long long _lastWeekBytes;
    unsigned long long _lastMonthBytes;
    double _lastHourMax;
    double _lastDayMax;
    double _lastWeekMax;
    double _lastMonthMax;
    CDUnknownBlockType _calculationBlock;
    NSColor *_textColor;
    NSNumberFormatter *_percentFormatter;
}

- (void).cxx_destruct;
@property(retain) NSNumberFormatter *percentFormatter; // @synthesize percentFormatter=_percentFormatter;
@property unsigned char textBold; // @synthesize textBold=_textBold;
@property(retain) NSColor *textColor; // @synthesize textColor=_textColor;
@property unsigned char isPressure; // @synthesize isPressure=_isPressure;
@property(copy) CDUnknownBlockType calculationBlock; // @synthesize calculationBlock=_calculationBlock;
@property double lastMonthMax; // @synthesize lastMonthMax=_lastMonthMax;
@property double lastWeekMax; // @synthesize lastWeekMax=_lastWeekMax;
@property double lastDayMax; // @synthesize lastDayMax=_lastDayMax;
@property double lastHourMax; // @synthesize lastHourMax=_lastHourMax;
@property unsigned long long lastMonthBytes; // @synthesize lastMonthBytes=_lastMonthBytes;
@property unsigned long long lastWeekBytes; // @synthesize lastWeekBytes=_lastWeekBytes;
@property unsigned long long lastDayBytes; // @synthesize lastDayBytes=_lastDayBytes;
@property unsigned long long lastHourBytes; // @synthesize lastHourBytes=_lastHourBytes;
@property(retain) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
- (id)children;
- (void)updateWithMetricsForMonth:(id)arg1 week:(id)arg2 day:(id)arg3 hour:(id)arg4;
@property(readonly) NSString *lastMonthAsString;
@property(readonly) NSString *lastWeekAsString;
@property(readonly) NSString *lastDayAsString;
@property(readonly) NSString *lastHourAsString;
- (id)init;
- (unsigned long long)totalBytesInMetrics:(id)arg1;
- (double)maxPressureInMetrics:(id)arg1;
- (id)stringForPressureMax:(double)arg1;
- (id)stringForMetricValue:(unsigned long long)arg1;

@end

