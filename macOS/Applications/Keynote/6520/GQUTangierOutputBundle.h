//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GQUOutputBundle.h"

@class NSString;

@interface GQUTangierOutputBundle : NSObject <GQUOutputBundle>
{
}

- (void)setPageElementXPath:(struct __CFString *)arg1;
- (void)setDocumentSize:(struct CGSize)arg1;
- (BOOL)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;
- (BOOL)setDataForMainHtmlResource:(struct __CFData *)arg1;
- (struct __CFString *)newUriForResource:(struct __CFString *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

