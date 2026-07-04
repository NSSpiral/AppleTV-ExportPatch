/* Runtime dump - TSCHMultiDataAnimatingFrameLayer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataAnimatingFrameLayer : CALayer <TSCHMultiDataAnimatingFrameLayerProtocol>
{
    struct CGRect mPresentationBounds;
    struct CGPoint mPresentationPosition;
}

@property (nonatomic) struct CGRect presentationBounds;
@property (nonatomic) struct CGPoint presentationPosition;

- (void)setPresentationBounds:(struct CGRect)arg0;
- (void)setPresentationPosition:(struct CGPoint)arg0;
- (struct CGRect)presentationBounds;
- (struct CGPoint)presentationPosition;
- (TSCHMultiDataAnimatingFrameLayer *)init;
- (void)setFrame:(struct CGRect)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (void)setPosition:(struct CGPoint)arg0;
- (void).cxx_construct;
- (TSCHMultiDataAnimatingFrameLayer *)initWithLayer:(CALayer *)arg0;
- (struct CGRect)currentFrame;

@end
