/* Runtime dump - WLDLivePlaybackReporter
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol WLDPlaybackReporterProtocol;
@protocol _WLDStateMachine;

@class WLKPlaybackSummary, WLKSchedule;
@interface WLDLivePlaybackReporter : NSObject <_WLDStateMachine, WLDPlaybackReporterProtocol>
{
    WLKSchedule * _schedule;
    NSObject<OS_dispatch_source> * _timer;
    NSDate * _timerEventDate;
    unsigned int state;
    WLKPlaybackSummary * _lastSummary;
}

@property (retain) WLKPlaybackSummary * lastSummary;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property unsigned int state;

+ (void)_decorateLiveSummary:(id)arg0 completion:(id /* block */)arg1;
+ (void)_decorateEBSSummary:(id)arg0 completion:(id /* block */)arg1;
+ (WLDLivePlaybackReporter *)_tuneEventFromSummary:(id)arg0 schedule:(WLKSchedule *)arg1 tuneIn:(char)arg2;
+ (WLDLivePlaybackReporter *)_contentEventFromSummary:(id)arg0 schedule:(WLKSchedule *)arg1 event:(NSString *)arg2 contentBegin:(char)arg3;
+ (void)decorateSummary:(id)arg0 completion:(id /* block */)arg1;

- (void)setLastSummary:(WLKPlaybackSummary *)arg0;
- (void)_processInput:(unsigned int)arg0 completion:(id /* block */)arg1;
- (void)_doTune:(unsigned int)arg0 completion:(id /* block */)arg1;
- (void)_doContentBoundaryWithCompletion:(id /* block */)arg0;
- (WLKPlaybackSummary *)lastSummary;
- (void)setSchedule:(WLKSchedule *)arg0;
- (void)_evaluateSchedule;
- (void)_reportPlayEvents:(id)arg0 completion:(id /* block */)arg1;
- (void)_configureTimerForDate:(NSDate *)arg0 input:(unsigned int)arg1;
- (void)reportPlayback:(WLKPlaybackSummary *)arg0 completion:(id /* block */)arg1;
- (WLDLivePlaybackReporter *)init;
- (unsigned int)state;
- (void)setState:(unsigned int)arg0;
- (void).cxx_destruct;
- (WLKSchedule *)schedule;

@end
