/* Runtime dump - FBLayerHost
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBLayerHost : CALayerHost
{
    FBWindowContext * _windowContext;
    float _scale;
    float _rotation;
    struct CGPoint _translation;
}

@property (readonly, retain, nonatomic) FBWindowContext * windowContext;
@property (nonatomic) float scale;
@property (nonatomic) float rotation;
@property (nonatomic) struct CGPoint translation;

- (void)setDebug:(char)arg0;
- (void)dealloc;
- (NSString *)description;
- (float)scale;
- (void)setScale:(float)arg0;
- (void)setRotation:(float)arg0;
- (float)rotation;
- (void)setTranslation:(struct CGPoint)arg0;
- (FBLayerHost *)initWithWindowContext:(FBWindowContext *)arg0;
- (FBWindowContext *)windowContext;
- (struct CGPoint)translation;

@end
