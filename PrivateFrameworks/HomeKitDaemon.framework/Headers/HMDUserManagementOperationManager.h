/* Runtime dump - HMDUserManagementOperationManager
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserManagementOperationManager : NSObject <HAPTimerDelegate>
{
    NSMutableArray * _operations;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HAPTimer * _saveTimer;
    NSHashTable * _observedAccessories;
}

@property (readonly, nonatomic) NSArray * operations;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (readonly, nonatomic) HAPTimer * saveTimer;
@property (readonly, nonatomic) NSHashTable * observedAccessories;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (void)setSharedManager:(NSObject *)arg0;
+ (HMDUserManagementOperationManager *)sharedManager;

- (void)dealloc;
- (HMDUserManagementOperationManager *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (void)cancelAllOperations;
- (void)addOperation:(NSObject *)arg0;
- (NSString *)shortDescription;
- (void).cxx_destruct;
- (NSArray *)operations;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (void)timerDidFire:(HAPTimer *)arg0;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (HMDUserManagementOperationManager *)initWithOperations:(NSArray *)arg0;
- (void)removeOperation:(NSObject *)arg0;
- (HAPTimer *)saveTimer;
- (void)__registerIfNeededForReachablityChangeNotifications;
- (void)_handleAddedOperation:(NSObject *)arg0;
- (void)__save;
- (void)__registerIfNeededForReachablityChangeNotificationsForAccessory:(id)arg0;
- (void)__executeOperation:(NSObject *)arg0;
- (void)_handleRemovedOperation:(NSObject *)arg0;
- (void)__deregisterIfNeededForReachablityChangeNotificationsForAccessory:(id)arg0;
- (void)__removeOperationAndProcessDependantOperations:(NSArray *)arg0;
- (id)_filteredOperationsWithDependency:(id)arg0;
- (id)_filteredOperationsForAccessory:(id)arg0;
- (NSHashTable *)observedAccessories;
- (void)_handleAccessoryIsReachable:(id)arg0;
- (void)_reallySave;
- (void)operationCancelled:(id)arg0;
- (void)operationStoppedBackingOff:(id)arg0;

@end
