/* Runtime dump - SBFWeakReference
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWeakReference : NSObject
{
    id _object;
}

+ (NSObject *)weakReferenceWithObject:(NSObject *)arg0;

- (void)dealloc;
- (SBFWeakReference *)init;
- (NSObject *)object;
- (SBFWeakReference *)initWithObject:(NSObject *)arg0;

@end
