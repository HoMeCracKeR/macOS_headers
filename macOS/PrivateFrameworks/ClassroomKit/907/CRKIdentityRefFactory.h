//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRKIdentityConfiguration;

@interface CRKIdentityRefFactory : NSObject
{
    CRKIdentityConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CRKIdentityConfiguration *configuration; // @synthesize configuration=_configuration;
- (const void *)CMSHashingAlgorithmForSecAlgorithm:(unsigned int)arg1;
- (void)addClientAndServerAuthEKUsToParameters:(id)arg1;
- (id)certificateParametersWithCMSAlgorithm:(const void *)arg1;
- (id)keyParameters;
- (id)subject;
- (void)safeRelease:(void *)arg1;
- (struct __SecIdentity *)makeIdentityRefWithError:(id *)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

