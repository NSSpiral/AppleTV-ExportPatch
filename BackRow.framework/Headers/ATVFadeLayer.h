/* Runtime dump - ATVFadeLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface ATVFadeLayer : BRControl
{
    int _orientation;
    float _maxAlpha;
    float _minAlpha;
}

- (ATVFadeLayer *)initWithOrientation:(int)arg0 maxAlpha:(float)arg1 minAlpha:(float)arg2;
- (id)_topFadeFilters;
- (id)_bottomFadeFilters;
- (id)_leftFadeFilters;
- (id)_rightFadeFilters;
- (ATVFadeLayer *)initWithOrientation:(int)arg0;

@end
