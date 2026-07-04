/* Runtime dump - UIKBHandwritingQuadCurvePointFIFO
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingQuadCurvePointFIFO : UIKBHandwritingPointFIFO
{
    NSMutableArray * _prevPoints;
    UIBezierPath * _path;
    UIView<UIKBHandwritingStrokeEnabled> * _strokeView;
}

@property (retain, nonatomic) NSMutableArray * prevPoints;
@property (retain, nonatomic) UIBezierPath * path;
@property (retain, nonatomic) UIView<UIKBHandwritingStrokeEnabled> * strokeView;

- (void)dealloc;
- (void)flush;
- (UIBezierPath *)path;
- (void)setPath:(UIBezierPath *)arg0;
- (void)addPoint:(struct CGPoint)arg0;
- (void)clear;
- (void)setStrokeView:(UIView<UIKBHandwritingStrokeEnabled> *)arg0;
- (UIView<UIKBHandwritingStrokeEnabled> *)strokeView;
- (UIKBHandwritingQuadCurvePointFIFO *)initWithFIFO:(id)arg0 strokeView:(UIView<UIKBHandwritingStrokeEnabled> *)arg1;
- (void)setPrevPoints:(NSMutableArray *)arg0;
- (NSMutableArray *)prevPoints;

@end
