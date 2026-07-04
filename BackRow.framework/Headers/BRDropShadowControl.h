/* Runtime dump - BRDropShadowControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl;
@interface BRDropShadowControl : BRControl
{
    BRControl * _content;
    int _shadowStyle;
    float _sizeFactor;
}

- (void)layoutSubcontrols;
- (void)setShadowStyle:(int)arg0;
- (int)shadowStyle;
- (void)setShadowSizeFactor:(float)arg0;
- (float)shadowSizeFactor;
- (void)dealloc;
- (BRDropShadowControl *)init;
- (void)_updateImages;
- (BRControl *)content;
- (void)setContent:(BRControl *)arg0;

@end
