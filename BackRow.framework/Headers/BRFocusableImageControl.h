/* Runtime dump - BRFocusableImageControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRImageControl.h>
@interface BRFocusableImageControl : BRImageControl
{
    ATVImage * _focusedImage;
    ATVImage * _unfocusedImage;
    ATVImage * _disabledImage;
    char _dimsWhenDisabled;
    char _disabled;
}

- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (ATVImage *)focusedImage;
- (void)setFocusedImage:(ATVImage *)arg0;
- (NSString *)preferredActionForKey:(NSString *)arg0;
- (void)setUnfocusedImage:(ATVImage *)arg0;
- (void)_updateImage;
- (ATVImage *)unfocusedImage;
- (void)setDisabledImage:(ATVImage *)arg0;
- (ATVImage *)disabledImage;
- (void)setDimsWhenDisabled:(char)arg0;
- (char)dimsWhenDisabled;
- (void)_updateDim;
- (void)dealloc;
- (char)disabled;
- (void)setDisabled:(char)arg0;

@end
