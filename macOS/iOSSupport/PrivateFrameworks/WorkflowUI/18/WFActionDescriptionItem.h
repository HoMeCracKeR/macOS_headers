//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface WFActionDescriptionItem : NSObject
{
    NSString *_itemTitle;
    NSAttributedString *_itemDescription;
}

+ (id)itemWithTitle:(id)arg1 attributedDescription:(id)arg2;
+ (id)itemWithTitle:(id)arg1 description:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSAttributedString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(readonly, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
- (id)initWithTitle:(id)arg1 description:(id)arg2;

@end

