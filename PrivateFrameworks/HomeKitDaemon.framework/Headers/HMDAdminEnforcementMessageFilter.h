/* Runtime dump - HMDAdminEnforcementMessageFilter
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAdminEnforcementMessageFilter : HMDMessageFilter
{
    NSString * _localAdminName;
    NSMutableDictionary * _adminsOfHomes;
    NSMutableDictionary * _objectsContainedInHomes;
}

@property (retain, nonatomic) NSString * localAdminName;
@property (retain, nonatomic) NSMutableDictionary * adminsOfHomes;
@property (retain, nonatomic) NSMutableDictionary * objectsContainedInHomes;

+ (char)isBlackListedMessageForWatch:(id)arg0;
+ (char)isWhitelistedMessage:(NSString *)arg0;

- (void).cxx_destruct;
- (HMDAdminEnforcementMessageFilter *)initWithName:(NSString *)arg0;
- (void)resetConfiguration;
- (char)acceptMessage:(NSString *)arg0 target:(NSObject *)arg1 errorReason:(id *)arg2;
- (NSMutableDictionary *)adminsOfHomes;
- (NSMutableDictionary *)objectsContainedInHomes;
- (void)setLocalAdminName:(NSString *)arg0;
- (NSString *)_localAdministratorName;
- (NSString *)localAdminName;
- (void)addHomeWithUUID:(id)arg0 administratorName:(NSString *)arg1;
- (void)addObjectWithUUID:(id)arg0 containedInHome:(id)arg1;
- (void)localAdministratorName;
- (void)setAdminsOfHomes:(NSMutableDictionary *)arg0;
- (void)setObjectsContainedInHomes:(NSMutableDictionary *)arg0;

@end
