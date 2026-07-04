/* Runtime dump - BRApplication
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl, BREvent;
@interface BRApplication : FBSystemApp
{
    BREvent * _currentEvent;
    NSMutableArray * _eventQueue;
    struct __CFRunLoopSource * _source;
    struct __CFRunLoop * _mainRunLoop;
    double _flushBeforeTimeStamp;
    char _handlingEvent;
    char _eventsBlocked;
    char _wantsSpaceCharacters;
    <BRResponder> * _firstBRResponder;
}

@property (nonatomic) <BRApplicationDelegate> * delegate;

+ (void)_setupLogging;
+ (NSString *)substringStartingAtFirstNonNoiseWordFromString:(NSString *)arg0;
+ (BRApplication *)labelNoiseWords;
+ (NSSet *)arrayByFilteringWordsInSet:(NSSet *)arg0 fromArray:(NSArray *)arg1;
+ (BRApplication *)sharedApplication;

- (char)_processForTypeahead:(id)arg0 wasHandledAlready:(char)arg1;
- (void)setFirstBRResponder:(<BRResponder> *)arg0;
- (void)submitAggregateReportingNow;
- (void)emptyQueue;
- (void)adjustToDisplayChange;
- (char)_interceptHIDEvent:(struct __IOHIDEvent *)arg0;
- (<BRResponder> *)firstBRResponder;
- (char)wantsSpaceCharacters;
- (void)setWantsSpaceCharacters:(char)arg0;
- (void)dispatchEventOnEventThread:(NSObject *)arg0;
- (void)blockEvents;
- (void)unblockEvents;
- (char)_willSendEventForHandling:(id *)arg0;
- (void)sendBREventToTopApplication:(id)arg0;
- (void)startedTest:(id /* block */)arg0 options:(NSDictionary *)arg1;
- (void)failedTest:(id /* block */)arg0 options:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)finishedTest:(id /* block */)arg0 options:(NSDictionary *)arg1;
- (void)_dumpControl:(BRControl *)arg0 levelsDeep:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (void)_dumpAccessibilityTags:(unsigned int)arg0;
- (void)_dumpBindingInfo:(unsigned int)arg0;
- (void)_dumpControlGeometry:(unsigned int)arg0;
- (void)_dumpStackGeometry:(unsigned int)arg0;
- (char)findAndSelectControlWithAccessibilityTag:(NSString *)arg0;
- (NSString *)_controlWithAccessibilityName:(NSString *)arg0 inControl:(BRControl *)arg1 matchedTerms:(unsigned int *)arg2 prefixWins:(char)arg3 useFocusProximity:(char)arg4;
- (NSString *)controlWithName:(NSString *)arg0 prefixMatch:(char)arg1 useFocusProximity:(char)arg2;
- (char)focusControl:(BRControl *)arg0;
- (void)startLogTest:(id /* block */)arg0;
- (void)startYouTubePlayTest:(id /* block */)arg0;
- (void)startScreenSaverTest:(id /* block */)arg0;
- (void)startMoviePreviewPlayTest:(id /* block */)arg0;
- (void)endScreenSaverTest;
- (void)dealloc;
- (BRApplication *)init;
- (void)applicationWillTerminate;
- (char)_handlePhysicalButtonEvent:(NSObject *)arg0;
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg0;
- (void)_handler;
- (char)runTest:(id /* block */)arg0 options:(NSDictionary *)arg1;
- (void).cxx_destruct;
- (void)setupDisplayManagement;
- (void)postEvent:(NSObject *)arg0;
- (char)_accessibilityIsSystemAppServer;
- (NSObject *)_accessibilityResponderElement;
- (BREvent *)currentEvent;

@end
