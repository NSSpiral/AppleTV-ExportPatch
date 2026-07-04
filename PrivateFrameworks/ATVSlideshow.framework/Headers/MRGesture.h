/* Runtime dump - MRGesture
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRGesture : NSObject
{
    MRHitBlob * _hitBlob;
    float _linearScaleAtStart;
    float _slideRotationAtStart;
    float _slideScaleAtStart;
    float _currentRotation;
    float _currentScale;
    struct CGPoint _locationInViewAtStart;
    struct CGPoint _locationInSlideAtStart;
    struct CGPoint _slideCenterAtStart;
    struct CGPoint _currentTranslation;
}

@property (retain) MRHitBlob * hitBlob;
@property struct CGPoint locationInViewAtStart;
@property struct CGPoint locationInSlideAtStart;
@property float linearScaleAtStart;
@property struct CGPoint slideCenterAtStart;
@property float slideRotationAtStart;
@property float slideScaleAtStart;
@property struct CGPoint currentTranslation;
@property float currentRotation;
@property float currentScale;

- (void)dealloc;
- (MRHitBlob *)hitBlob;
- (struct CGPoint)locationInViewAtStart;
- (void)setSlideCenterAtStart:(struct CGPoint)arg0;
- (void)setSlideRotationAtStart:(float)arg0;
- (void)setSlideScaleAtStart:(float)arg0;
- (void)setLinearScaleAtStart:(float)arg0;
- (float)linearScaleAtStart;
- (void)setLocationInSlideAtStart:(struct CGPoint)arg0;
- (void)setCurrentTranslation:(struct CGPoint)arg0;
- (void)setCurrentRotation:(float)arg0;
- (void)setCurrentScale:(float)arg0;
- (struct CGPoint)currentTranslation;
- (float)slideRotationAtStart;
- (float)currentRotation;
- (float)currentScale;
- (struct CGPoint)locationInSlideAtStart;
- (struct CGPoint)slideCenterAtStart;
- (float)slideScaleAtStart;
- (MRGesture *)initWithHitBlob:(MRHitBlob *)arg0;
- (void)setHitBlob:(MRHitBlob *)arg0;
- (void)setLocationInViewAtStart:(struct CGPoint)arg0;

@end
