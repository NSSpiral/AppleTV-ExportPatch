/* Runtime dump - PDCmdBehavior
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDCmdBehavior : PDAnimateBehavior
{
    NSString * mCmd;
    int mBehaviorType;
}

- (id)cmd;
- (void)setCmd:(id)arg0;
- (int)behaviorType;
- (void)setBehaviorType:(int)arg0;

@end
