/* Runtime dump - SKWeakReference
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKWeakReference : NSObject
{
    id _object;
    unsigned int _objectAddress;
}

@property (readonly, nonatomic) id object;

+ (SKWeakReference *)weakReferenceWithObject:(NSObject *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSObject *)object;

@end
