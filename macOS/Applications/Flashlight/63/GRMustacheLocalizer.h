//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRMustacheFilter-Protocol.h"
#import "GRMustacheRendering-Protocol.h"
#import "GRMustacheTagDelegate-Protocol.h"

@class NSBundle, NSMutableArray, NSString;

@interface GRMustacheLocalizer : NSObject <GRMustacheTagDelegate, GRMustacheRendering, GRMustacheFilter>
{
    NSBundle *_bundle;
    NSString *_tableName;
    NSMutableArray *_formatArguments;
}

@property(readonly, retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(readonly, retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSMutableArray *formatArguments; // @synthesize formatArguments=_formatArguments;
- (id)stringWithFormat:(id)arg1 argumentArray:(id)arg2;
- (void)mustacheTag:(id)arg1 didRenderObject:(id)arg2 as:(id)arg3;
- (id)mustacheTag:(id)arg1 willRenderObject:(id)arg2;
- (id)renderForMustacheTag:(id)arg1 context:(id)arg2 HTMLSafe:(char *)arg3 error:(id *)arg4;
- (id)transformedValue:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (id)initWithBundle:(id)arg1 tableName:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

