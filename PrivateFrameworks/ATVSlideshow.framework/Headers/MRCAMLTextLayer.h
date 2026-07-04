/* Runtime dump - MRCAMLTextLayer
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRCAMLTextLayer : MRCAMLLayer
{
    MRImage * textImage;
    MRTextRenderer * textRenderer;
}

@property (retain, nonatomic) MRImage * textImage;
@property (retain, nonatomic) MRTextRenderer * textRenderer;

- (void)dealloc;
- (MRTextRenderer *)textRenderer;
- (void)setTextRenderer:(MRTextRenderer *)arg0;
- (void)setTextImage:(MRImage *)arg0;
- (MRImage *)textImage;

@end
