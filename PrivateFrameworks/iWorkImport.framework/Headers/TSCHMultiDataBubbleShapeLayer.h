/* Runtime dump - TSCHMultiDataBubbleShapeLayer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataBubbleShapeLayer : CATransformLayer <TSCHMultiDataElementShapeLayer>
{
    TSDFill * mFill;
    float mViewScale;
    CAShapeLayer * mMaskLayer;
    CAShapeLayer * mStrokeLayer;
    CALayer * mImageLayer;
    float _viewScale;
}

@property (retain, nonatomic) TSDFill * fill;
@property (nonatomic) float viewScale;

- (float)viewScale;
- (char)aboveIntercept;
- (<TSCHSupportsRendering> *)chartRep;
- (CALayer *)currentValueLayer;
- (void)setFill:(TSDFill *)arg0 stroke:(TSDStroke *)arg1 withViewScale:(float)arg2;
- (void)updateElementFrame:(struct CGRect)arg0 forSeries:(struct CGSize)arg1 addingAnimationsToAnimationInfo:(NSDictionary *)arg2;
- (void)updateElementFrameToNullForSeries:(id)arg0 addingAnimationsToAnimationInfo:(NSDictionary *)arg1;
- (NSObject *)p_bubbleElementsRenderer;
- (void)p_addLayerAnimationsForUpdatingImage:(struct CGImage *)arg0 bounds:(struct CGRect)arg1 position:(struct CGSize)arg2 toAnimationInfo:(NSDictionary *)arg3;
- (void)p_addAnimationsForUpdatingPath:(struct CGPath *)arg0 position:(struct CGPoint)arg1 toAnimationInfo:(NSDictionary *)arg2 onLayer:(CALayer *)arg3;
- (struct CGAffineTransform)p_renderingSymbolElementTransform;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (TSCHMultiDataBubbleShapeLayer *)init;
- (TSDFill *)fill;
- (void)setContentsScale:(float)arg0;
- (void)setFill:(TSDFill *)arg0;
- (void)setViewScale:(float)arg0;

@end
