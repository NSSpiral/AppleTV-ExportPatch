/* Runtime dump - GKUpdateGroupNotifier
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKUpdateGroupNotifier : NSObject
{
    GKUpdateGroup * _group;
    NSLock * _lock;
    NSMutableArray * _updateQueue;
    NSError * _error;
}

@property (nonatomic) GKUpdateGroup * group;
@property (retain) NSLock * lock;
@property (retain, nonatomic) NSMutableArray * updateQueue;
@property (retain) NSError * error;

- (GKUpdateGroupNotifier *)retain;
- (void)release;
- (void)dealloc;
- (GKUpdateGroupNotifier *)init;
- (NSLock *)lock;
- (void)setGroup:(GKUpdateGroup *)arg0;
- (GKUpdateGroup *)group;
- (NSError *)error;
- (void)updateError:(NSError *)arg0;
- (void)addUpdate:(NSDate *)arg0 error:(/* block */ id)arg1;
- (void)addUpdatesFromGroup:(NSObject *)arg0;
- (void)setLock:(NSLock *)arg0;
- (NSMutableArray *)updateQueue;
- (void)setUpdateQueue:(NSMutableArray *)arg0;
- (void)setError:(NSError *)arg0;

@end
