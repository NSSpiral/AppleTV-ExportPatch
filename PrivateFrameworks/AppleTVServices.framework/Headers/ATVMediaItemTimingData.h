/* Runtime dump - ATVMediaItemTimingData
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVMediaItemTimingData : NSObject
{
    char _initialLoadingComplete;
    double _startTimeForPreparingForLoading;
    double _endTimeForPreparingForLoading;
    double _startTimeForLoadingAVAssetKeys;
    double _endTimeForLoadingAVAssetKeys;
    double _startTimeForPreparingForPlaybackInitiation;
    double _endTimeForPreparingForPlaybackInitiation;
    double _startTimeForAVPlayerItemLoading;
    double _endTimeForAVPlayerItemLoading;
    double _startTimeForBuffering;
    double _endTimeForBuffering;
    double _totalInitialLoadingTime;
}

@property (nonatomic) double startTimeForPreparingForLoading;
@property (nonatomic) double endTimeForPreparingForLoading;
@property (nonatomic) double startTimeForLoadingAVAssetKeys;
@property (nonatomic) double endTimeForLoadingAVAssetKeys;
@property (nonatomic) double startTimeForPreparingForPlaybackInitiation;
@property (nonatomic) double endTimeForPreparingForPlaybackInitiation;
@property (nonatomic) double startTimeForAVPlayerItemLoading;
@property (nonatomic) double endTimeForAVPlayerItemLoading;
@property (nonatomic) double startTimeForBuffering;
@property (nonatomic) double endTimeForBuffering;
@property (nonatomic) double totalInitialLoadingTime;
@property (nonatomic) char initialLoadingComplete;

- (void)setEndTimeForPreparingForLoading:(double)arg0;
- (void)setStartTimeForLoadingAVAssetKeys:(double)arg0;
- (void)setStartTimeForPreparingForLoading:(double)arg0;
- (void)setEndTimeForLoadingAVAssetKeys:(double)arg0;
- (double)startTimeForPreparingForLoading;
- (double)endTimeForPreparingForLoading;
- (double)startTimeForLoadingAVAssetKeys;
- (double)endTimeForLoadingAVAssetKeys;
- (double)startTimeForBuffering;
- (void)setStartTimeForBuffering:(double)arg0;
- (void)setStartTimeForPreparingForPlaybackInitiation:(double)arg0;
- (void)setEndTimeForPreparingForPlaybackInitiation:(double)arg0;
- (void)setStartTimeForAVPlayerItemLoading:(double)arg0;
- (double)startTimeForPreparingForPlaybackInitiation;
- (double)endTimeForPreparingForPlaybackInitiation;
- (void)setEndTimeForAVPlayerItemLoading:(double)arg0;
- (double)startTimeForAVPlayerItemLoading;
- (double)endTimeForAVPlayerItemLoading;
- (void)setEndTimeForBuffering:(double)arg0;
- (double)endTimeForBuffering;
- (char)initialLoadingComplete;
- (void)setInitialLoadingComplete:(char)arg0;
- (double)totalInitialLoadingTime;
- (void)setTotalInitialLoadingTime:(double)arg0;

@end
