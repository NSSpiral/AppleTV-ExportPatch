/* Runtime dump - HMService
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMService : NSObject <NSSecureCoding, HMObjectMerge>
{
    char _userInteractive;
    NSUUID * _uniqueIdentifier;
    HMAccessory * _accessory;
    NSString * _serviceType;
    NSString * _name;
    NSString * _associatedServiceType;
    NSNumber * _instanceID;
    HMThreadSafeMutableArrayCollection * _currentCharacteristics;
    NSObject<OS_dispatch_queue> * _workQueue;
    HMMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDelegateCaller * _delegateCaller;
}

@property (weak, nonatomic) HMAccessory * accessory;
@property (copy, nonatomic) NSString * serviceType;
@property (readonly, copy, nonatomic) NSString * localizedDescription;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * associatedServiceType;
@property (readonly, copy, nonatomic) NSArray * characteristics;
@property (readonly, copy, nonatomic) NSUUID * uniqueIdentifier;
@property (readonly, nonatomic) char userInteractive;
@property (readonly, nonatomic) NSNumber * instanceID;
@property (copy, nonatomic) HMThreadSafeMutableArrayCollection * currentCharacteristics;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) HMMessageDispatcher * msgDispatcher;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (retain, nonatomic) HMDelegateCaller * delegateCaller;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)_serviceTypeAsString:(NSString *)arg0;
+ (char)supportsSecureCoding;

- (HMDelegateCaller *)delegateCaller;
- (void)setDelegateCaller:(HMDelegateCaller *)arg0;
- (void)_configure:(id)arg0 clientQueue:(NSObject<OS_dispatch_queue> *)arg1 delegateCaller:(HMDelegateCaller *)arg2;
- (void)_updateName:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)updateName:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (id)_findCharacteristic:(id)arg0;
- (void)_addCharacteristic:(HMCharacteristic *)arg0;
- (void)_handleUpdateName:(NSString *)arg0;
- (HMThreadSafeMutableArrayCollection *)currentCharacteristics;
- (void)_updateAssociatedServiceType:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (char)_hasCharacteristicOfType:(NSObject *)arg0;
- (void)setAssociatedServiceType:(NSString *)arg0;
- (char)_hasCharacteristic:(HMCharacteristic *)arg0;
- (void)updateAssociatedServiceType:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (NSString *)_serviceTypeDescription;
- (char)isUserInteractive;
- (void)setCurrentCharacteristics:(HMThreadSafeMutableArrayCollection *)arg0;
- (HMService *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMService *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)localizedDescription;
- (NSUUID *)uniqueIdentifier;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (NSArray *)characteristics;
- (NSNumber *)instanceID;
- (void)setAccessory:(HMAccessory *)arg0;
- (HMAccessory *)accessory;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (NSString *)serviceType;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (HMMessageDispatcher *)msgDispatcher;
- (void)setMsgDispatcher:(HMMessageDispatcher *)arg0;
- (void)setClientQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSString *)associatedServiceType;
- (void)_removeCharacteristic:(HMCharacteristic *)arg0;
- (void)setPropertyQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)_handleUpdateAssociatedServiceType:(NSObject *)arg0;
- (void)setServiceType:(NSString *)arg0;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;

@end
