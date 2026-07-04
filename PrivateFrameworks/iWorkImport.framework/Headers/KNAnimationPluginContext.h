/* Runtime dump - KNAnimationPluginContext
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationPluginContext : NSObject <KNAnimationPluginContext>
{
    char _isMotionBlurred;
    char _isPreview;
    char _isWarmingUp;
    KNAnimatedBuild * _animatedBuild;
    NSArray * _magicMoveMatches;
    NSArray * _textures;
    NSDictionary * _transitionAttributes;
    unsigned int _direction;
    TSDGLState * _GLState;
    TSDRep * _rep;
    int _rendererType;
    double _percent;
    double _duration;
    struct CGRect _boundingRectOnCanvas;
    struct CGRect _boundingRect;
}

@property (retain, nonatomic) NSArray * textures;
@property (nonatomic) unsigned int direction;
@property (nonatomic) double duration;
@property (nonatomic) double percent;
@property (nonatomic) char isMotionBlurred;
@property (nonatomic) struct CGRect boundingRectOnCanvas;
@property (nonatomic) struct CGRect boundingRect;
@property (nonatomic) KNAnimatedBuild * animatedBuild;
@property (nonatomic) NSDictionary * transitionAttributes;
@property (nonatomic) NSArray * magicMoveMatches;
@property (nonatomic) char isPreview;
@property (retain, nonatomic) TSDGLState * GLState;
@property (nonatomic) char isWarmingUp;
@property (nonatomic) TSDRep * rep;
@property (nonatomic) int rendererType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char isBuild;
@property (readonly, nonatomic) char isTransition;
@property (readonly, nonatomic) char isMagicMove;
@property (readonly, nonatomic) char isFrameRenderer;

- (void)setRep:(TSDRep *)arg0;
- (char)isMagicMove;
- (void)setBoundingRect:(struct CGRect)arg0;
- (TSDRep *)rep;
- (TSDGLState *)GLState;
- (void)setGLState:(NSObject *)arg0;
- (void)setRendererType:(int)arg0;
- (void)setAnimatedBuild:(KNAnimatedBuild *)arg0;
- (void)setIsMotionBlurred:(char)arg0;
- (void)setBoundingRectOnCanvas:(struct CGRect)arg0;
- (KNAnimatedBuild *)animatedBuild;
- (int)rendererType;
- (char)isBuild;
- (NSArray *)magicMoveMatches;
- (char)isFrameRenderer;
- (char)isMotionBlurred;
- (struct CGRect)boundingRectOnCanvas;
- (char)isTransition;
- (char)isWarmingUp;
- (void)setMagicMoveMatches:(NSArray *)arg0;
- (void)setIsPreview:(char)arg0;
- (void)setIsWarmingUp:(char)arg0;
- (void)dealloc;
- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void)setDirection:(unsigned int)arg0;
- (unsigned int)direction;
- (struct CGRect)boundingRect;
- (void)setTransitionAttributes:(NSDictionary *)arg0;
- (NSDictionary *)transitionAttributes;
- (void)setTextures:(NSArray *)arg0;
- (NSArray *)textures;
- (double)percent;
- (void)setPercent:(double)arg0;
- (char)isPreview;

@end
