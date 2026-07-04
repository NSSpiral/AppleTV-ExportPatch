/* Runtime dump - SKSCNRenderer
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSCNRenderer : NSObject
{
    double _timePreviousUpdate;
    SKLabelNode * _statsLabel;
    float _prevViewAspect;
    unsigned int _spritesRendered;
    unsigned int _spritesSubmitted;
    int _frames;
    unsigned int _prevSpritesRendered;
    unsigned int _prevSpritesRenderedSubmitted;
    double _timeBeginFrameCount;
    float _fps;
    char _hasRenderedOnce;
    char _hasRenderedForCurrentUpdate;
    char _isInTransition;
    char _disableInput;
    SKScene * _scene;
    struct SKCRenderer * _renderer;
    float _prevBackingScaleFactor;
    char showsFPS;
    char showsNodeCount;
    float _backingScaleFactor;
    struct CGRect _bounds;
}

@property (retain, nonatomic) SKScene * scene;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) float backingScaleFactor;
@property (nonatomic) char showsFPS;
@property (nonatomic) char showsDrawCount;
@property (nonatomic) char showsNodeCount;
@property (nonatomic) char showsPhysics;
@property (nonatomic) char showsFields;
@property (nonatomic) char ignoresSiblingOrder;

+ (NSString *)rendererWithContext:(NSObject *)arg0 options:(NSDictionary *)arg1;

- (SKScene *)scene;
- (void)setScene:(SKScene *)arg0;
- (void)setBackingScaleFactor:(float)arg0;
- (void)updateAtTime:(double)arg0;
- (void)render:(char)arg0;
- (void)setShowsPhysics:(char)arg0;
- (char)showsPhysics;
- (void)_initialize;
- (void)setShowsSpriteBounds:(char)arg0;
- (void)setShowsFPS:(char)arg0;
- (void)setShowsNodeCount:(char)arg0;
- (void)setupContext;
- (void)setShowsDrawCount:(char)arg0;
- (void)setShowsQuadCount:(char)arg0;
- (void)set_showsCulledNodesInNodeCount:(char)arg0;
- (void)set_showsGPUStats:(char)arg0;
- (void)set_showsCPUStats:(char)arg0;
- (void)set_showsCoreAnimationFPS:(char)arg0;
- (void)set_showsTotalAreaRendered:(char)arg0;
- (void)setShowsFields:(char)arg0;
- (void)setIgnoresSiblingOrder:(char)arg0;
- (char)ignoresSiblingOrder;
- (char)showsSpriteBounds;
- (char)showsFPS;
- (char)showsNodeCount;
- (char)showsQuadCount;
- (char)showsDrawCount;
- (void)set_showsOutlineInterior:(char)arg0;
- (char)_showsOutlineInterior;
- (char)showsFields;
- (void)set_showsSpriteBounds:(char)arg0;
- (char)_showsSpriteBounds;
- (void)set_shouldCenterStats:(char)arg0;
- (char)_shouldCenterStats;
- (char)_showsCoreAnimationFPS;
- (char)_showsCPUStats;
- (char)_showsGPUStats;
- (char)_showsCulledNodesInNodeCount;
- (char)_showsTotalAreaRendered;
- (void)_showAllStats;
- (float)_fps;
- (int)_spriteRenderCount;
- (int)_spriteSubmitCount;
- (float)backingScaleFactor;
- (void)dealloc;
- (struct CGRect)bounds;
- (SKSCNRenderer *)init;
- (void)setBounds:(struct CGRect)arg0;
- (SKScene *)_scene;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)_update:(double)arg0;
- (struct CGSize)pixelSize;

@end
