/* Runtime dump - ADAdSpaceRemoteViewController
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdSpaceRemoteViewController : _UIRemoteViewController
{
    <ADAdSpaceRemoteViewControllerDelegate> * _delegate;
}

@property (weak, nonatomic) <ADAdSpaceRemoteViewControllerDelegate> * delegate;

+ (ADAdSpaceRemoteViewController *)serviceViewControllerInterface;
+ (void)adSpaceRemoteViewControllerWithCompletionHandler:(id /* block */)arg0;

- (void)dealloc;
- (void)setDelegate:(<ADAdSpaceRemoteViewControllerDelegate> *)arg0;
- (<ADAdSpaceRemoteViewControllerDelegate> *)delegate;
- (void)viewServiceDidTerminateWithError:(NSError *)arg0;

@end
