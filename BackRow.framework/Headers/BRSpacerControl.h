/* Runtime dump - BRSpacerControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRSpacerControl : BRControl
{
    float _pixels;
}

+ (BRSpacerControl *)spacerWithPixels:(float)arg0;

- (void)setPixels:(float)arg0;
- (float)pixels;
- (BRSpacerControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;

@end
