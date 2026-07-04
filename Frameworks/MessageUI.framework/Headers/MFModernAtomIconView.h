/* Runtime dump - MFModernAtomIconView
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFModernAtomIconView : UIView
{
    NSArray * _iconImages;
    float _iconPadding;
    struct CGPoint _drawingOffset;
}

@property (retain, nonatomic) NSArray * iconImages;
@property (nonatomic) float iconPadding;
@property (nonatomic) struct CGPoint drawingOffset;

- (void)setDrawingOffset:(struct CGPoint)arg0;
- (void)setIconPadding:(float)arg0;
- (void)setIconImages:(NSArray *)arg0;
- (float)preferredWidth;
- (NSArray *)iconImages;
- (struct CGPoint)drawingOffset;
- (float)iconPadding;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;

@end
