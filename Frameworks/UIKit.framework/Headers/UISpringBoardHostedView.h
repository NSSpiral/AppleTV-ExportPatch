/* Runtime dump - UISpringBoardHostedView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISpringBoardHostedView : UIView
{
    NSString * _remoteViewIdentifier;
    UIWindow * _remoteWindow;
    char _remoteViewOpaque;
}

- (void)dealloc;
- (void)unregister;
- (void)setRemoteViewOpaque:(char)arg0;
- (void)registerWithIdentifier:(NSString *)arg0 andController:(BRController *)arg1;
- (NSString *)remoteViewIdentifier;

@end
