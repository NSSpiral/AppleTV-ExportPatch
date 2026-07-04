/* Runtime dump - PFSlowMotionConfiguration
 * Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFSlowMotionConfiguration : NSObject
{
    float _volumeDuringSlowMotion;
    float _volumeDuringRampToSlowMotion;
    PFSlowMotionRampConfiguration * _rampDown;
    PFSlowMotionRampConfiguration * _rampUp;
}

@property (readonly, nonatomic) float volumeDuringSlowMotion;
@property (readonly, nonatomic) float volumeDuringRampToSlowMotion;
@property (readonly, retain, nonatomic) PFSlowMotionRampConfiguration * rampDown;
@property (readonly, retain, nonatomic) PFSlowMotionRampConfiguration * rampUp;

- (PFSlowMotionConfiguration *)init;
- (void).cxx_destruct;
- (PFSlowMotionRampConfiguration *)rampDown;
- (PFSlowMotionRampConfiguration *)rampUp;
- (float)volumeDuringRampToSlowMotion;
- (float)volumeDuringSlowMotion;

@end
