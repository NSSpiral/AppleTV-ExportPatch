/* Runtime dump - UIKBHandwritingView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingView : UIKBKeyView <UIGestureRecognizerDelegate>
{
    UIKBHandwritingStrokeView * _strokeView;
    float _inkWidth;
    struct CGColor * _inkColor;
    struct CGImage * _inkMask;
    NSMutableArray * _interpolatedPaths;
    UIBezierPath * _currentPath;
    UIKBHandwritingStrokePointFIFO * _strokeFIFO;
    UIKBHandwritingBoxcarFilterPointFIFO * _smoothingFIFO;
    UIKBHandwritingQuadCurvePointFIFO * _interpolatingFIFO;
}

@property (nonatomic) float inkWidth;
@property (nonatomic) struct CGColor * inkColor;
@property (nonatomic) struct CGImage * inkMask;
@property (retain, nonatomic) NSMutableArray * interpolatedPaths;
@property (retain, nonatomic) UIBezierPath * currentPath;
@property (retain, nonatomic) UIKBHandwritingStrokePointFIFO * strokeFIFO;
@property (retain, nonatomic) UIKBHandwritingBoxcarFilterPointFIFO * smoothingFIFO;
@property (retain, nonatomic) UIKBHandwritingQuadCurvePointFIFO * interpolatingFIFO;
@property (retain, nonatomic) UIKBHandwritingStrokeView * strokeView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (UIKBHandwritingView *)initWithFrame:(struct CGRect)arg0 keyplane:(struct CGSize)arg1 key:(NSString *)arg2;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)setRenderConfig:(UIKBRenderConfig *)arg0;
- (char)cancelTouchTracking;
- (void)log;
- (void)updateForKeyplane:(id)arg0 key:(NSString *)arg1;
- (float)inkWidth;
- (void)send;
- (void)clearAndNotify:(char)arg0;
- (char)shouldCache;
- (void)deleteStrokesAtIndexes:(NSArray *)arg0;
- (struct CGColor *)inkColor;
- (struct CGImage *)inkMask;
- (NSMutableArray *)interpolatedPaths;
- (UIBezierPath *)currentPath;
- (void)setInkMask:(struct CGImage *)arg0;
- (void)setInkWidth:(float)arg0;
- (void)updateInkColor;
- (void)setStrokeView:(UIKBHandwritingStrokeView *)arg0;
- (void)setInterpolatedPaths:(NSMutableArray *)arg0;
- (UIKBHandwritingStrokeView *)strokeView;
- (void)setInterpolatingFIFO:(UIKBHandwritingQuadCurvePointFIFO *)arg0;
- (UIKBHandwritingQuadCurvePointFIFO *)interpolatingFIFO;
- (void)setSmoothingFIFO:(UIKBHandwritingBoxcarFilterPointFIFO *)arg0;
- (UIKBHandwritingBoxcarFilterPointFIFO *)smoothingFIFO;
- (void)setStrokeFIFO:(UIKBHandwritingStrokePointFIFO *)arg0;
- (UIKBHandwritingStrokePointFIFO *)strokeFIFO;
- (void)setInkColor:(struct CGColor *)arg0;
- (void)setCurrentPath:(UIBezierPath *)arg0;
- (void)addInkPoint:(struct CGPoint)arg0;

@end
