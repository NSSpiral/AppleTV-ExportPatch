/* Runtime dump - FBLayerHostContainer
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBLayerHostContainer : CALayer
{
    float _scale;
    float _rotation;
    struct CGPoint _translation;
}

@property (nonatomic) float scale;
@property (nonatomic) float rotation;
@property (nonatomic) struct CGPoint translation;

- (void)setDebug:(char)arg0;
- (NSString *)description;
- (float)scale;
- (void)setScale:(float)arg0;
- (void)setRotation:(float)arg0;
- (float)rotation;
- (void)setTranslation:(struct CGPoint)arg0;
- (struct CGPoint)translation;

@end
