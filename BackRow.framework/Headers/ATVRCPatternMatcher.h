/* Runtime dump - ATVRCPatternMatcher
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVRCButtonPatternSet;
@interface ATVRCPatternMatcher : NSObject
{
    int _matchState;
    int _buttonState;
    ATVRCButtonPatternSet * _patternSet;
    long _matchIndex;
    NSTimer * _discontinuityTrigger;
    NSTimer * _holdTrigger;
    double _lastEventTimestamp;
    unsigned long _pairingMask;
    unsigned long _payloadMask;
    unsigned long _pairingID;
    NSArray * _upEvents;
    NSArray * _holdEvents;
    NSArray * _downEvents;
    <ATVRCPatternMatcherDelegate> * _delegate;
}

+ (NSObject *)findRepeatPattern:(NSObject *)arg0 startIndex:(long)arg1;
+ (NSObject *)findFirstPattern:(NSObject *)arg0 startIndex:(long)arg1 minPatternLength:(long)arg2;
+ (char)matchPattern:(NSObject *)arg0 pattern:(TSDStrokePattern *)arg1 atIndex:(long)arg2;
+ (char)matchEvent:(NSObject *)arg0 withEvent:(NSString *)arg1;
+ (char)findEventInSet:(NSSet *)arg0 event:(NSString *)arg1 startIndex:(long)arg2 numEventstoSearch:(long)arg3;
+ (double)intervalBetweenLastEvents:(id)arg0;
+ (double)intervalBetweenFirstAndLastEvent:(NSObject *)arg0;

- (void)_resetDiscontinuityTrigger;
- (void)_clearDiscontinuityTrigger;
- (void)setPatternSet:(ATVRCButtonPatternSet *)arg0;
- (void)setPairingInfo:(unsigned long)arg0 pairingMask:(unsigned long)arg1 payloadMask:(unsigned long)arg2;
- (void)_clearHoldTrigger;
- (void)_checkDiscontinuityTrigger:(id)arg0;
- (NSDictionary *)_processPairingInfo:(NSDictionary *)arg0 uidMismatchStatus:(char *)arg1;
- (char)_matchEvent:(NSObject *)arg0 against:(id)arg1;
- (void)_commandPatternMatched;
- (void)_discontinuityTriggered;
- (ATVRCPatternMatcher *)initWithPatternSet:(ATVRCButtonPatternSet *)arg0 delegate:(<ATVRCPatternMatcherDelegate> *)arg1;
- (ATVRCButtonPatternSet *)patternSet;
- (void)setDownEvents:(NSArray *)arg0;
- (void)setHoldEvents:(NSArray *)arg0;
- (void)setUpEvents:(NSArray *)arg0;
- (NSArray *)downEvents;
- (NSArray *)holdEvents;
- (NSArray *)upEvents;
- (char)processEvent:(NSObject *)arg0 uidMismatchStatus:(char *)arg1;
- (void)forceReleaseState;
- (void)_dispatchEvents:(id)arg0;
- (void)_resetHoldTrigger;
- (double)_discontinuityTriggerInterval;
- (void)_holdTriggered;
- (void)dealloc;
- (void)setDelegate:(<ATVRCPatternMatcherDelegate> *)arg0;
- (void)reset;

@end
