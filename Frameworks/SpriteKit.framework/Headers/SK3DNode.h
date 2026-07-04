/* Runtime dump - SK3DNode
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SK3DNode : SKNode
{
    <SCNRenderer> * _scnRenderer;
    struct SCNVector3 _originalCameraPosition;
    SCNScene * _scene;
    char playing;
    char loops;
    char autoenablesDefaultLighting;
    SCNNode * pointOfView;
    double sceneTime;
}

@property struct CGSize viewportSize;
@property (retain, nonatomic) SCNScene * scnScene;
@property (nonatomic) double sceneTime;
@property char playing;
@property (nonatomic) char loops;
@property (retain, nonatomic) SCNNode * pointOfView;
@property (nonatomic) char autoenablesDefaultLighting;

+ (NSObject *)nodeWithViewportSize:(struct CGSize)arg0;

- (char)loops;
- (void)setLoops:(char)arg0;
- (SCNNode *)pointOfView;
- (double)sceneTime;
- (void)setPointOfView:(SCNNode *)arg0;
- (void)setSceneTime:(double)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 options:(NSDictionary *)arg1;
- (NSObject *)projectPoint:(NSObject *)arg0;
- (NSObject *)unprojectPoint:(NSObject *)arg0;
- (char)autoenablesDefaultLighting;
- (void)setAutoenablesDefaultLighting:(char)arg0;
- (struct CGSize)viewportSize;
- (void)setViewportSize:(struct CGSize)arg0;
- (SK3DNode *)initWithViewportSize:(struct CGSize)arg0;
- (void)_renderForTime:(double)arg0;
- (void)setScnScene:(SCNScene *)arg0;
- (SCNScene *)scnScene;
- (SK3DNode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SK3DNode *)init;
- (SK3DNode *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (void)commonInit;
- (void).cxx_destruct;
- (char)isPlaying;
- (void)setPlaying:(char)arg0;

@end
