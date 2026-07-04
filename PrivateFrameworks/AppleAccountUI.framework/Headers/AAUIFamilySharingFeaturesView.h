/* Runtime dump - AAUIFamilySharingFeaturesView
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilySharingFeaturesView : UIView
{
    int _context;
    UIImageView * _itunesIcon;
    UIImageView * _musicIcon;
    UIImageView * _photosIcon;
    UIImageView * _fmfIcon;
    UIImageView * _calendarIcon;
    UIImageView * _fmipIcon;
    UILabel * _inviteHeaderLabel;
    UILabel * _purchaseShaingLabel;
    UILabel * _musicSharingLabel;
    UILabel * _photoSharingLabel;
    UILabel * _locationSharingLabel;
    UILabel * _calendarSharingLabel;
    UILabel * _lostDeviceHelpLabel;
    UIButton * _learnMoreButton;
    char _shouldHideLocationSharing;
}

- (float)desiredHeightForWidth:(float)arg0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (float)_heightForText:(NSString *)arg0 width:(float)arg1;
- (NSString *)_labelWithStringAtKey:(NSString *)arg0;
- (id)_imageViewWithIconNamed:(id)arg0 addBorder:(char)arg1;
- (void)_learnMoreButtonTapped:(id)arg0;
- (void)_layoutFeatureLabel:(NSString *)arg0 withIconView:(UIImageView *)arg1 underIconView:(NSObject *)arg2 constrainedToWidth:(float)arg3;
- (NSString *)_contextSensitiveLocalizedStringWithKey:(NSString *)arg0;
- (AAUIFamilySharingFeaturesView *)initWithContext:(int)arg0 hideLocationSharing:(char)arg1;

@end
