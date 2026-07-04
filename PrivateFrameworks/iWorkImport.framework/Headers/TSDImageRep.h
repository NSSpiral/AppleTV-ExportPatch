/* Runtime dump - TSDImageRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageRep : TSDMediaRep <TSDMagicMoveMatching>
{
    TSDLayoutGeometry * mLastImageGeometryInRoot;
    TSDLayoutGeometry * mLastMaskGeometryInRoot;
    struct CGAffineTransform mLastLayoutToImageTransform;
    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;
    char mFrameInUnscaledCanvasIsValid;
    CALayer * mContentsLayer;
    CAShapeLayer * mMaskPathLayer;
    CAShapeLayer * mIAMaskLayer;
    CAShapeLayer * mMaskSublayer;
    struct CGAffineTransform mLastPictureFrameLayerTransform;
    char mDirectlyManagesLayerContent;
    char mShowImageHighlight;
    char mInInstantAlphaMode;
    TSDInstantAlphaTracker * mInstantAlphaTracker;
    struct CGImage * mInstantAlphaImage;
    struct CGAffineTransform mBaseMaskLayoutTransform;
    NSRecursiveLock * mLayerUpdateAndSizingStateLock;
    TSDImageRepSizingState * mSizingState;
    char mSizingStateReady;
    NSObject<OS_dispatch_queue> * mSizedImageAccessQueue;
    struct CGImage * mSizedImage;
    struct CGSize mSizedImageSize;
    int mSizedImageOrientation;
    char mSizedImageHasMaskBakedIn;
    char mSizedImageHasAdjustmentsBakedIn;
    struct CGPath * mSizedImageMaskPath;
    NSCache * mHitTestCache;
    long mHitTestCacheOnce;
    NSMutableArray * mUpdateFromLayoutBlocks;
    NSObject<OS_dispatch_semaphore> * mUpdateFromLayoutBlocksLock;
}

+ (float)magicMoveAttributeMatchPercentBetweenOutgoingObject:(NSObject *)arg0 incomingObject:(TSDMagicMoveMatchObject *)arg1 mixingTypeContext:(NSObject *)arg2;
+ (struct CGPath *)p_newPathToBakeIntoSizedImageForSize:(struct CGSize)arg0 withImageLayout:(TSDImageLayout *)arg1 orientation:(int)arg2;

- (TSDImageRep *)initWithLayout:(TSDLayout *)arg0 canvas:(TSDCanvas *)arg1;
- (struct CGRect)frameInUnscaledCanvas;
- (char)canDrawInParallel;
- (NSString *)textureForContext:(NSObject *)arg0;
- (void)willBeRemoved;
- (void)setTextureAttributes:(NSDictionary *)arg0;
- (void)drawInLayerContext:(struct CGContext *)arg0;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(char)arg1 withStroke:(char)arg2 withOpacity:(char)arg3 forAlphaOnly:(char)arg4 drawChildren:(char)arg5;
- (id)imageOfStroke:(struct CGRect *)arg0;
- (char)canDrawShadowInOneStepWithChildren:(char)arg0;
- (TSDMaskInfo *)maskInfo;
- (TSDImageLayout *)imageLayout;
- (NSObject *)maskLayout;
- (void)p_drawInContext:(struct CGContext *)arg0 withContent:(char)arg1 withStroke:(char)arg2 withOpacity:(float)arg3 withMask:(char)arg4 withIAMask:(char)arg5 forLayer:(char)arg6 forShadow:(char)arg7 forHitTest:(char)arg8;
- (NSObject *)p_validatedImageProvider;
- (NSObject *)p_validatedThumbnailImageProvider;
- (NSData *)p_imageData;
- (NSObject *)p_validatedBitmapImageProvider;
- (NSObject *)p_imageProvider;
- (char)p_shouldUseSourceImageForContext:(NSObject *)arg0 clipBounds:(struct CGRect)arg1 transform:(struct CGSize)arg2 image:(UIImage *)arg3;
- (char)p_drawsInOneStep;
- (char)isDataCurrentlyDownloading;
- (UIImage *)downloadProgressPlaceholderImage;
- (void)dealloc;
- (NSDictionary *)imageInfo;

@end
