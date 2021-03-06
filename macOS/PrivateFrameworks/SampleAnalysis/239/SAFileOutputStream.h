//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SampleAnalysis/SAOutputStream.h>

__attribute__((visibility("hidden")))
@interface SAFileOutputStream : SAOutputStream
{
    struct __sFILE *_outputFileStream;
}

@property(readonly, nonatomic) struct __sFILE *outputFileStream; // @synthesize outputFileStream=_outputFileStream;
- (BOOL)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (int)appendData:(id)arg1;
- (int)printWithFormat:(const char *)arg1;
- (id)initWithFileStream:(struct __sFILE *)arg1;

@end

