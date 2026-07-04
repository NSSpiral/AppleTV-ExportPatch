/* Runtime dump - MFActivityMonitor
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFActivityMonitor : MFPriorityDesignator
{
    NSThread * _runningThread;
    NSString * _taskName;
    NSString * _displayName;
    NSString * _statusMessage;
    NSString * _descriptionString;
    MFInvocationQueue * _ourQueue;
    double _percentDone;
    id _key;
    id _canCancel;
    id _shouldCancel;
    id _isActive;
    id _changeCount;
    id _delegate;
    id _target;
    MFError * _error;
    unsigned int _expectedLength;
    unsigned int _maxCount;
    unsigned int _currentCount;
    double _currentItemPercentDone;
    id _supportsPerItemProgress;
    MFMailboxUid * _mailbox;
    double _lastTime;
    double _startTime;
    unsigned int _gotNewMessagesState;
    unsigned int _bytesRead;
    unsigned int _bytesWritten;
    NSMutableSet * _reasons;
}

@property (retain) MFMailboxUid * mailbox;

+ (MFActivityMonitor *)currentMonitor;
+ (void)destroyMonitor;

- (void)setMaxCount:(unsigned int)arg0;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (MFActivityMonitor *)init;
- (NSString *)description;
- (char)isActive;
- (void)reset;
- (int)changeCount;
- (NSString *)displayName;
- (double)startTime;
- (MFError *)error;
- (void)setDisplayName:(NSString *)arg0;
- (void)setMailbox:(MFMailboxUid *)arg0;
- (void)addReason:(NSString *)arg0;
- (char)shouldCancel;
- (char)canBeCancelled;
- (void)setCanBeCancelled:(char)arg0;
- (void)resetConnectionStats;
- (void)setPercentDone:(double)arg0;
- (unsigned int)bytesWritten;
- (MFMailboxUid *)mailbox;
- (void)setExpectedLength:(unsigned int)arg0;
- (unsigned int)expectedLength;
- (void)setGotNewMessagesState:(unsigned int)arg0;
- (void)recordBytesWritten:(unsigned int)arg0;
- (void)recordBytesRead:(unsigned int)arg0;
- (unsigned int)bytesRead;
- (void)setShouldCancel:(char)arg0;
- (void)postActivityStarting;
- (void)postActivityFinished:(id)arg0;
- (NSNotification *)userInfoForNotification;
- (void)postDidChangeWithUserInfo:(NSDictionary *)arg0;
- (id)_ntsThrottledUserInfoDict;
- (void)setSupportsPerItemProgress:(char)arg0;
- (double)percentDone;
- (void)setStatusMessage:(NSString *)arg0 percentDone:(double)arg1;
- (void)setStatusMessage:(NSString *)arg0 percentDone:(double)arg1 withKey:(int)arg2;
- (void)setPercentDone:(double)arg0 withKey:(int)arg1;
- (void)setDisplayName:(NSString *)arg0 maxCount:(unsigned int)arg1;
- (void)addActivityTarget:(NSObject *)arg0;
- (char)_lockedAddActivityTarget:(NSObject *)arg0;
- (void)removeActivityTarget:(NSObject *)arg0;
- (NSObject *)primaryTarget;
- (void)setPrimaryTarget:(NSObject *)arg0;
- (void)cancelMessage;
- (void)_didChange;
- (void)setStatusMessage:(NSString *)arg0 withKey:(int)arg1;
- (void)startActivity;
- (void)finishedActivity:(id)arg0;
- (void)notifyConnectionEstablished;
- (void)setCurrentCount:(unsigned int)arg0;
- (void)setPercentDoneOfCurrentItem:(double)arg0;
- (unsigned int)gotNewMessagesState;
- (char)hasReason:(char)arg0;
- (NSMutableSet *)reasons;
- (void)setStatusMessage:(NSString *)arg0;
- (NSString *)statusMessage;
- (NSString *)taskName;
- (void)setTaskName:(NSString *)arg0;
- (void)setActivityTarget:(NSObject *)arg0;
- (NSObject *)activityTarget;
- (void)addActivityTargets:(id)arg0;
- (id)activityTargets;
- (void)setInvocationQueue:(NSObject *)arg0;
- (int)acquireExclusiveAccessKey;
- (void)relinquishExclusiveAccessKey:(int)arg0;
- (void)setError:(MFError *)arg0;

@end
