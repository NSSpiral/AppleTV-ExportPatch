/* Runtime dump - SFUnlockManager
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFUnlockManager : NSObject
{
    NSObject<OS_dispatch_queue> * _delegateQueue;
}

+ (SFUnlockManager *)sharedUnlockManager;

- (void)dealloc;
- (SFUnlockManager *)init;
- (void)enableUnlockWithDevice:(NSObject *)arg0 fromKey:(char)arg1 withPasscode:(NSString *)arg2 completionHandler:(id /* block */)arg3;
- (void)unlockEnabledWithDevice:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)establishStashBagWithCompletionHandler:(id /* block */)arg0;
- (void)unlockStateForDevice:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)disableUnlockWithDevice:(NSObject *)arg0;

@end
