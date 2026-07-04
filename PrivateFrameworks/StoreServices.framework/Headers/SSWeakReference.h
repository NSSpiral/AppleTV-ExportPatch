/* Runtime dump - SSWeakReference
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSWeakReference : NSObject
{
    id _object;
    unsigned int _objectAddress;
}

@property (readonly, nonatomic) id object;

+ (NSObject *)weakReferenceWithObject:(NSObject *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSObject *)object;

@end
