//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class CDPPrintBorderView, NSString, NSTextField;

@interface CDPRecoveryKeyPrintController : NSViewController
{
    NSString *_cdpKeyPrintText;
    NSTextField *_cdpKeyPrintTextField;
    CDPPrintBorderView *_cdpRecoveryKeyBorderView;
}

@property(retain) CDPPrintBorderView *cdpRecoveryKeyBorderView; // @synthesize cdpRecoveryKeyBorderView=_cdpRecoveryKeyBorderView;
@property(retain) NSTextField *cdpKeyPrintTextField; // @synthesize cdpKeyPrintTextField=_cdpKeyPrintTextField;
@property(copy, nonatomic) NSString *cdpKeyPrintText; // @synthesize cdpKeyPrintText=_cdpKeyPrintText;
- (void).cxx_destruct;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

@end

