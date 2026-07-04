/* Runtime dump - MusicCloudProgressView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/MusicCloudAdView.h>

@class BRProgressBarWidget, BRWaitSpinnerControl;
@interface MusicCloudProgressView : MusicCloudAdView
{
    BRProgressBarWidget * _progressBar;
    BRWaitSpinnerControl * _loadingSpinner;
}

- (void)layoutSubcontrols;
- (char)shouldDisplayConfirmationButton;
- (id)ProgressBinding;
- (void)_updateBoundProgress;
- (void)bindProgressBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)dealloc;
- (MusicCloudProgressView *)init;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void).cxx_destruct;

@end
