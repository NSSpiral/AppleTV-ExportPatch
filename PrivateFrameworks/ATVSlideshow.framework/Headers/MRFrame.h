/* Runtime dump - MRFrame
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRFrame : NSObject <MRLoadable, MRRenderable>
{
    NSDictionary * mDescription;
    MRSlideProvider * mSlideProvider;
    MRImage * mInputImage;
    MRImage * mOutputImage;
    NSString * mFrameID;
    NSDictionary * mAttributes;
    NSDictionary * mFlattenedAttributes;
    struct CGSize mPixelSize;
}

@property (retain, nonatomic) MRImage * inputImage;
@property (readonly) NSString * frameID;
@property (retain, nonatomic) NSDictionary * attributes;
@property (nonatomic) struct CGSize pixelSize;
@property (readonly, nonatomic) char isNative3D;
@property (readonly, nonatomic) char isOpaque;
@property (readonly, nonatomic) char isAlphaFriendly;
@property (readonly, nonatomic) char isInfinite;

+ (NSObject *)retainedFrameWithFrameID:(NSString *)arg0 forSlideProvider:(NSObject *)arg1;

- (MRImage *)inputImage;
- (void)setInputImage:(MRImage *)arg0;
- (void)dealloc;
- (char)isOpaque;
- (NSDictionary *)attributes;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)cleanup;
- (NSString *)frameID;
- (MRFrame *)initWithFrameID:(NSString *)arg0;
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
- (void)retainBySlideProvider:(NSObject *)arg0;
- (void)releaseBySlideProvider:(NSObject *)arg0;
- (char)isRetainedBySlideProvider;
- (void)unload;
- (struct CGSize)pixelSize;
- (void)finalize;
- (void)cancelLoading;

@end
