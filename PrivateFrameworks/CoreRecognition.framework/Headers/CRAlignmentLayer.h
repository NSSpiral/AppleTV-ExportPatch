/* Runtime dump - CRAlignmentLayer
 * Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRAlignmentLayer : CALayer
{
    CATextLayer * _instructionLayer;
    CAShapeLayer * _maskLayer;
    CAShapeLayer * _outlineLayer;
    CALayer * _infoLayer;
    CATextLayer * _cardNumberLayer;
    CATextLayer * _cardholderNameLayer;
    CATextLayer * _expirationDateLayer;
}

@property (retain) CATextLayer * instructionLayer;
@property (retain) CAShapeLayer * maskLayer;
@property (retain) CAShapeLayer * outlineLayer;
@property (retain) CALayer * infoLayer;
@property (retain) CATextLayer * cardNumberLayer;
@property (retain) CATextLayer * cardholderNameLayer;
@property (retain) CATextLayer * expirationDateLayer;

+ (CALayer *)layer;

- (CRAlignmentLayer *)init;
- (void)layoutSublayers;
- (void).cxx_destruct;
- (void)setMaskLayer:(CAShapeLayer *)arg0;
- (CAShapeLayer *)maskLayer;
- (void)setOutlineLayer:(CAShapeLayer *)arg0;
- (CAShapeLayer *)outlineLayer;
- (void)setInstructionLayer:(CATextLayer *)arg0;
- (CATextLayer *)instructionLayer;
- (void)setInfoLayer:(CALayer *)arg0;
- (CALayer *)infoLayer;
- (void)setCardNumberLayer:(CATextLayer *)arg0;
- (CATextLayer *)cardNumberLayer;
- (void)setCardholderNameLayer:(CATextLayer *)arg0;
- (CATextLayer *)cardholderNameLayer;
- (void)setExpirationDateLayer:(CATextLayer *)arg0;
- (CATextLayer *)expirationDateLayer;
- (void)resetLayer;
- (void)fadePlacementImage;
- (void)animateFoundCode:(id)arg0 cardHolder:(id)arg1 cardholderPosition:(struct CGPoint)arg2 expDate:(NSDate *)arg3 expdatePosition:(struct CGPoint)arg4 completionBlock:(id /* block */)arg5;
- (void)animateFoundCardRect:(NSObject *)arg0;
- (struct CGRect)alignmentRect;

@end
