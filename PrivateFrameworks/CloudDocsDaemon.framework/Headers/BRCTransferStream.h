/* Runtime dump - BRCTransferStream
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCTransferStream : NSObject <BRCLifeCycle>
{
    BRCAccountSession * _session;
    BRCSyncContext * _syncContext;
    long long _nextFire;
    NSMutableDictionary * _inFlightOpByID;
    BRCDeadlineToken * _schedulingToken;
    NSObject<OS_dispatch_queue> * _transferQueue;
    char _hasReachedCap;
    char _isCancelled;
    id _getNextJob;
}

@property (copy, nonatomic) id getNextJob;
@property (readonly) NSArray * operations;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char isCancelled;

- (void)cancel;
- (void)suspend;
- (char)isCancelled;
- (void)addOperation:(NSObject *)arg0;
- (void)resume;
- (void)close;
- (void).cxx_destruct;
- (NSArray *)operations;
- (void)_close;
- (void)setIsCancelled:(char)arg0;
- (void)_schedule;
- (double)progressForTransferID:(NSObject *)arg0 operationID:(NSString *)arg1;
- (void)wakeUpForNextWorkAt:(long long)arg0;
- (void)cancelTransferID:(NSObject *)arg0 operationID:(NSString *)arg1;
- (void)addAliasItem:(NSObject *)arg0 toTransferWithID:(int)arg1 operationID:(NSString *)arg2;
- (void)_setReachedCap:(char)arg0;
- (void)_evaluateCap;
- (void)_addOperation:(NSObject *)arg0;
- (BRCTransferStream *)initWithSyncContext:(BRCSyncContext *)arg0 name:(NSString *)arg1 scheduler:(_SBFImmediateScheduler *)arg2;
- (id)getNextJob;
- (void)setGetNextJob:(id)arg0;

@end
