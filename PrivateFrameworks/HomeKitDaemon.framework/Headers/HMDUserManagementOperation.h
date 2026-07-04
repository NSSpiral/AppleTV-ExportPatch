/* Runtime dump - HMDUserManagementOperation
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserManagementOperation : NSObject <HAPTimerDelegate, NSSecureCoding>
{
    NSMutableArray * _dependencies;
    char _executing;
    char _backingOff;
    unsigned int _state;
    HMDUserManagementOperationManager * _operationManager;
    <HMDUserManagementOperationDelegate> * _delegate;
    NSUUID * _identifier;
    unsigned int _operationType;
    HMDUser * _user;
    HMDAccessory * _accessory;
    NSDate * _expirationDate;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HAPTimer * _expirationTimer;
    HAPTimer * _backoffTimer;
    double _backoffInterval;
}

@property (weak) <HMDUserManagementOperationDelegate> * delegate;
@property (readonly, nonatomic) NSUUID * identifier;
@property (readonly, nonatomic) unsigned int operationType;
@property (readonly, nonatomic) HMDUser * user;
@property (retain, nonatomic) HMDAccessory * accessory;
@property (nonatomic) char executing;
@property (readonly, nonatomic) char finished;
@property (readonly, nonatomic) char cancelled;
@property (readonly, nonatomic) char ready;
@property (readonly, nonatomic) char expired;
@property (readonly, nonatomic) NSDate * expirationDate;
@property (readonly, copy, nonatomic) NSArray * dependencies;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (nonatomic) unsigned int state;
@property (readonly, nonatomic) HAPTimer * expirationTimer;
@property (retain, nonatomic) HMDUserManagementOperationManager * operationManager;
@property (readonly, nonatomic) double backoffInterval;
@property (retain, nonatomic) HAPTimer * backoffTimer;
@property (nonatomic) char backingOff;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;
+ (HMDUserManagementOperation *)addUserManagementOperationForUser:(id)arg0 accessory:(HMDAccessory *)arg1;
+ (HMDUserManagementOperation *)removeUserManagementOperationForUser:(id)arg0 accessory:(HMDAccessory *)arg1;

- (void)cancel;
- (HMDUserManagementOperation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<HMDUserManagementOperationDelegate> *)arg0;
- (HMDUserManagementOperation *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (<HMDUserManagementOperationDelegate> *)delegate;
- (unsigned int)state;
- (void)setState:(unsigned int)arg0;
- (NSUUID *)identifier;
- (char)isValid;
- (char)isCancelled;
- (NSString *)shortDescription;
- (void).cxx_destruct;
- (char)isFinished;
- (char)isExecuting;
- (void)setExecuting:(char)arg0;
- (void)addDependency:(id)arg0;
- (HMDUser *)user;
- (char)isExpired;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (void)setAccessory:(HMDAccessory *)arg0;
- (HMDAccessory *)accessory;
- (void)setBackoffTimer:(HAPTimer *)arg0;
- (HAPTimer *)backoffTimer;
- (void)timerDidFire:(HAPTimer *)arg0;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (char)mergeWithOperation:(NSObject *)arg0;
- (void)executeWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0 completionHandler:(id /* block */)arg1;
- (NSArray *)dependencies;
- (void)setOperationManager:(HMDUserManagementOperationManager *)arg0;
- (char)isReady;
- (HMDUserManagementOperation *)initWithOperationType:(unsigned int)arg0 user:(HMDUser *)arg1 accessory:(HMDAccessory *)arg2 expiration:(NSDate *)arg3;
- (void)_setupExpirationTimer;
- (HAPTimer *)expirationTimer;
- (char)_isFinished;
- (char)isBackingOff;
- (HMDUserManagementOperationManager *)operationManager;
- (double)backoffInterval;
- (double)nextBackoffInterval;
- (void)setBackingOff:(char)arg0;
- (void)_startBackoffTimer;
- (void)_addPairingToAccessory:(id)arg0 identifier:(NSUUID *)arg1 publicKey:(NSString *)arg2 completionHandler:(id /* block */)arg3;
- (void)_removePairingFromAccessory:(id)arg0 identifier:(NSUUID *)arg1 publicKey:(NSString *)arg2 completionHandler:(id /* block */)arg3;
- (void)_endBackoffTimer;
- (unsigned int)operationType;
- (NSDate *)expirationDate;

@end
