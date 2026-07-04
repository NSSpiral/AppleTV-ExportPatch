/* Runtime dump - BRUnboundedSelectionLozengeLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSelectionLozengeLayer.h>
@interface BRUnboundedSelectionLozengeLayer : BRSelectionLozengeLayer
{
    ATVImage * _topImage;
    ATVImage * _bottomImage;
    char _brighterImage;
    char _focusedImage;
}

- (void)layoutSubcontrols;
- (void)setFocused:(char)arg0;
- (void)setUseBrighterUnselectedImage:(char)arg0;
- (char)useBrighterUnselectedImage;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (BRUnboundedSelectionLozengeLayer *)init;
- (void)_updateImages;

@end
