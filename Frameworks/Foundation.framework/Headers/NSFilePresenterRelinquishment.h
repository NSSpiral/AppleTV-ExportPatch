/* Runtime dump - NSFilePresenterRelinquishment
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilePresenterRelinquishment : NSObject
{
    NSCountedSet * _blockingAccessClaimIDs;
    id _reacquirer;
}

- (char)addBlockingAccessClaimID:(NSObject *)arg0;
- (void)setReacquirer:(id)arg0;
- (void)removeBlockingAccessClaimID:(NSObject *)arg0;
- (void)removeAllBlockingAccessClaimIDs;
- (void)removeBlockingAccessClaimID:(NSObject *)arg0 thenContinue:(id)arg1;
- (void)dealloc;

@end
