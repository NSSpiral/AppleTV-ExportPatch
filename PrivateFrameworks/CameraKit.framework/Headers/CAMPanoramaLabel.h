/* Runtime dump - CAMPanoramaLabel
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMPanoramaLabel : UIView <_UIBackdropViewObserver>
{
    _UIBackdropView * _backdropView;
    _UILegibilityView * _legibilityView;
    _UILegibilitySettingsProvider * _legibilitySettingsProvider;
    NSString * _text;
}

@property (copy, nonatomic) NSString * text;

- (CAMPanoramaLabel *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void).cxx_destruct;
- (void)backdropViewDidChange:(_UIBackdropView *)arg0;
- (void)updateToContentSize:(NSObject *)arg0;
- (void)_updateLegibilityView;

@end
