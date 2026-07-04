/* Runtime dump - BRScrollingTextPlane
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRScrollingTextPlane : BRControl
{
    NSAttributedString * _string;
    float _pursuitGap;
    struct CGSize _cachedNaturalTextSize;
}

+ (Class)layerClass;

- (void)setPursuitGap:(float)arg0;
- (struct CGSize)naturalTextSize;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setAttributedString:(NSAttributedString *)arg0;
- (void)setTileSize:(struct CGSize)arg0;
- (NSString *)attributedString;

@end
