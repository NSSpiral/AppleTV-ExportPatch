/* Runtime dump - SKThreadSafeMapTable
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKThreadSafeMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration>
{
    int _storageLock;
    NSMutableArray * _storage;
}

- (SKThreadSafeMapTable *)initWithNSMapTable:(NSMapTable *)arg0;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (SKThreadSafeMapTable *)copyWithZone:(struct _NSZone *)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void).cxx_destruct;

@end
