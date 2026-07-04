/* Runtime dump - BRPhotoBrowserBannerButton
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRImageControl, BRMessageButton, BRTextControl;
@interface BRPhotoBrowserBannerButton : BRControl
{
    BRControl * _focusControl;
    BRImageControl * _imageControl;
    ATVImage * _focusedImage;
    ATVImage * _unFocusedImage;
    BRTextControl * _textControl;
}

+ (BRPhotoBrowserBannerButton *)slideshowButton;
+ (BRPhotoBrowserBannerButton *)removeSavedSearchButton;
+ (BRPhotoBrowserBannerButton *)saveSearchButton;
+ (BRMessageButton *)button;
+ (BRPhotoBrowserBannerButton *)defaultTextAttributes;

- (void)layoutSubcontrols;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (NSArray *)accessibilityTraitsList;
- (ATVImage *)focusedImage;
- (void)setFocusedImage:(ATVImage *)arg0;
- (void)setUnFocusedImage:(ATVImage *)arg0;
- (ATVImage *)unFocusedImage;
- (void)_updateContents;
- (void)dealloc;
- (BRPhotoBrowserBannerButton *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setAttributedText:(NSAttributedString *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;

@end
