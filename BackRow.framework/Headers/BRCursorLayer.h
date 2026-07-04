/* Runtime dump - BRCursorLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMultiPartWidgetLayer.h>
@interface BRCursorLayer : BRMultiPartWidgetLayer
{
    float _radius;
    float _haloPercentage;
}

- (float)haloPercentage;
- (void)applyMapForCornerRadius:(float)arg0;
- (void)setHaloPercentage:(float)arg0;
- (BRCursorLayer *)init;
- (float)cornerRadius;
- (void)setCornerRadius:(float)arg0;

@end
