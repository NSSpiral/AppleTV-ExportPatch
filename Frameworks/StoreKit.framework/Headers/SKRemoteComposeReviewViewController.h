/* Runtime dump - SKRemoteComposeReviewViewController
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRemoteComposeReviewViewController : _UIRemoteViewController <SKUIClientComposeReviewViewController>
{
    SKComposeReviewViewController * _composeReviewViewController;
}

@property (weak, nonatomic) SKComposeReviewViewController * composeReviewViewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SKRemoteComposeReviewViewController *)serviceViewControllerInterface;
+ (NSXPCInterface *)exportedInterface;

- (void)didPrepareWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (void)promptForStarRating;
- (void)setComposeReviewViewController:(SKComposeReviewViewController *)arg0;
- (void)didFinishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (SKComposeReviewViewController *)composeReviewViewController;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewServiceDidTerminateWithError:(NSError *)arg0;

@end
