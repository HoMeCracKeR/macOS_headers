//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface RDVideoItemInfo : NSObject
{
    NSString *_videoSource;
    NSString *_videoID;
    NSString *_title;
    NSString *_thumbURL;
    NSString *_highResThumbURL;
    NSString *_recordingYMD;
    NSString *_views;
    long long _duration;
    NSData *_previewImage;
}

@property(retain, nonatomic) NSData *previewImage; // @synthesize previewImage=_previewImage;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *views; // @synthesize views=_views;
@property(retain, nonatomic) NSString *recordingYMD; // @synthesize recordingYMD=_recordingYMD;
@property(retain, nonatomic) NSString *highResThumbURL; // @synthesize highResThumbURL=_highResThumbURL;
@property(retain, nonatomic) NSString *thumbURL; // @synthesize thumbURL=_thumbURL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(retain, nonatomic) NSString *videoSource; // @synthesize videoSource=_videoSource;
- (void).cxx_destruct;
- (long long)compareViewsDescending:(id)arg1;

@end

