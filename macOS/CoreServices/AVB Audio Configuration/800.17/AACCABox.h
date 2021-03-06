//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioServerApplication/ASABox.h>

@class NSArray;

@interface AACCABox : ASABox
{
    CDUnknownBlockType _valueChangeListenerBlock;
    NSArray *_configurationNames;
}

@property(retain) NSArray *configurationNames; // @synthesize configurationNames=_configurationNames;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isCurrentConfigurationSettable;
- (id)nameForConfiguration:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int numberOfConfigurations;
@property(nonatomic) unsigned int currentConfiguration;
- (void)valuesChangedAtAddresses:(const struct AudioObjectPropertyAddress *)arg1 withCount:(unsigned int)arg2;
- (id)initWithAudioObjectID:(unsigned int)arg1;

@end

