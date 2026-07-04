/* Runtime dump - MRMarimbaLayoutManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRMarimbaLayoutManager : NSObject
{
    MRTextRenderer * _textRenderer;
    MRMarimbaLayer * _marimbaLayer;
    MPText * _text;
}

@property (retain, nonatomic) MRMarimbaLayer * marimbaLayer;
@property (retain, nonatomic) MPText * text;

- (void)dealloc;
- (MRMarimbaLayoutManager *)init;
- (MPText *)text;
- (void)setText:(MPText *)arg0;
- (struct CGPoint)shadowOffset;
- (struct OpaqueFigSubtitleRenderer *)_renderer;
- (MRTextRenderer *)textRenderer;
- (int)lineCount;
- (void)updateWithString:(NSString *)arg0;
- (struct CGRect)currentRectForEditedText;
- (MRMarimbaLayer *)marimbaLayer;
- (void)setMarimbaLayer:(MRMarimbaLayer *)arg0;

@end
