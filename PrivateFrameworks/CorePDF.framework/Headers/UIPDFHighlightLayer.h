/* Runtime dump - UIPDFHighlightLayer
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFHighlightLayer : CALayer
{
    struct CGPath * _clipPath;
    struct CGPath * _borderPath;
    struct CGPoint offset;
}

@property (nonatomic) struct CGPath * clipPath;
@property (nonatomic) struct CGPath * borderPath;
@property (nonatomic) struct CGPoint offset;

- (void)dealloc;
- (void)setOffset:(struct CGPoint)arg0;
- (struct CGPoint)offset;
- (struct CGPath *)clipPath;
- (void)setClipPath:(struct CGPath *)arg0;
- (struct CGPath *)borderPath;
- (void)setBorderPath:(struct CGPath *)arg0;

@end
