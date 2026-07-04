/* Runtime dump - MFMailComposeRemoteViewController
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeRemoteViewController : _UIRemoteViewController <MFMailComposeRemoteHost>
{
    <MFMailComposeRemoteViewControllerDelegate> * _delegate;
}

@property (nonatomic) <MFMailComposeRemoteViewControllerDelegate> * delegate;

+ (MFMailComposeRemoteViewController *)requestViewControllerWithConnectionHandler:(<ATVSecureKeyStandardLoaderConnectionHandling> *)arg0;
+ (MFMailComposeRemoteViewController *)serviceViewControllerInterface;
+ (NSXPCInterface *)exportedInterface;

- (void)serviceCompositionFinishedWithResult:(int)arg0 error:(NSError *)arg1;
- (void)bodyFinishedDrawing;
- (void)setDelegate:(<MFMailComposeRemoteViewControllerDelegate> *)arg0;
- (<MFMailComposeRemoteViewControllerDelegate> *)delegate;
- (void)viewServiceDidTerminateWithError:(NSError *)arg0;

@end
