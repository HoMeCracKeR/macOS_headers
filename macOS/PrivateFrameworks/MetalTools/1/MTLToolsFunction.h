//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLFunctionSPI-Protocol.h>

@class MTLToolsPointerArray, NSArray, NSDictionary, NSString;
@protocol MTLDevice;

@interface MTLToolsFunction : MTLToolsObject <MTLFunctionSPI>
{
    MTLToolsPointerArray *_functions;
}

- (void).cxx_destruct;
@property(readonly) long long patchControlPointCount;
@property(readonly) unsigned long long patchType;
@property(readonly) NSDictionary *functionConstantsDictionary;
@property(readonly) unsigned long long renderTargetArrayIndexType;
@property(copy) NSString *label;
@property(readonly) long long lineNumber;
@property(readonly, copy) NSString *filePath;
@property(readonly) NSString *name;
@property(readonly) NSArray *stageInputAttributes;
@property(readonly) NSArray *vertexAttributes;
@property(readonly) unsigned long long functionType;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 strongParent:(id)arg2 functions:(id)arg3;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 functions:(id)arg3;
@property(readonly) id <MTLDevice> device;
- (void)acceptVisitor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

