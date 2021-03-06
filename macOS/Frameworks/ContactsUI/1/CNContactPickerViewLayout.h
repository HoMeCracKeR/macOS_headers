//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CNContactPickerViewLayout : NSObject
{
    BOOL _groupListVisible;
    BOOL _contactCardVisible;
}

+ (id)layoutWithGroupListVisible:(BOOL)arg1 contactCardVisible:(BOOL)arg2;
@property(readonly, nonatomic, getter=isContactCardVisible) BOOL contactCardVisible; // @synthesize contactCardVisible=_contactCardVisible;
@property(readonly, nonatomic, getter=isGroupListVisible) BOOL groupListVisible; // @synthesize groupListVisible=_groupListVisible;
- (id)listViewsInViews:(id)arg1;
- (id)topBarViewsInViews:(id)arg1;
- (id)constraintsWithMetrics:(id)arg1 views:(id)arg2;
- (void)horizontallyAlignViews:(id)arg1 withBuilder:(id)arg2 spacing:(double)arg3 insetMetricName:(id)arg4;
- (void)addContactCardViewConstraintsWithBuilder:(id)arg1;
- (void)addContentViewConstraintsWithBuilder:(id)arg1;
- (void)addGroupListConstraintsWithBuilder:(id)arg1;
- (void)addTopBarConstraints:(id)arg1 withViews:(id)arg2;
- (id)initWithGroupListVisible:(BOOL)arg1 contactCardVisible:(BOOL)arg2;

@end

