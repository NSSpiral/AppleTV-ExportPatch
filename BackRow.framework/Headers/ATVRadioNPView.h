/* Runtime dump - ATVRadioNPView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRAudioVisualizerControl.h>

@class ATVRadioNPAdView, ATVRadioNPHistoryView, ATVRadioNPTrackView, ATVRadioNPTransitioningController, ATVRadioStation, BREvent, BRMediaPlayer;
@interface ATVRadioNPView : BRAudioVisualizerControl
{
    char _ignoreUpdateViews;
    ATVRadioNPTrackView * _trackView;
    ATVRadioNPHistoryView * _historyView;
    ATVRadioNPAdView * _audioAdView;
    int _activeView;
    ATVRadioNPTransitioningController * _transitioningController;
    ATVDataCollection * _playbackStation;
    ATVDataQuery * _historyQuery;
    NSArray * _historyItems;
    ATVDataItem * _trackForOutro;
    double _transitioningEndTimeStamp;
}

@property (retain, nonatomic) ATVRadioNPTrackView * trackView;
@property (retain, nonatomic) ATVRadioNPHistoryView * historyView;
@property (retain, nonatomic) ATVRadioNPAdView * audioAdView;
@property (nonatomic) int activeView;
@property (retain, nonatomic) ATVRadioNPTransitioningController * transitioningController;
@property (nonatomic) double transitioningEndTimeStamp;
@property (retain, nonatomic) ATVDataCollection * playbackStation;
@property (retain, nonatomic) ATVDataQuery * historyQuery;
@property (retain, nonatomic) NSArray * historyItems;
@property (retain, nonatomic) ATVDataItem * trackForOutro;
@property (nonatomic) char ignoreUpdateViews;

+ (NSObject *)posterWithDataItem:(ATVDataItem *)arg0;

- (char)brEventAction:(BREvent *)arg0;
- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)controlWasActivated;
- (ATVDataCollection *)playbackStation;
- (void)setPlaybackStation:(ATVDataCollection *)arg0;
- (void)setHistoryView:(ATVRadioNPHistoryView *)arg0;
- (void)setTrackView:(ATVRadioNPTrackView *)arg0;
- (void)setAudioAdView:(ATVRadioNPAdView *)arg0;
- (ATVRadioNPTrackView *)trackView;
- (void)setActiveView:(int)arg0;
- (void)_historyCleared:(id)arg0;
- (void)_willAddStation:(ATVRadioStation *)arg0;
- (void)_dataItemPropertyDidChange:(NSDictionary *)arg0;
- (ATVDataQuery *)historyQuery;
- (int)activeView;
- (void)_reportPageView;
- (void)setActiveView:(int)arg0 reportingPageView:(char)arg1;
- (id)PlaybackStationBinding;
- (void)updateBoundPlaybackStation;
- (char)ignoreUpdateViews;
- (ATVRadioNPHistoryView *)historyView;
- (void)_switchToTrackViewReportingPageView:(char)arg0;
- (void)_fetchHistoryItems;
- (void)_switchToTrackViewIfNeeded;
- (void)setIgnoreUpdateViews:(char)arg0;
- (void)_playbackAssetChanged:(NSNotification *)arg0;
- (ATVRadioNPAdView *)audioAdView;
- (char)_isCurrentPlayingTrackAudioAd;
- (char)_canViewHistoryForCurrentPlayingTrack;
- (ATVRadioNPTransitioningController *)transitioningController;
- (void)_switchToHistoryViewWithEvent:(NSString *)arg0;
- (double)transitioningEndTimeStamp;
- (void)_switchToAudioAdView;
- (void)_switchToTrackView;
- (void)setTransitioningController:(ATVRadioNPTransitioningController *)arg0;
- (void)setTransitioningEndTimeStamp:(double)arg0;
- (void)setTrackForOutro:(ATVDataItem *)arg0;
- (ATVDataItem *)trackForOutro;
- (NSObject *)_currentPlayingTrack;
- (void)setHistoryQuery:(ATVDataQuery *)arg0;
- (char)displayTrackPopup;
- (char)shouldUseMusicContextMenu;
- (char)shouldShowExplanatoryText;
- (void)bindPlaybackStationBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)dealloc;
- (ATVRadioNPView *)init;
- (char)isAccessibilityElement;
- (void).cxx_destruct;
- (NSArray *)historyItems;
- (void)setHistoryItems:(NSArray *)arg0;
- (void)setPlayer:(BRMediaPlayer *)arg0;

@end
