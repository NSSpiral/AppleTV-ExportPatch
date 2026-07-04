/* Runtime dump - SKThreadSafeMutableDictionary
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKThreadSafeMutableDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
{
    int _storageLock;
    NSMutableDictionary * _storage;
}

- (SKThreadSafeMutableDictionary *)initWithNSMutableDictionary:(NSDictionary *)arg0;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (SKThreadSafeMutableDictionary *)copyWithZone:(struct _NSZone *)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void).cxx_destruct;

@end
