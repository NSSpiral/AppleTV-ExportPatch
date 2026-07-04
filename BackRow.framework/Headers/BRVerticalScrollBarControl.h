/* Runtime dump - BRVerticalScrollBarControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl;
@interface BRVerticalScrollBarControl : BRControl
{
    BRImageControl * _image;
    float _position;
}

- (void)layoutSubcontrols;
- (void)setScrollPosition:(float)arg0;
- (void)dealloc;
- (void)setImage:(BRImageControl *)arg0;
- (BRVerticalScrollBarControl *)init;
- (BRImageControl *)image;

@end
