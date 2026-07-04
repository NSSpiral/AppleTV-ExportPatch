/* Runtime dump - IMWeakReference
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMWeakReference : NSObject
{
    id _object;
    unsigned int _objectAddress;
}

+ (NSObject *)weakRefWithObject:(NSObject *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSObject *)object;
- (NSObject *)copyObject;
- (IMWeakReference *)initRefWithObject:(NSObject *)arg0;

@end
