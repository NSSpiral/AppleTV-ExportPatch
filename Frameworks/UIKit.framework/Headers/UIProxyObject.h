/* Runtime dump - UIProxyObject
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIProxyObject : NSObject <NSCoding>
{
    NSString * proxiedObjectIdentifier;
}

+ (void)addMappingFromIdentifier:(NSString *)arg0 toObject:(NSObject *)arg1 forCoder:(NSCoder *)arg2;
+ (void)addMappings:(NSURLFileTypeMappings *)arg0 forCoder:(NSCoder *)arg1;
+ (void)removeMappingsForCoder:(NSCoder *)arg0;
+ (struct __CFDictionary *)proxyDecodingMap;
+ (NSCoder *)mappedObjectForCoder:(NSCoder *)arg0 withIdentifier:(NSString *)arg1;

- (void)dealloc;
- (UIProxyObject *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)proxiedObjectIdentifier;
- (void)setProxiedObjectIdentifier:(NSString *)arg0;

@end
