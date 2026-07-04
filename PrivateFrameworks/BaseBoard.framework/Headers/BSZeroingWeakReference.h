/* Runtime dump - BSZeroingWeakReference
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSZeroingWeakReference : NSObject
{
    id _object;
    NSString * _debug;
    unsigned long _objectAddress;
}

+ (NSObject *)referenceWithObject:(NSObject *)arg0;

- (void)dealloc;
- (BSZeroingWeakReference *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSObject *)object;
- (BSZeroingWeakReference *)initWithObject:(NSObject *)arg0;

@end
