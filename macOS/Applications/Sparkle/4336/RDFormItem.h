//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDItem.h"

@class RDPageForm;

@interface RDFormItem : RDItem
{
    BOOL _contactForm;
    RDPageForm *_form;
}

@property(nonatomic) BOOL contactForm; // @synthesize contactForm=_contactForm;
@property(retain, nonatomic) RDPageForm *form; // @synthesize form=_form;
- (void).cxx_destruct;
- (void)generateHtml:(id)arg1 context:(id)arg2;
- (BOOL)stretchToPageWidth;

@end

