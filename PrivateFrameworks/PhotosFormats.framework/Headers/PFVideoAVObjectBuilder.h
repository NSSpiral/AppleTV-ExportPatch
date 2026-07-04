/* Runtime dump - PFVideoAVObjectBuilder
 * Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFVideoAVObjectBuilder : NSObject
{
    AVAsset * _videoAsset;
    PFVideoAdjustments * _videoAdjustments;
    PFSlowMotionTimeRangeMapper * __timeRangeMapperForPlayback;
    PFSlowMotionTimeRangeMapper * __timeRangeMapperForExport;
    AVAsset * __finalAsset;
    AVAudioMix * __finalAudioMix;
    AVVideoComposition * __finalVideoComposition;
}

@property (readonly, nonatomic) AVAsset * videoAsset;
@property (readonly, nonatomic) PFVideoAdjustments * videoAdjustments;
@property (readonly, nonatomic) PFSlowMotionTimeRangeMapper * _timeRangeMapperForPlayback;
@property (readonly, nonatomic) PFSlowMotionTimeRangeMapper * _timeRangeMapperForExport;
@property (readonly, nonatomic) AVAsset * _finalAsset;
@property (readonly, nonatomic) AVAudioMix * _finalAudioMix;
@property (readonly, nonatomic) AVVideoComposition * _finalVideoComposition;

- (NSString *)description;
- (void).cxx_destruct;
- (PFVideoAdjustments *)videoAdjustments;
- (AVAsset *)videoAsset;
- (struct ?)convertToOriginalTimeFromScaledTime:(struct ?)arg0 forExport:(char)arg1;
- (struct ?)convertToScaledTimeFromOriginalTime:(struct ?)arg0 forExport:(char)arg1;
- (void)requestAVAssetForExport:(char)arg0 withResultHandler:(id /* block */)arg1;
- (PFVideoAVObjectBuilder *)initWithVideoAsset:(AVAsset *)arg0 videoAdjustments:(PFVideoAdjustments *)arg1;
- (void)requestExportSessionWithExportPreset:(NSSet *)arg0 resultHandler:(id /* block */)arg1;
- (void)requestPlayerItemWithResultHandler:(id /* block */)arg0;
- (void)requestAVAssetWithResultHandler:(id /* block */)arg0;
- (PFVideoAVObjectBuilder *)initWithAsset:(NSSet *)arg0 audioMix:(AVAudioMix *)arg1 videoComposition:(AVVideoComposition *)arg2;
- (PFSlowMotionTimeRangeMapper *)_timeRangeMapperForPlayback;
- (PFSlowMotionTimeRangeMapper *)_timeRangeMapperForExport;
- (AVAsset *)_finalAsset;
- (AVAudioMix *)_finalAudioMix;
- (AVVideoComposition *)_finalVideoComposition;
- (id)_getOrCreateTimeRangeMapperForExport:(char)arg0;
- (struct ?)slowMotionRampInRangeForExport:(id)arg0;
- (struct ?)slowMotionRampOutRangeForExport:(id)arg0;

@end
