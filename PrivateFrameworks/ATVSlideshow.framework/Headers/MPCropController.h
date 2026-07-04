/* Runtime dump - MPCropController
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPCropController : NSObject
{
    id _delegate;
    MPDocument * _authoredDocument;
    NSRecursiveLock * _cropLock;
}

+ (MPCropController *)sharedController;
+ (void)releaseSharedController;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (MPCropController *)init;
- (NSObject *)delegate;
- (void)cleanup;
- (void)cropSlidesForLayerGroup:(NSObject *)arg0 inDocument:(char)arg1 withOptions:(NSDictionary *)arg2;
- (void)_applyCropToSlidesInEffectContainersWithArguments:(NSDictionary *)arg0;
- (void)applyCropToSlidesInEffectContainers:(id)arg0 inDocument:(char)arg1 withOptions:(NSDictionary *)arg2;
- (void)cropSlidesInDocument:(NSObject *)arg0 withOptions:(NSDictionary *)arg1;
- (void)applyCropToSlide:(id)arg0 withOptions:(NSDictionary *)arg1;
- (void)setupWithDocument:(NSObject *)arg0 andOptions:(NSDictionary *)arg1;
- (void)batchCrop:(id)arg0;
- (void)applyCropToSlide:(id)arg0 inDocument:(char)arg1 withOptions:(NSDictionary *)arg2;
- (void)applyStationaryCropToSlide:(id)arg0 withOptions:(NSDictionary *)arg1;
- (void)applyAnimatedCropToBreakSlide:(id)arg0 withOptions:(NSDictionary *)arg1;
- (void)applyAnimatedCropWithROIsToSlide:(id)arg0 withOptions:(NSDictionary *)arg1;
- (void)applyMultiFaceAnimatedCropToSlide:(id)arg0 withOptions:(NSDictionary *)arg1;
- (void)applyAnimatedCropToSlide:(id)arg0 withOptions:(NSDictionary *)arg1;
- (void)applyAnimatedCropToSlide:(id)arg0 withOptions:(NSDictionary *)arg1 centeredAt:(struct CGPoint)arg2 alwaysZoomIn:(char)arg3;
- (struct CGPoint)checkFarApartROIs:(id)arg0 withImageSize:(struct CGSize)arg1 visibleAspectRatio:(float)arg2 roiCenter:(struct CGPoint)arg3;
- (double)durationOfSlide:(id)arg0;

@end
