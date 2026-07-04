/* Runtime dump - CUTWeakReference
 * Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTWeakReference : NSObject
{
    id _object;
    unsigned int _objectAddress;
}

+ (NSObject *)weakRefWithObject:(NSObject *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSObject *)object;

@end
