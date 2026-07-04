/* Runtime dump - CRBoxLayer
 * Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRBoxLayer : CAReplicatorLayer
{
    CAShapeLayer * _reticleLayer;
    CATextLayer * _codeLayer;
    NSMutableArray * _completionBlocks;
    float _demoSpeed;
}

@property (retain) CAShapeLayer * reticleLayer;
@property (retain) CATextLayer * codeLayer;
@property (retain) NSMutableArray * completionBlocks;
@property float demoSpeed;

+ (CALayer *)layer;

- (void)dealloc;
- (CRBoxLayer *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)layoutSublayers;
- (void).cxx_destruct;
- (void)positionForCodeBoxPoints:(id)arg0;
- (void)setString:(NSString *)arg0 mirrored:(char)arg1 inverted:(char)arg2;
- (void)animatePulseColor:(UIColor *)arg0;
- (void)setDemoSpeed:(float)arg0;
- (CRBoxLayer *)initWithCodeFrameRatio:(float)arg0;
- (void)setReticleLayer:(CAShapeLayer *)arg0;
- (CAShapeLayer *)reticleLayer;
- (void)setCodeLayer:(CATextLayer *)arg0;
- (CATextLayer *)codeLayer;
- (void)animateReveal;
- (void)animateConceal;
- (void)animateToPosition:(struct CGPoint)arg0 transform:(struct CATransform3D)arg1 opacity:(float)arg2 type:(int)arg3;
- (float)demoSpeed;
- (void)setCompletionBlocks:(NSMutableArray *)arg0;
- (void)addCompletionBlock:(id /* block */)arg0;
- (NSMutableArray *)completionBlocks;

@end
