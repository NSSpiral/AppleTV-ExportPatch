/* Runtime dump - PFSlowMotionRampConfiguration
 * Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFSlowMotionRampConfiguration : NSObject
{
    unsigned int _playbackNumIntermediateSteps;
    unsigned int _exportNumIntermediateSteps;
    float _playbackRampCurveExponent;
    float _exportRampCurveExponent;
    double _rampTime;
    double _introTime;
    double _outroTime;
    double _volumeSuppressionIntroTime;
    double _volumeSuppressionOutroTime;
}

@property (readonly, nonatomic) double rampTime;
@property (readonly, nonatomic) double introTime;
@property (readonly, nonatomic) double outroTime;
@property (readonly, nonatomic) double volumeSuppressionIntroTime;
@property (readonly, nonatomic) double volumeSuppressionOutroTime;
@property (readonly, nonatomic) unsigned int playbackNumIntermediateSteps;
@property (readonly, nonatomic) unsigned int exportNumIntermediateSteps;
@property (readonly, nonatomic) float playbackRampCurveExponent;
@property (readonly, nonatomic) float exportRampCurveExponent;

- (PFSlowMotionRampConfiguration *)init;
- (unsigned int)exportNumIntermediateSteps;
- (unsigned int)playbackNumIntermediateSteps;
- (double)rampTime;
- (double)introTime;
- (double)outroTime;
- (float)exportRampCurveExponent;
- (float)playbackRampCurveExponent;
- (PFSlowMotionRampConfiguration *)initForRampDown:(char)arg0;
- (void)computeRampToTargetRate:(float)arg0 forExport:(char)arg1 outTimeSteps:(id *)arg2 outIntermediateRates:(id *)arg3;
- (double)volumeSuppressionIntroTime;
- (double)volumeSuppressionOutroTime;

@end
