/* Runtime dump - BRCDiskSpaceReclaimer
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDiskSpaceReclaimer : NSObject
{
    BRCAccountSession * _session;
    char _isClosed;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * queue;

- (void)close;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (BRCDiskSpaceReclaimer *)initWithAccountSession:(NSObject *)arg0;
- (long long)computePurgableSpaceWithUrgency:(int)arg0;
- (long long)purgeSpace:(long long)arg0 withUrgency:(int)arg1;
- (long long)periodicReclaimSpace:(long long)arg0 withUrgency:(int)arg1;
- (char)renameAndUnlinkInBackgroundItemAtPath:(NSString *)arg0;
- (char)documentWasCreated:(id)arg0;
- (char)documentChangedEvictability:(id)arg0;
- (char)documentWasDeleted:(id)arg0;
- (NSObject *)descriptionForItem:(NSObject *)arg0 context:(NSObject *)arg1;
- (void)unlinkInBackgroundItemsRenamedBeforeRestart;
- (void)didAccessDocument:(NSObject *)arg0;
- (char)documentWasAccessed:(id)arg0;
- (void)_enumerateItemsForEvictSyncWithBlock:(id /* block */)arg0 withUrgency:(/* block */ id)arg1;
- (long long)_purgeSpaceUnderQueue:(long long)arg0 withUrgency:(int)arg1;

@end
