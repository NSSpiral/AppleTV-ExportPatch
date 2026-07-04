/* Runtime dump - MRFlipupRenderable
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRFlipupRenderable : MUPoolObject
{
    float zPosition;
    char needsBlend;
    char isBreak;
    id modelViewMatrix;
    float color;
    float opacity;
    MRImage * slide;
    MRCroppingSprite * sprite;
    struct CGPoint position;
    struct CGSize size;
    id flippedModelViewMatrix;
    MRCroppingSprite * reflectionSprite;
    struct CGPoint reflectionPosition;
}

@property (retain, nonatomic) MRImage * slide;
@property (retain, nonatomic) MRCroppingSprite * sprite;
@property (retain, nonatomic) MRCroppingSprite * reflectionSprite;

+ (struct ? *)poolInfo;

- (void)dealloc;
- (void)purge;
- (void)setSlide:(MRImage *)arg0;
- (MRCroppingSprite *)sprite;
- (void)setSprite:(MRCroppingSprite *)arg0;
- (MRCroppingSprite *)reflectionSprite;
- (void)setReflectionSprite:(MRCroppingSprite *)arg0;
- (MRImage *)slide;

@end
