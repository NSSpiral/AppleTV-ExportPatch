/* Runtime dump - KNAnimationRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationRenderer : NSObject
{
    KNPlaybackSession * mSession;
    KNAnimatedSlideView * mASV;
    char mAreAnimationsPaused;
    id mPlugin;
    Class mPluginClass;
    unsigned int mDirection;
    double mDuration;
    <KNAnimationPluginContext> * _pluginContext;
}

@property (readonly, nonatomic) id plugin;
@property (nonatomic) unsigned int direction;
@property (nonatomic) double duration;
@property (readonly, nonatomic) Class pluginClass;
@property (readonly, nonatomic) <KNAnimationPluginContext> * pluginContext;

- (void)setupPluginContext;
- (<KNAnimationPluginContext> *)pluginContext;
- (void)pauseAnimationsAtTime:(double)arg0;
- (void)resumeAnimationsIfPausedAtTime:(double)arg0;
- (void)resumeAnimationsIfPaused;
- (void)pauseAnimations;
- (void)dealloc;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void)setDirection:(unsigned int)arg0;
- (unsigned int)direction;
- (NEContentFilterPlugin *)plugin;
- (Class)pluginClass;
- (void)teardown;
- (void)stopAnimations;

@end
