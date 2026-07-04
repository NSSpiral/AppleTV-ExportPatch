/* Runtime dump - BRMultiPartWidgetLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl;
@interface BRMultiPartWidgetLayer : BRControl
{
    char _suppressAnimations;
    char _suppressAntiAliasingMask;
    BRControl * _topRightCornerControl;
    BRControl * _topEdgeControl;
    BRControl * _topLeftCornerControl;
    BRControl * _rightEdgeControl;
    BRControl * _bottomRightCornerControl;
    BRControl * _bottomEdgeControl;
    BRControl * _bottomLeftCornerControl;
    BRControl * _leftEdgeControl;
    BRControl * _centerControl;
    BRControl * _bottomDecoControl;
    BRControl * _topDecoControl;
    float _centerOverlapFactorWidth;
    float _centerOverlapFactorHeight;
    float _sourceArtSceneHeight;
}

@property (nonatomic) ATVImage * topRightCorner;
@property (nonatomic) ATVImage * topEdge;
@property (nonatomic) ATVImage * topLeftCorner;
@property (nonatomic) ATVImage * rightEdge;
@property (nonatomic) ATVImage * bottomRightCorner;
@property (nonatomic) ATVImage * bottomEdge;
@property (nonatomic) ATVImage * bottomLeftCorner;
@property (nonatomic) ATVImage * leftEdge;
@property (nonatomic) ATVImage * centerImage;
@property (nonatomic) ATVImage * bottomDeco;
@property (nonatomic) ATVImage * topDeco;
@property (nonatomic) float centerOverlapFactorWidth;
@property (nonatomic) float centerOverlapFactorHeight;
@property (nonatomic) float sourceArtSceneHeight;
@property (nonatomic) BRControl * topRightCornerControl;
@property (nonatomic) BRControl * topEdgeControl;
@property (nonatomic) BRControl * topLeftCornerControl;
@property (nonatomic) BRControl * rightEdgeControl;
@property (nonatomic) BRControl * bottomRightCornerControl;
@property (nonatomic) BRControl * bottomEdgeControl;
@property (nonatomic) BRControl * bottomLeftCornerControl;
@property (nonatomic) BRControl * leftEdgeControl;
@property (nonatomic) BRControl * centerControl;
@property (nonatomic) BRControl * bottomDecoControl;
@property (nonatomic) BRControl * topDecoControl;

- (void)layoutSubcontrols;
- (void)setCenterImage:(ATVImage *)arg0;
- (void)setLeftEdge:(ATVImage *)arg0;
- (void)setRightEdge:(ATVImage *)arg0;
- (ATVImage *)centerImage;
- (void)setCenterOverlapFactor:(float)arg0;
- (void)setSourceArtSceneHeight:(float)arg0;
- (void)setBottomRightCorner:(ATVImage *)arg0;
- (void)setBottomLeftCorner:(ATVImage *)arg0;
- (void)setTopRightCorner:(ATVImage *)arg0;
- (void)setTopLeftCorner:(ATVImage *)arg0;
- (void)setTopEdge:(ATVImage *)arg0;
- (void)setBottomEdge:(ATVImage *)arg0;
- (void)setTopDeco:(ATVImage *)arg0;
- (void)setBottomDeco:(ATVImage *)arg0;
- (void)setCenterOverlapFactorWidth:(float)arg0;
- (void)setCenterOverlapFactorHeight:(float)arg0;
- (void)setSuppressAntiAliasingMask:(char)arg0;
- (void)updateAnimations;
- (void)setSuppressAnimations:(char)arg0;
- (void)_setImage:(UIImage *)arg0 inControlNamed:(id)arg1 withAntialiasingMask:(unsigned int)arg2;
- (BRControl *)topRightCornerControl;
- (BRControl *)topLeftCornerControl;
- (BRControl *)bottomRightCornerControl;
- (BRControl *)bottomLeftCornerControl;
- (BRControl *)rightEdgeControl;
- (BRControl *)leftEdgeControl;
- (BRControl *)topEdgeControl;
- (BRControl *)bottomEdgeControl;
- (BRControl *)bottomDecoControl;
- (BRControl *)topDecoControl;
- (BRControl *)centerControl;
- (float)sourceArtSceneHeight;
- (float)centerOverlapFactorWidth;
- (float)centerOverlapFactorHeight;
- (ATVImage *)topRightCorner;
- (ATVImage *)topLeftCorner;
- (ATVImage *)bottomRightCorner;
- (ATVImage *)bottomLeftCorner;
- (ATVImage *)rightEdge;
- (ATVImage *)leftEdge;
- (ATVImage *)topEdge;
- (ATVImage *)bottomEdge;
- (ATVImage *)bottomDeco;
- (ATVImage *)topDeco;
- (void)clearImageMap;
- (struct CGSize)edgeSize;
- (void)setTopRightCornerControl:(BRControl *)arg0;
- (void)setTopEdgeControl:(BRControl *)arg0;
- (void)setTopLeftCornerControl:(BRControl *)arg0;
- (void)setRightEdgeControl:(BRControl *)arg0;
- (void)setBottomRightCornerControl:(BRControl *)arg0;
- (void)setBottomEdgeControl:(BRControl *)arg0;
- (void)setBottomLeftCornerControl:(BRControl *)arg0;
- (void)setLeftEdgeControl:(BRControl *)arg0;
- (void)setCenterControl:(BRControl *)arg0;
- (void)setBottomDecoControl:(BRControl *)arg0;
- (void)setTopDecoControl:(BRControl *)arg0;
- (id)_defaultActions;
- (CAMediaTimingFunction *)animationTimingFunction;
- (BRMultiPartWidgetLayer *)init;
- (float)animationDuration;

@end
