/* Runtime dump - LTSkipAssetVisualControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl;
@interface LTSkipAssetVisualControl : BRControl
{
    BRImageControl * _imageControl;
}

- (void)layoutSubcontrols;
- (void)setImage:(ATVImage *)arg0;
- (LTSkipAssetVisualControl *)init;
- (void).cxx_destruct;

@end
