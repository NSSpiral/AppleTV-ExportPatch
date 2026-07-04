/* Runtime dump - RegionFormatSampleView
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface RegionFormatSampleView : UIView <PSHeaderFooterView>
{
    id _labels;
    float _sized;
    id _labelTopPadding;
}

- (RegionFormatSampleView *)initWithSpecifier:(PSPhoneNumberSpecifier *)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (float)preferredHeightForWidth:(float)arg0;
- (void)setTextForRegionExample:(id)arg0;
- (NSString *)generateRegionSampleLabel;
- (id)_accessibilityLabels;

@end
