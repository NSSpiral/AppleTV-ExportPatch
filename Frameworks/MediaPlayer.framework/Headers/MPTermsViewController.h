/* Runtime dump - MPTermsViewController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTermsViewController : UIViewController
{
    char _needToLoadTerms;
    SSTermsAndConditions * _termsAndConditions;
    <MPTermsViewControllerDelegate> * _delegate;
    UIActivityIndicatorView * _activityIndicatorView;
    UIView * _topSpacerView;
    UIView * _bottomSpacerView;
    UITextView * _termsTextView;
}

@property (weak, nonatomic) <MPTermsViewControllerDelegate> * delegate;
@property (retain, nonatomic) UIActivityIndicatorView * activityIndicatorView;
@property (retain, nonatomic) UIView * topSpacerView;
@property (retain, nonatomic) UIView * bottomSpacerView;
@property (retain, nonatomic) UITextView * termsTextView;

- (void)_cancelAction:(UIAlertAction *)arg0;
- (void)_setupViewForLoadingTerms;
- (UIActivityIndicatorView *)activityIndicatorView;
- (void)_startLoadingTerms;
- (UITextView *)termsTextView;
- (void)_userAcceptedTerms;
- (void)setTermsTextView:(UITextView *)arg0;
- (void)setActivityIndicatorView:(UIActivityIndicatorView *)arg0;
- (void)setTopSpacerView:(UIView *)arg0;
- (void)setBottomSpacerView:(UIView *)arg0;
- (UIView *)topSpacerView;
- (UIView *)bottomSpacerView;
- (void)_acceptAction:(NSObject *)arg0;
- (void)_loadedTerms:(id)arg0;
- (void)_failedToLoadTermsWithError:(NSError *)arg0;
- (void)_setupViewForShowingTerms;
- (void)_setupViewForFailedToLoadTerms;
- (void)_failedToAcceptTermsWithError:(NSError *)arg0;
- (void)_setupViewForFailedToAcceptTerms;
- (void)setDelegate:(<MPTermsViewControllerDelegate> *)arg0;
- (MPTermsViewController *)init;
- (<MPTermsViewControllerDelegate> *)delegate;
- (char)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidAppear:(char)arg0;
- (void).cxx_destruct;

@end
