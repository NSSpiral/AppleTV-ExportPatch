/* Runtime dump - SBUIBannerAction
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIBannerAction : NSObject
{
    id _actionBlock;
    NSString * _remoteViewControllerClassName;
    NSString * _remoteServiceBundleIdentifier;
}

@property (copy, nonatomic) id actionBlock;
@property (copy, nonatomic) NSString * remoteViewControllerClassName;
@property (copy, nonatomic) NSString * remoteServiceBundleIdentifier;

+ (SBUIBannerAction *)actionWithBlock:(id /* block */)arg0;

- (void)dealloc;
- (NSString *)remoteServiceBundleIdentifier;
- (NSString *)remoteViewControllerClassName;
- (void)setRemoteViewControllerClassName:(NSString *)arg0;
- (void)setRemoteServiceBundleIdentifier:(NSString *)arg0;
- (SBUIBannerAction *)initWithActionBlock:(id /* block */)arg0 remoteViewControllerClassName:(/* block */ id)arg1 remoteServiceBundleIdentifier:(NSString *)arg2;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg0;

@end
