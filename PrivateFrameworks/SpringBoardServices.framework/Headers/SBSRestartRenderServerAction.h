/* Runtime dump - SBSRestartRenderServerAction
 * Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRestartRenderServerAction : BSAction

@property (readonly, nonatomic) NSURL * targetURL;

+ (NSURL *)restartActionWithTargetRelaunchURL:(NSURL *)arg0;

- (NSURL *)targetURL;

@end
