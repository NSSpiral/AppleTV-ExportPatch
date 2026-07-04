/* Runtime dump - ATVPlayerDebugInfoView
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVPlayerDebugInfoView : UIView
{
    ATVPlayer * _player;
    UILabel * _stateLabel;
    UILabel * _rateLabel;
    UILabel * _durationLabel;
    UILabel * _elapsedTimeLabel;
    UILabel * _playbackDateLabel;
    UILabel * _mutedLabel;
    UILabel * _volumeLabel;
    UILabel * _hasEnabledVideoLabel;
    UILabel * _outputObscuredLabel;
    UILabel * _isStreamingLabel;
    UILabel * _bufferedTimeRangeLabel;
    UILabel * _seekableTimeRangeLabel;
    UILabel * _seekableDateRangeLabel;
    UILabel * _observedBitrateLabel;
    UILabel * _indicatedBitrateLabel;
    UILabel * _chapterCollectionsLabel;
    UILabel * _currentChapterCollectionLabel;
    UILabel * _currentChapterLabel;
    float _labelHeight;
    NSMutableArray * _notificationTokens;
    NSMutableDictionary * _notificationLabelsDictionary;
    id _timeObserverToken;
}

@property (retain, nonatomic) ATVPlayer * player;
@property (retain, nonatomic) UILabel * stateLabel;
@property (retain, nonatomic) UILabel * rateLabel;
@property (retain, nonatomic) UILabel * durationLabel;
@property (retain, nonatomic) UILabel * elapsedTimeLabel;
@property (retain, nonatomic) UILabel * playbackDateLabel;
@property (retain, nonatomic) UILabel * mutedLabel;
@property (retain, nonatomic) UILabel * volumeLabel;
@property (retain, nonatomic) UILabel * hasEnabledVideoLabel;
@property (retain, nonatomic) UILabel * outputObscuredLabel;
@property (retain, nonatomic) UILabel * isStreamingLabel;
@property (retain, nonatomic) UILabel * bufferedTimeRangeLabel;
@property (retain, nonatomic) UILabel * seekableTimeRangeLabel;
@property (retain, nonatomic) UILabel * seekableDateRangeLabel;
@property (retain, nonatomic) UILabel * observedBitrateLabel;
@property (retain, nonatomic) UILabel * indicatedBitrateLabel;
@property (retain, nonatomic) UILabel * chapterCollectionsLabel;
@property (retain, nonatomic) UILabel * currentChapterCollectionLabel;
@property (retain, nonatomic) UILabel * currentChapterLabel;
@property (nonatomic) float labelHeight;
@property (retain, nonatomic) NSMutableArray * notificationTokens;
@property (retain, nonatomic) NSMutableDictionary * notificationLabelsDictionary;
@property (retain, nonatomic) id timeObserverToken;

- (ATVPlayerDebugInfoView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_destruct;
- (void)_removePlayerObservers;
- (UILabel *)rateLabel;
- (UILabel *)mutedLabel;
- (UILabel *)volumeLabel;
- (UILabel *)durationLabel;
- (UILabel *)hasEnabledVideoLabel;
- (UILabel *)outputObscuredLabel;
- (UILabel *)isStreamingLabel;
- (UILabel *)bufferedTimeRangeLabel;
- (UILabel *)seekableDateRangeLabel;
- (UILabel *)seekableTimeRangeLabel;
- (UILabel *)observedBitrateLabel;
- (UILabel *)indicatedBitrateLabel;
- (UILabel *)chapterCollectionsLabel;
- (UILabel *)currentChapterCollectionLabel;
- (UILabel *)currentChapterLabel;
- (UILabel *)stateLabel;
- (UILabel *)elapsedTimeLabel;
- (UILabel *)playbackDateLabel;
- (NSMutableDictionary *)notificationLabelsDictionary;
- (void)_addPlayerObservers;
- (NSMutableArray *)notificationTokens;
- (void)setTimeObserverToken:(NSString *)arg0;
- (NSString *)timeObserverToken;
- (void)setStateLabel:(UILabel *)arg0;
- (void)setRateLabel:(UILabel *)arg0;
- (void)setDurationLabel:(UILabel *)arg0;
- (void)setElapsedTimeLabel:(UILabel *)arg0;
- (void)setPlaybackDateLabel:(UILabel *)arg0;
- (void)setMutedLabel:(UILabel *)arg0;
- (void)setVolumeLabel:(UILabel *)arg0;
- (void)setHasEnabledVideoLabel:(UILabel *)arg0;
- (void)setOutputObscuredLabel:(UILabel *)arg0;
- (void)setIsStreamingLabel:(UILabel *)arg0;
- (void)setBufferedTimeRangeLabel:(UILabel *)arg0;
- (void)setSeekableTimeRangeLabel:(UILabel *)arg0;
- (void)setSeekableDateRangeLabel:(UILabel *)arg0;
- (void)setObservedBitrateLabel:(UILabel *)arg0;
- (void)setIndicatedBitrateLabel:(UILabel *)arg0;
- (void)setChapterCollectionsLabel:(UILabel *)arg0;
- (void)setCurrentChapterCollectionLabel:(UILabel *)arg0;
- (void)setCurrentChapterLabel:(UILabel *)arg0;
- (void)setNotificationTokens:(NSMutableArray *)arg0;
- (void)setNotificationLabelsDictionary:(NSMutableDictionary *)arg0;
- (void)setLabelHeight:(float)arg0;
- (float)labelHeight;
- (void)setPlayer:(ATVPlayer *)arg0;
- (ATVPlayer *)player;

@end
