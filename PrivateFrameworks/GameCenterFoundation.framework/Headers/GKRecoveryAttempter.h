/* Runtime dump - GKRecoveryAttempter
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKRecoveryAttempter : NSObject
{
    id _attemptRecovery;
}

+ (GKRecoveryAttempter *)recoveryAttempterUsingHandler:(id /* block */)arg0;

- (void)dealloc;
- (char)attemptRecoveryFromError:(NSError *)arg0 optionIndex:(unsigned int)arg1;
- (void)attemptRecoveryFromError:(NSError *)arg0 optionIndex:(unsigned int)arg1 delegate:(NSObject *)arg2 didRecoverSelector:(SEL)arg3 contextInfo:(void *)arg4;

@end
