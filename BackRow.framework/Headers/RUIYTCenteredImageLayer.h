/* Runtime dump - RUIYTCenteredImageLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl;
@interface RUIYTCenteredImageLayer : BRControl
{
    BRImageControl * _imageLayer;
}

- (void)layoutSubcontrols;
- (struct CGRect)focusCursorFrame;
- (struct CGRect)frameForCellBounds:(id)arg0;
- (RUIYTCenteredImageLayer *)initWithImage:(UIImage *)arg0;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void).cxx_destruct;

@end
