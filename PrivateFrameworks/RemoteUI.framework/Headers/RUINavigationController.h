/* Runtime dump - RUINavigationController
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUINavigationController : UINavigationController
{
    int _ruiSupportedInterfaceOrientations;
}

- (unsigned int)supportedInterfaceOrientations;
- (char)canBeShownFromSuspendedState;
- (void)setSupportedInterfaceOrientations:(unsigned int)arg0;

@end
