//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <ContactsUI/CNContactContentViewController-Protocol.h>
#import <ContactsUI/CNContactViewHostProtocol-Protocol.h>

@class NSExtension, NSString;
@protocol CNContactViewControllerPPTDelegate, CNContactViewHostProtocol, NSCopying;

__attribute__((visibility("hidden")))
@interface CNContactViewHostViewController : _UIRemoteViewController <CNContactContentViewController, CNContactViewHostProtocol>
{
    id <CNContactViewHostProtocol> _delegate;
    id <CNContactViewControllerPPTDelegate> _pptDelegate;
    id <NSCopying> _currentRequestIdentifier;
    NSExtension *_extension;
}

+ (BOOL)getViewController:(CDUnknownBlockType)arg1;
+ (id)contextForIdentifier:(id)arg1;
+ (id)contactViewExtension;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) id <NSCopying> currentRequestIdentifier; // @synthesize currentRequestIdentifier=_currentRequestIdentifier;
@property(nonatomic) __weak id <CNContactViewControllerPPTDelegate> pptDelegate; // @synthesize pptDelegate=_pptDelegate;
@property(nonatomic) __weak id <CNContactViewHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)didChangePreferredContentSize:(struct CGSize)arg1;
- (void)isPresentingEditingController:(BOOL)arg1;
- (void)isPresentingFullscreen:(BOOL)arg1;
- (void)didDeleteContact:(id)arg1;
- (void)didCompleteWithContact:(id)arg1;
- (void)updateEditing:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3;
- (BOOL)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)toggleEditing;
- (void)editCancel;
- (void)didChangeToEditMode:(BOOL)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;
- (id)protocolContext;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

