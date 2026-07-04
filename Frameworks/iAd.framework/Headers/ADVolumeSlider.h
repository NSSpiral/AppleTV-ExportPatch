/* Runtime dump - ADVolumeSlider
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADVolumeSlider : MPVolumeSlider
{
    UIColor * _maximumTintUsedForTrackImageColor;
    UIColor * _minimumTintUsedForTrackImageColor;
}

- (void)_availableRoutesDidChangeNotification:(NSNotification *)arg0;
- (NSObject *)_newVolumeWarningView;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (ADVolumeSlider *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (struct CGRect)trackRectForBounds:(id)arg0;
- (struct CGRect)minimumValueImageRectForBounds:(id)arg0;
- (struct CGRect)maximumValueImageRectForBounds:(id)arg0;
- (void)_updateTrackTintForVolumeControlAvailability;
- (UIColor *)_trackImageWithTintColor:(float)arg0;

@end
