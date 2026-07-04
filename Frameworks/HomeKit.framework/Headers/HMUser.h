/* Runtime dump - HMUser
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMUser : NSObject <NSSecureCoding, HMObjectMerge>
{
    char _administrator;
    NSUUID * _uniqueIdentifier;
    NSString * _name;
    HMHomeAccessControl * _homeAccessControl;
    NSString * _userID;
    HMHome * _home;
    NSUUID * _uuid;
    HMDelegateCaller * _delegateCaller;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (copy, nonatomic) NSString * name;
@property (readonly, copy, nonatomic) NSUUID * uniqueIdentifier;
@property (retain, nonatomic) HMHomeAccessControl * homeAccessControl;
@property (readonly, nonatomic) NSUUID * uuid;
@property (weak, nonatomic) HMHome * home;
@property (nonatomic) char administrator;
@property (retain, nonatomic) HMDelegateCaller * delegateCaller;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (copy, nonatomic) NSString * userID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (HMDelegateCaller *)delegateCaller;
- (void)setDelegateCaller:(HMDelegateCaller *)arg0;
- (void)_configure:(id)arg0 clientQueue:(NSObject<OS_dispatch_queue> *)arg1 delegateCaller:(HMDelegateCaller *)arg2;
- (void)_unconfigure;
- (HMUser *)initWithUserID:(NSString *)arg0 name:(NSString *)arg1 uuid:(NSUUID *)arg2 home:(HMHome *)arg3;
- (HMUser *)initWithUserID:(NSString *)arg0 name:(NSString *)arg1 uuid:(NSUUID *)arg2 home:(HMHome *)arg3 isAdministrator:(char)arg4;
- (HMHomeAccessControl *)homeAccessControl;
- (void)setAdministrator:(char)arg0;
- (void)setHomeAccessControl:(HMHomeAccessControl *)arg0;
- (HMUser *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMUser *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSUUID *)uniqueIdentifier;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (HMHome *)home;
- (void)setHome:(HMHome *)arg0;
- (void)setClientQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSString *)userID;
- (void)setUserID:(NSString *)arg0;
- (char)administrator;
- (void)setPropertyQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;

@end
