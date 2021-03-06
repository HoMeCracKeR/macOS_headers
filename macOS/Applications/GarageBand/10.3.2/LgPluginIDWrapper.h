//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface LgPluginIDWrapper : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _manufacturer;
    unsigned int _product;
    unsigned int _plugin;
}

+ (id)pluginIDWrapperWithPluginID:(struct LgPluginID)arg1;
+ (BOOL)supportsSecureCoding;
@property unsigned int plugin; // @synthesize plugin=_plugin;
@property unsigned int product; // @synthesize product=_product;
@property unsigned int manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly) struct LgPluginID pluginID;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPluginID:(struct LgPluginID)arg1;

@end

