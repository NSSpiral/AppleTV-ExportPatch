/* Runtime dump - SBFPasscodeLockDisableAssertion
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFPasscodeLockDisableAssertion : NSObject
{
    NSString * _identifier;
    int _type;
    SBFWeakReference * _weakController;
}

- (void)dealloc;
- (NSString *)description;
- (int)type;
- (SBFPasscodeLockDisableAssertion *)initWithIdentifier:(NSString *)arg0 type:(int)arg1 withController:(BRController *)arg2;

@end
