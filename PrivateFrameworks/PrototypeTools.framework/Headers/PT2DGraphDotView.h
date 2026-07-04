/* Runtime dump - PT2DGraphDotView
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PT2DGraphDotView : UIView
{
    PT2DGraphView * _graph;
    struct CGPoint _graphPoint;
}

@property (weak, nonatomic) PT2DGraphView * graph;
@property (nonatomic) struct CGPoint graphPoint;

- (void)drawRect:(struct CGRect)arg0;
- (PT2DGraphDotView *)init;
- (void).cxx_destruct;
- (PT2DGraphView *)graph;
- (void)setGraph:(PT2DGraphView *)arg0;
- (void)setGraphPoint:(struct CGPoint)arg0;
- (struct CGPoint)graphPoint;

@end
