/* Runtime dump - BWSinkNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSinkNode : BWNode
{
    FigStateMachine * _stateMachine;
    int _stateLock;
    NSMutableArray * _handlersToCallWhenIdle;
    NSMutableArray * _handlersToCallWhenActive;
    struct OpaqueFigSimpleMutex * _configurationHandlerLock;
    long long _liveConfigurationID;
    NSMutableArray * _configurationLiveHandlers;
    NSMutableArray * _configurationLiveIDs;
}

@property (readonly) NSString * currentStateDebugString;
@property (readonly) long long liveConfigurationID;

+ (void)initialize;

- (void)dealloc;
- (BWSinkNode *)init;
- (NSString *)nodeType;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (long long)liveConfigurationID;
- (void)_setupSinkNodeStateMachine;
- (void)notifyWhenActive:(id)arg0;
- (void)notifyWhenIdle:(id)arg0;
- (void)notifyWhenConfigurationID:(long long)arg0 becomesLive:(id)arg1;
- (NSString *)currentStateDebugString;

@end
