/* Runtime dump - BRComboMenuItemLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRImageControl, BRMarqueeTextControl, BRTextControl;
@interface BRComboMenuItemLayer : BRControl
{
    BRControl * _background;
    BRImageControl * _thumbnailLayer;
    <BRImageProxy> * _imageProxy;
    BRMarqueeTextControl * _titleLayer;
    BRTextControl * _subtitleLayer;
    BRTextControl * _leftTextLayer;
    BRTextControl * _middleTextLayer;
    BRControl * _bottomRightControl;
    BRImageControl * _topRightImageLayer;
    float _thumbnailPaddingFactor;
    float _thumbnailLayerAspect;
    char _dimmed;
}

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (struct CGRect)focusCursorFrame;
- (void)setMiddleText:(NSString *)arg0;
- (void)setThumbnailImageProxy:(NSObject *)arg0;
- (void)setBottomRightControl:(BRControl *)arg0;
- (void)setTopRightImage:(UIImage *)arg0;
- (void)setThumbnailLayerAspectRatio:(float)arg0;
- (NSString *)axSelectedItemText;
- (void)setThumbnailPaddingFactor:(float)arg0;
- (void)_resolveFocusedDimming;
- (void)_artworkAssetLoadedNotification:(NSNotification *)arg0;
- (NSDictionary *)_comboMenuItemTitleTextAttributes;
- (NSDictionary *)_comboMenuItemSubtitleTextAttributes;
- (float)thumbnailPaddingFactor;
- (float)thumbnailLayerAspectRatio;
- (void)dealloc;
- (BRComboMenuItemLayer *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)accessibilityLabel;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (char)isAccessibilityElement;
- (void)_setThumbnail:(UIImage *)arg0;
- (void)setDimmed:(char)arg0;
- (char)dimmed;
- (float)defaultRowHeight;
- (void)setLeftText:(NSString *)arg0;

@end
