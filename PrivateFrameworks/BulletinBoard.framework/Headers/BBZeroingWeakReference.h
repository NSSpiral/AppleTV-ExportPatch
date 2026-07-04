/* Runtime dump - BBZeroingWeakReference
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBZeroingWeakReference : NSObject
{
    id _object;
    NSString * _debug;
}

+ (NSObject *)referenceWithObject:(NSObject *)arg0;

- (void)dealloc;
- (BBZeroingWeakReference *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSObject *)object;
- (BBZeroingWeakReference *)initWithObject:(NSObject *)arg0;

@end
