/* Runtime dump - AVEmbeddedPlaybackControlsViewController
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVEmbeddedPlaybackControlsViewController : AVPlaybackControlsViewController
{
    id _showsLoadingIndicator;
    id _playing;
    id _scrubberEnabled;
    NSArray * _scrubberLoadedTimeRanges;
    id _playPauseButtonEnabled;
    id _showsStreamingControls;
    id _showsMediaSelectionButton;
    NSString * _elapsedTimeLabelText;
    float _scrubberMinimumValue;
    float _scrubberValue;
    float _scrubberMaximumValue;
    NSString * _remainingTimeLabelText;
    UIView * _lowerControlsSubContainerView;
    UIButton * _playPauseButton;
    UILabel * _elapsedTimeLabel;
    AVScrubber * _scrubber;
    UILabel * _remainingTimeLabel;
    UIButton * _mediaSelectionButton;
    UIButton * _fullScreenButton;
    UILabel * _liveStreamingLabel;
    AVLoadingIndicatorView * _loadingIndicatorView;
    UILabel * _scrubInstructionsTitleLabel;
    UILabel * _scrubInstructionsSubtitleLabel;
    NSMutableArray * _layoutConstraints;
    NSLayoutConstraint * _controlsContainerViewHeightLayoutConstraint;
    id _showsScrubInstructions;
    id _controlsVisibilityHasBeenManagedBefore;
}

- (void)setScrubberEnabled:(char)arg0;
- (void)updateScrubberMinimumValue:(float)arg0;
- (void)updateScrubberMaximumValue:(float)arg0;
- (void)setScrubberLoadedTimeRanges:(NSArray *)arg0;
- (void)setPlayPauseButtonEnabled:(char)arg0;
- (void)setShowsStreamingControls:(char)arg0;
- (void)setShowsMediaSelectionButton:(char)arg0;
- (void)updateElapsedTimeLabel:(NSString *)arg0;
- (void)updateRemainingTimeLabel:(NSString *)arg0;
- (void)updateScrubberValue:(float)arg0;
- (char)isScrubberEnabled;
- (NSArray *)scrubberLoadedTimeRanges;
- (char)isPlayPauseButtonEnabled;
- (char)showsStreamingControls;
- (char)showsLoadingIndicator;
- (void)setShowsLoadingIndicator:(char)arg0;
- (char)showsMediaSelectionButton;
- (void)_manageControlsVisibility;
- (void)_scrubberBeginTracking:(id)arg0;
- (void)_scrubberEndTracking:(id)arg0;
- (void)_showScrubInstructions;
- (void)_hideScrubInstructions;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (AVEmbeddedPlaybackControlsViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (void)updateViewConstraints;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_destruct;
- (float)scrubberWidth;
- (char)isPlaying;
- (void)setPlaying:(char)arg0;

@end
