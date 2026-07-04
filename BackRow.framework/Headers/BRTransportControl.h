/* Runtime dump - BRTransportControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRStrokeAndFillTextControl, BRTextControl, BRTransportLayer;
@interface BRTransportControl : BRControl
{
    long _duration;
    long _elapsedTime;
    <BRTransportDataProvider> * _dataProvider;
    BRTransportLayer * _transportLayer;
    BRTextControl * _durationLayer;
    BRStrokeAndFillTextControl * _elapsedTimeLayer;
    BRTextControl * _leftSideTextLayer;
    BRStrokeAndFillTextControl * _chapterLayer;
    BRImageControl * _airPlayLayer;
    NSArray * _chapterMarkers;
    NSArray * _interstitialMarkers;
    NSDateFormatter * _timeFormatter;
    NSTimer * _fadeTimer;
    NSTimer * _transportBarTimer;
}

- (void)layoutSubcontrols;
- (void)setDataProvider:(<BRTransportDataProvider> *)arg0 eventSource:(NSObject *)arg1;
- (void)hideTransport;
- (BRTransportControl *)initWithSpinner:(char)arg0;
- (void)setShowChapterMarks:(char)arg0;
- (void)showTransportWithMediumTimeout;
- (void)showTransport;
- (void)showTransportWithLongTimeout;
- (void)setChapterMarkersNeedUpdate;
- (void)_handleTimeSkip:(id)arg0;
- (void)_handleStateChange:(NSDictionary *)arg0;
- (void)_handleVolumeChange:(NSDictionary *)arg0;
- (void)_handlePlayerAssetChanged:(NSNotification *)arg0;
- (void)_handleDurationChange:(NSDictionary *)arg0;
- (void)_handlePlayerTimeChanged:(NSNotification *)arg0;
- (void)_handleBufferChanged:(NSNotification *)arg0;
- (void)_trackPopUpWillShow:(NSNotification *)arg0;
- (void)_showTransportTimerFired:(id)arg0;
- (void)_updateAll;
- (void)_hideTransport;
- (void)_showTransportWithTimeoutInSeconds:(float)arg0;
- (void)showTransportWithShortTimeout;
- (void)_updateTimeAndBufferingForLiveContent;
- (void)_updateTimeForNonLiveContent;
- (void)_updateBufferingProgressForNonLiveContent;
- (NSDictionary *)_trackTimeAttributes;
- (NSDictionary *)_chapterAttributes;
- (char)_shouldShowChapterGroupName;
- (char)_shouldShowChapterMarks;
- (id)_chapterMarkerLocations;
- (id)_interstitialMarkerLocations;
- (void)_updateChaptersAndInterstitials;
- (void)_showTransportWithTimeout;
- (void)_showTransport;
- (void)_fadeTransport:(id)arg0;
- (void)dealloc;
- (char)isHidden;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;

@end
