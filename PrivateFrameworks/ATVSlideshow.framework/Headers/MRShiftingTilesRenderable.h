/* Runtime dump - MRShiftingTilesRenderable
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRShiftingTilesRenderable : NSObject
{
    MRImage * slide;
    MRCroppingSprite * sprite;
    struct CGPoint position;
    struct CGSize size;
    char isBreak;
}

@property (retain, nonatomic) MRImage * slide;
@property (retain, nonatomic) MRCroppingSprite * sprite;

- (void)dealloc;
- (void)setSlide:(MRImage *)arg0;
- (MRCroppingSprite *)sprite;
- (void)setSprite:(MRCroppingSprite *)arg0;
- (MRImage *)slide;

@end
