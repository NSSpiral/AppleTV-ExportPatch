/* Runtime dump - TSDMovieRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMovieRep : TSDMediaRep
{
    NSObject<TSKMediaPlayerController> * mPlayerController;
    char mCurrentlyObservingPlayerLayer;
    char mPlayerLayerShouldBeDisplayed;
    char mDirectlyManagesLayerContent;
    CALayer * mPlayerLayer;
    CALayer * mLayerToStroke;
    CALayer * mMovieReflectionLayer;
    CALayer * mMovieReflectionMaskLayer;
    CALayer * mReflectionPlayerLayer;
    CALayer * mReflectionPlayerStrokeMaskLayer;
    CALayer * mPlayerStrokeLayer;
    CALayer * mReflectionPlayerStrokeLayer;
    TSDFrameRep * mReflectionFrameRep;
    CALayer * mReflectionFrameMaskLayer;
    AVAsset * mAssetForPlayability;
    char mDidCheckPlayability;
    char mIsPlayable;
    TSDButtonKnob * mPlayButtonKnob;
    char mPlayButtonKnobVisible;
    char mDidCancelUpdatingPlayButtonVisibility;
    char mInReadMode;
    struct CGImage * mAlternatePosterImage;
    unsigned int mIsChangingDynamicVisibleTimeCount;
    float mDynamicVolume;
    char mIsChangingDynamicVolume;
    char mNeedsTeardownPlayerController;
    char mDelayTearingDownPlayerController;
}

@property (readonly, nonatomic) TSDMovieInfo * movieInfo;
@property (nonatomic) struct CGImage * alternatePosterImage;

+ (float)magicMoveAttributeMatchPercentBetweenOutgoingObject:(NSObject *)arg0 incomingObject:(TSDMagicMoveMatchObject *)arg1 mixingTypeContext:(NSObject *)arg2;

- (TSDMovieRep *)initWithLayout:(TSDLayout *)arg0 canvas:(TSDCanvas *)arg1;
- (void)drawInLayerContext:(struct CGContext *)arg0;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(char)arg1 withStroke:(char)arg2 withOpacity:(char)arg3 forAlphaOnly:(char)arg4 drawChildren:(char)arg5;
- (char)isDataCurrentlyDownloading;
- (UIImage *)downloadProgressPlaceholderImage;
- (void)p_drawReflectionGradientIntoMovieReflectionLayer:(struct CGContext *)arg0 reflectionSize:(struct CGSize)arg1;
- (struct CGImage *)alternatePosterImage;
- (void)p_drawPosterImageInContext:(struct CGContext *)arg0;
- (void)p_drawInContext:(struct CGContext *)arg0 withContent:(char)arg1 withStroke:(char)arg2 withOpacity:(float)arg3 withMask:(char)arg4 forShadowOrHitTest:(char)arg5;
- (NSObject *)movieLayout;
- (void)p_updateMovieReflectionMaskLayer;
- (struct CGImage *)newFrameMaskForViewScale:(float)arg0 frameRect:(struct CGRect *)arg1;
- (void)setAlternatePosterImage:(struct CGImage *)arg0;
- (void)dealloc;
- (CALayer *)actionForLayer:(CALayer *)arg0 forKey:(NSString *)arg1;
- (TSDMovieInfo *)movieInfo;

@end
