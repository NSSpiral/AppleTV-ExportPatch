/* Runtime dump - SKThreadSafeMutableArray
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKThreadSafeMutableArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
{
    int _storageLock;
    NSMutableArray * _storage;
}

@property (readonly, weak) NSArray * arrayRepresentation;

- (SKThreadSafeMutableArray *)initWithNSMutableArray:(NSArray *)arg0;
- (SKThreadSafeMutableArray *)init;
- (NSString *)description;
- (void)removeObjectsInArray:(NSArray *)arg0;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (SKThreadSafeMutableArray *)copyWithZone:(struct _NSZone *)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void).cxx_destruct;
- (NSArray *)arrayRepresentation;

@end
