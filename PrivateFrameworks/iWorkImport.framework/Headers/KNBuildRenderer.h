/* Runtime dump - KNBuildRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildRenderer : KNAnimationRenderer
{
    int mNumberOfAnimationsStarted;
    NSDictionary * mAnimatedLayers;
    CALayer * mParentLayer;
    id mBuildEndCallbackTarget;
    SEL mBuildEndCallbackSelector;
    NSMutableArray * mAnimatedBuildsToStartAtEnd;
    TSDTextureSet * mTextureSet;
    TSDTextureSet * mFinalAttributesTextureSet;
    KNAnimationInfo * mAnimationInfo;
    KNAnimatedBuild * mAnimatedBuild;
    KNBuildChunk * mBuildStage;
    TSDDrawableInfo * mInfo;
    char mIsPreview;
    char mInterrupted;
    char mIsAnimationForPlayback;
    char mAreAnimationsPrepared;
    char mUsingFinalTexture;
    char mIsTextureCachedAtEndOfBuild;
    char mShouldUseMagicMoveTextures;
    char mIsNonCachedTextureValid;
    TSDFPSCounter * mFPSCounter;
    TSDTextureContext * mTextureContext;
}

@property (readonly, nonatomic) KNBuildChunk * buildStage;
@property (readonly, nonatomic) unsigned int textureDeliveryStyle;
@property (readonly, nonatomic) TSDDrawableInfo * info;
@property (readonly, nonatomic) TSDRep * rep;
@property (readonly, nonatomic) TSDTextureSet * textureSet;
@property (readonly, nonatomic) TSDTextureSet * nonCachedTextureSet;
@property (retain, nonatomic) TSDTextureContext * textureContext;
@property (retain, nonatomic) CALayer * parentLayer;
@property (readonly, nonatomic) NSArray * animatedBuildsToStartAtEnd;
@property (readonly, nonatomic) char isTextDrawable;
@property (readonly, nonatomic) KNAnimatedBuild * animatedBuild;

- (void)setTextureContext:(TSDTextureContext *)arg0;
- (unsigned int)textureDeliveryStyle;
- (TSDTextureContext *)textureContext;
- (TSDRep *)rep;
- (unsigned int)stageIndex;
- (void)setupPluginContext;
- (id)loadPluginIfNeeded;
- (NSObject *)textureSetForStage:(int)arg0 context:(NSObject *)arg1;
- (NSObject *)p_textureSetForStage:(int)arg0 context:(NSObject *)arg1 isAtEndOfBuild:(char)arg2 shouldForceRebuild:(char)arg3 shouldRender:(char)arg4;
- (NSObject *)p_textureSetForStage:(int)arg0 context:(NSObject *)arg1 isAtEndOfBuild:(char)arg2 shouldForceRebuild:(char)arg3;
- (char)p_isMovieInfo;
- (char)p_isDriftAnimation;
- (id)p_filterForTextDelivery:(int)arg0;
- (char)isTextDrawable;
- (char)addAnimationsAtLayerTime:(double)arg0;
- (id)initializeTextureSetForEndOfBuild:(char)arg0 endOfSlide:(char)arg1 context:(NSObject *)arg2 isRenderingToContext:(char)arg3;
- (void)setLayerVisibility:(id)arg0 isAtEndOfBuild:(char)arg1;
- (char)p_isPDFOutput;
- (NSSet *)setupFinalTextureGivenCurrentTextureSet:(NSSet *)arg0;
- (id)initializeTextureSetForEndOfBuild:(char)arg0 endOfSlide:(char)arg1 isRenderingToContext:(char)arg2;
- (void)prepareAnimations;
- (void)resetHighlightsBeforeAnimationOnTextureSet:(NSSet *)arg0;
- (NSObject *)p_keyForAnimation;
- (void)fadeOutPreviousStageOn:(id)arg0 atLayerTime:(double)arg1;
- (void)p_removeAnimations;
- (void)p_resetAnimations;
- (void)removeAnimationsAndFinish:(char)arg0;
- (void)setVisibilityAndGeometryOn:(id)arg0 withFinalTextureSet:(NSSet *)arg1;
- (void)resetPreviousStageUnhighlightOnTextureSet:(NSSet *)arg0;
- (KNBuildRenderer *)initWithAnimatedBuild:(KNAnimatedBuild *)arg0 info:(TSDDrawableInfo *)arg1 buildStage:(KNBuildChunk *)arg2 session:(NSObject *)arg3 animatedSlideView:(KNAnimatedSlideView *)arg4;
- (TSDTextureSet *)textureSet;
- (id)textureSetWithoutRenderedContents;
- (TSDTextureSet *)nonCachedTextureSet;
- (NSObject *)textureSetForStage:(int)arg0 context:(NSObject *)arg1 shouldForceRebuild:(char)arg2;
- (void)animateAfterDelay:(double)arg0;
- (void)updateAnimationsForLayerTime:(double)arg0;
- (void)forceRemoveAnimations;
- (void)registerForBuildEndCallback:(SEL)arg0 target:(NSObject *)arg1;
- (void)pauseAnimationsAtTime:(double)arg0;
- (void)resumeAnimationsIfPausedAtTime:(double)arg0;
- (void)addBuildToStartAtEnd:(id)arg0;
- (void)resetTexture;
- (KNAnimatedBuild *)animatedBuild;
- (NSArray *)animatedBuildsToStartAtEnd;
- (KNBuildChunk *)buildStage;
- (void)dealloc;
- (NSString *)description;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (TSDDrawableInfo *)info;
- (CALayer *)parentLayer;
- (void)setParentLayer:(CALayer *)arg0;
- (void)stopAnimations;

@end
