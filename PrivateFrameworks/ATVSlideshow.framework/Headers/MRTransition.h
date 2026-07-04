/* Runtime dump - MRTransition
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTransition : NSObject <MRLoadable, MRRenderable>
{
    NSDictionary * mDescription;
    id mTransitioner;
    MRLayer * mSourceLayer;
    MRLayer * mTargetLayer;
    MRImage * mSourceLayerImage;
    MRImage * mTargetLayerImage;
    MRImage * mOutputImage;
    NSString * mTransitionID;
    NSString * mPresetID;
    NSDictionary * mAttributes;
    NSDictionary * mFlattenedAttributes;
    char mNeedsToUpdateAttributes;
    struct CGSize mPixelSize;
}

@property (retain) MRLayer * sourceLayer;
@property (retain) MRLayer * targetLayer;
@property (retain, nonatomic) MRImage * sourceLayerImage;
@property (retain, nonatomic) MRImage * targetLayerImage;
@property (readonly) NSString * transitionID;
@property (copy) NSString * presetID;
@property (retain, nonatomic) NSDictionary * attributes;
@property (nonatomic) struct CGSize pixelSize;
@property (readonly, nonatomic) char noContentsMotion;
@property (readonly, nonatomic) char needsSourceLayerImageForPrecomputing;
@property (readonly, nonatomic) char needsTargetLayerImageForPrecomputing;
@property (readonly, nonatomic) char isNative3D;
@property (readonly, nonatomic) char isOpaque;
@property (readonly, nonatomic) char isAlphaFriendly;
@property (readonly, nonatomic) char isInfinite;

+ (NSObject *)retainedTransitionWithTransitionID:(NSString *)arg0 forTransitioner:(id)arg1;

- (void)dealloc;
- (char)isOpaque;
- (NSDictionary *)attributes;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)cleanup;
- (void)setSourceLayer:(MRLayer *)arg0;
- (NSString *)transitionID;
- (NSString *)presetID;
- (void)setPresetID:(NSString *)arg0;
- (MRTransition *)initWithTransitionID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2 now:(char)arg3;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (id)retainedByUserRenderedImageAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (id)patchworkAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)isNative3D;
- (char)isAlphaFriendly;
- (char)isInfinite;
- (void)releaseByTransitioner:(id)arg0;
- (void)setTargetLayer:(MRLayer *)arg0;
- (MRLayer *)sourceLayer;
- (void)setSourceLayerImage:(MRImage *)arg0;
- (void)setTargetLayerImage:(MRImage *)arg0;
- (char)noContentsMotion;
- (char)needsSourceLayerImageForPrecomputing;
- (MRImage *)sourceLayerImage;
- (char)needsTargetLayerImageForPrecomputing;
- (MRImage *)targetLayerImage;
- (void)retainByTransitioner:(id)arg0;
- (char)isRetainedByTransitioner;
- (MRLayer *)targetLayer;
- (void)unload;
- (struct CGSize)pixelSize;
- (void)finalize;
- (void)cancelLoading;

@end
