/* Runtime dump - CAInterAppAudioTransportView
 * Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CAInterAppAudioTransportView : UIView
{
    CAUITransportButton * rewindButton;
    CAUITransportButton * playPauseButton;
    CAUITransportButton * recordButton;
    UILabel * currentTimeLabel;
    UIColor * pauseButtonColor;
    UIColor * playButtonColor;
    struct OpaqueAudioComponentInstance * outputUnit;
    struct HostCallbackInfo * callBackInfo;
    NSTimer * pollingPlayerTimer;
    char enabled;
    char inForeground;
    char _playing;
    char _recording;
    char _connected;
    double _playTime;
    UIFont * _currentTimeLabelFont;
}

@property char enabled;
@property (readonly, nonatomic) char playing;
@property (readonly, nonatomic) char recording;
@property (readonly, nonatomic) char connected;
@property (retain, nonatomic) UIColor * labelColor;
@property (retain, nonatomic) UIFont * currentTimeLabelFont;
@property (retain, nonatomic) UIColor * rewindButtonColor;
@property (retain, nonatomic) UIColor * playButtonColor;
@property (retain, nonatomic) UIColor * pauseButtonColor;
@property (retain, nonatomic) UIColor * recordButtonColor;

- (char)isRecording;
- (void)audioUnitPropertyChangedListener:(void *)arg0 unit:(struct OpaqueAudioComponentInstance *)arg1 propID:(unsigned long)arg2 scope:(unsigned long)arg3 element:(unsigned long)arg4;
- (void)rewindAction:(NSObject *)arg0;
- (void)toggleRecording:(id)arg0;
- (UIFont *)currentTimeLabelFont;
- (void)setCurrentTimeLabelFont:(UIFont *)arg0;
- (void)appHasGoneInBackground;
- (void)appHasGoneForeground;
- (void)updateTransportControls;
- (char)isHostConnected;
- (void)pollHost;
- (NSString *)getPlayTimeString;
- (void)updateStatefromTransportCallBack;
- (void)stopPollingPlayer;
- (void)startPollingPlayer;
- (void)getHostCallbackInfo;
- (void)sendStateToRemoteHost:(unsigned long)arg0;
- (char)canRecord;
- (char)canRewind;
- (UIColor *)rewindButtonColor;
- (void)setRewindButtonColor:(UIColor *)arg0;
- (UIColor *)playButtonColor;
- (void)setPlayButtonColor:(UIColor *)arg0;
- (UIColor *)pauseButtonColor;
- (void)setPauseButtonColor:(UIColor *)arg0;
- (UIColor *)recordButtonColor;
- (void)setRecordButtonColor:(UIColor *)arg0;
- (void)setOutputAudioUnit:(struct OpaqueAudioComponentInstance *)arg0;
- (CAInterAppAudioTransportView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (CAInterAppAudioTransportView *)initWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (void)setEnabled:(char)arg0;
- (void)initialize;
- (char)isEnabled;
- (char)isConnected;
- (UIColor *)labelColor;
- (void)setLabelColor:(UIColor *)arg0;
- (char)canPlay;
- (void)togglePlayback:(id)arg0;
- (char)isPlaying;

@end
