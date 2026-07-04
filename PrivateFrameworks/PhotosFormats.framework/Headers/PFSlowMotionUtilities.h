/* Runtime dump - PFSlowMotionUtilities
 * Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFSlowMotionUtilities : NSObject

+ (struct ?)adjustTimeRange:(NSObject *)arg0 forNewStartTime:(SEL)arg1 endTime:(struct ?)arg2;
+ (int)preferredTimeScale;
+ (NSNumber *)timeRangeMapperForSourceDuration:(double)arg0 slowMotionRate:(float)arg1 slowMotionTimeRange:(struct ?)arg2 forExport:(struct ?)arg3;
+ (char)_isValidSlowMotionRate:(float)arg0;
+ (char)_isValidSlowMotionTimeRange:(struct ?)arg0;
+ (NSSet *)_scaledCompositionForAsset:(NSSet *)arg0 slowMotionRate:(float)arg1 slowMotionTimeRange:(struct ?)arg2 forExport:(struct ?)arg3 outTimeRangeMapper:(NSObject *)arg4;
+ (PFSlowMotionUtilities *)audioMixForScaledComposition:(id)arg0 timeRangeMapper:(NSObject *)arg1;
+ (NSObject *)_slowMotionRegionsFromSlowMotionTimeRange:(struct ?)arg0;
+ (char)_scaleComposition:(id)arg0 baseDuration:(double)arg1 slowMotionRate:(float)arg2 slowMotionRegions:(id)arg3 forExport:(char)arg4 outTimeRangeMapper:(id *)arg5;
+ (double)_scaleWithinComposition:(id)arg0 fromCursor:(double)arg1 timeStep:(double)arg2 rate:(float)arg3 timeRangeMapper:(NSObject *)arg4;
+ (struct ?)_timeRangeFromTime:(id)arg0 toTime:(SEL)arg1;
+ (PFSlowMotionUtilities *)_setVolume:(float)arg0 forSlowMotionRegionsInTrack:(NSObject *)arg1 timeRangeMapper:(NSObject *)arg2;
+ (NSSet *)assetFromVideoAsset:(NSSet *)arg0 slowMotionRate:(float)arg1 slowMotionTimeRange:(struct ?)arg2 forExport:(struct ?)arg3 outAudioMix:(id)arg4 outTimeRangeMapper:(char)arg5;
+ (void)configureExportSession:(NSObject *)arg0 forcePreciseConversion:(char)arg1;
+ (NSSet *)exportPresetForAsset:(NSSet *)arg0 preferredPreset:(NSSet *)arg1;
+ (PFSlowMotionUtilities *)sharedConfiguration;

@end
