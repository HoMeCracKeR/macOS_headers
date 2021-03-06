//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPTextCommand.h"

@class NSDictionary, NSSet;

@interface TSWPRevertStylesCommand : TSWPTextCommand
{
    NSSet *_styleClasses;
    NSDictionary *_changeDetails;
}

+ (struct _NSRange)clearAnonymousParagraphStylesInStorage:(id)arg1 selection:(id)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
+ (struct _NSRange)clearAnonymousListStylesInStorage:(id)arg1 selection:(id)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
+ (struct _NSRange)clearAnonymousCharacterStylesInStorage:(id)arg1 selection:(id)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
@property(retain, nonatomic) NSDictionary *changeDetails; // @synthesize changeDetails=_changeDetails;
- (void).cxx_destruct;
- (void)doUndoRedo;
- (void)doCommit;
- (int)persistenceKind;
- (id)actionString;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 styleClasses:(id)arg3;

@end

