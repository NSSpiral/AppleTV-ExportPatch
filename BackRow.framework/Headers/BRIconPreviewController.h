/* Runtime dump - BRIconPreviewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface BRIconPreviewController : BRControl
{
    BRTextControl * _message;
    BRTextControl * _instruction;
    BRImageControl * _image;
    float _iconHeightFactor;
    float _horizontalPosition;
    float _verticalPosition;
    float _messageVerticalPosition;
}

- (void)layoutSubcontrols;
- (void)setIconHeightFactor:(float)arg0;
- (void)setIconVerticalPosition:(float)arg0;
- (void)setIconHorizontalPosition:(float)arg0;
- (void)setMessageVerticalPosition:(float)arg0;
- (void)dealloc;
- (void)setImage:(BRImageControl *)arg0;
- (BRIconPreviewController *)init;
- (NSString *)accessibilityLabel;
- (void)setMessage:(BRTextControl *)arg0;
- (void)setInstructions:(NSString *)arg0;

@end
