/* Runtime dump - BKSEventFocusManager
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSEventFocusManager : NSObject
{
    char _needsFlush;
    char _systemAppControlsFocusOnMainDisplay;
    NSMutableSet * _currentState;
    NSMutableDictionary * _pendingStatesByPriority;
}

@property (readonly, nonatomic) NSMutableSet * currentState;
@property (readonly, nonatomic) NSMutableDictionary * pendingStatesByPriority;
@property (nonatomic) char needsFlush;
@property (nonatomic) char systemAppControlsFocusOnMainDisplay;

+ (BKSEventFocusManager *)sharedInstance;

- (void)dealloc;
- (BKSEventFocusManager *)init;
- (NSString *)description;
- (void)flush;
- (NSMutableSet *)currentState;
- (void)deferEventsForClientWithProperties:(NSDictionary *)arg0 toClientWithProperties:(NSDictionary *)arg1;
- (char)needsFlush;
- (void)setNeedsFlush:(char)arg0;
- (void)deferEventsForClientWithProperties:(NSDictionary *)arg0 toClientWithProperties:(NSDictionary *)arg1 withPriority:(int)arg2;
- (void)_pruneSet:(NSSet *)arg0 ofDeferralsPassingTest:(id /* block */)arg1;
- (NSMutableDictionary *)pendingStatesByPriority;
- (void)reallyFlushWithSet:(NSSet *)arg0;
- (void)setSystemAppControlsFocusOnMainDisplay:(char)arg0;
- (char)systemAppControlsFocusOnMainDisplay;
- (void)setForegroundApplicationOnMainDisplay:(NSObject *)arg0 pid:(int)arg1;

@end
