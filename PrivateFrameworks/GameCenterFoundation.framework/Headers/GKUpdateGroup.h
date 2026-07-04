/* Runtime dump - GKUpdateGroup
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKUpdateGroup : NSObject
{
    NSObject<OS_dispatch_queue> * _targetQueue;
    NSMutableArray * _notifiers;
    NSObject<OS_dispatch_group> * _dispatchGroup;
    NSLock * _lock;
    NSError * _error;
    NSString * _name;
}

@property (retain) NSError * error;
@property (readonly, nonatomic) int updateCount;
@property (retain) NSLock * lock;
@property (nonatomic) NSObject<OS_dispatch_queue> * targetQueue;
@property (retain, nonatomic) NSMutableArray * notifiers;
@property (nonatomic) NSObject<OS_dispatch_group> * dispatchGroup;
@property (retain, nonatomic) NSString * name;

+ (GKUpdateGroup *)updateGroup;
+ (GKUpdateGroup *)updateGroupWithName:(NSString *)arg0;
+ (GKUpdateGroup *)updateGroupForTargetQueue:(NSObject *)arg0;
+ (GKUpdateGroup *)updateGroupWithName:(NSString *)arg0 taregetQueue:(NSObject *)arg1;

- (int)updateCount;
- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSLock *)lock;
- (void)perform:(id)arg0;
- (NSError *)error;
- (void)setTargetQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_group> *)dispatchGroup;
- (void)applyUpdates;
- (void)join:(int)arg0;
- (void)setLock:(NSLock *)arg0;
- (GKUpdateGroup *)initWithName:(NSString *)arg0 targetQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (NSMutableArray *)notifiers;
- (void)performOnQueue:(NSObject *)arg0 block:(id /* block */)arg1;
- (void)cancelUpdates;
- (void)setNotifiers:(NSMutableArray *)arg0;
- (void)setDispatchGroup:(NSObject<OS_dispatch_group> *)arg0;
- (NSObject<OS_dispatch_queue> *)targetQueue;
- (void)setError:(NSError *)arg0;
- (void)wait;

@end
