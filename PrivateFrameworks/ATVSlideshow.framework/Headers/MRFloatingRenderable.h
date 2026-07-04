/* Runtime dump - MRFloatingRenderable
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRFloatingRenderable : MUPoolObject
{
    MRSlideProvider * provider;
    MRImage * slide;
    struct CGSize size;
    float shadowWidth;
    float shadowHeight;
    unsigned int vboOffsetPlain;
    unsigned int vboOffsetSoft;
    unsigned int vboOffsetShadow;
    float aspectRatio;
    float scale;
    struct CGPoint bottomLeft;
    struct CGPoint topRight;
    MRFloatingRenderable * next;
}

@property (retain, nonatomic) MRImage * slide;

+ (void)initialize;
+ (struct ? *)poolInfo;

- (void)dealloc;
- (void)purge;
- (void)setSlide:(MRImage *)arg0;
- (MRImage *)slide;

@end
