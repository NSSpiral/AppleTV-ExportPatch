/* Runtime dump - CAMElapsedTimeView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMElapsedTimeView : UIView
{
    UILabel * __timeLabel;
    UIImageView * __recordingImageView;
    NSTimer * __updateTimer;
    NSDate * __startTime;
}

@property (readonly, nonatomic) UILabel * _timeLabel;
@property (readonly, nonatomic) UIImageView * _recordingImageView;
@property (readonly, nonatomic) NSTimer * _updateTimer;
@property (readonly, nonatomic) NSDate * _startTime;

- (CAMElapsedTimeView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (CAMElapsedTimeView *)initWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)resetTimer;
- (void)startTimer;
- (void).cxx_destruct;
- (void)_update:(NSDate *)arg0;
- (NSDate *)_startTime;
- (void)updateToContentSize:(NSObject *)arg0;
- (void)endTimer;
- (void)_commonCAMElapsedTimeViewInitialization;
- (void)_setStartTime:(id)arg0;
- (void)_beginRecordingAnimation;
- (void)_endRecordingAnimation;
- (UILabel *)_timeLabel;
- (UIImageView *)_recordingImageView;
- (NSTimer *)_updateTimer;

@end
