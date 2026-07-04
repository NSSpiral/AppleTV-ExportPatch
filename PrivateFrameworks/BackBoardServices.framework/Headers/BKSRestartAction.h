/* Runtime dump - BKSRestartAction
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSRestartAction : BSAction

@property (readonly, nonatomic) char shouldShowAppleLogo;

+ (BKSRestartAction *)restartActionWithAppleLogoDesired:(char)arg0;

- (char)shouldShowAppleLogo;

@end
