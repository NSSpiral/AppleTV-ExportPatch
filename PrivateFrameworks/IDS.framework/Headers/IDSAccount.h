/* Runtime dump - IDSAccount
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSAccount : NSObject
{
    _IDSAccount * _internal;
}

@property (retain, nonatomic) NSString * loginID;
@property (readonly, retain, nonatomic) NSString * serviceName;
@property (readonly, nonatomic) char isActive;
@property (readonly, nonatomic) char canSend;
@property (readonly, retain, nonatomic) NSArray * devices;
@property (readonly, retain, nonatomic) NSArray * nearbyDevices;
@property (readonly, retain, nonatomic) NSArray * aliases;
@property (readonly, retain, nonatomic) NSArray * aliasStrings;
@property (readonly, retain, nonatomic) NSArray * vettedAliases;
@property (readonly, retain, nonatomic) NSDictionary * profileInfo;
@property (retain, nonatomic) NSDictionary * accountInfo;
@property (readonly, nonatomic) int accountType;
@property (readonly, retain, nonatomic) NSString * uniqueID;
@property (readonly, retain, nonatomic) NSString * displayName;
@property (readonly, nonatomic) int registrationStatus;
@property (readonly, nonatomic) NSArray * registeredURIs;
@property (readonly, nonatomic) NSData * registrationCertificate;
@property (readonly, nonatomic) NSDate * dateRegistered;
@property (readonly, nonatomic) NSDate * nextRegistrationDate;
@property (readonly, nonatomic) NSData * pushToken;
@property (readonly, nonatomic) NSString * regionID;
@property (readonly, nonatomic) NSString * regionBasePhoneNumber;
@property (readonly, nonatomic) NSDictionary * regionServerContext;
@property (readonly, nonatomic) NSString * profileID;
@property (readonly, retain, nonatomic) NSString * primaryServiceName;

- (_IDSAccount *)_internal;
- (void)dealloc;
- (NSString *)description;
- (char)isActive;
- (char)_isEnabled;
- (NSString *)displayName;
- (NSString *)regionID;
- (int)accountType;
- (void)setAuthToken:(NSString *)arg0;
- (void)setPassword:(NSString *)arg0;
- (NSData *)pushToken;
- (NSString *)serviceName;
- (NSArray *)devices;
- (void)addDelegate:(NSObject *)arg0 queue:(NSObject *)arg1;
- (void)removeDelegate:(NSObject *)arg0;
- (NSArray *)aliasStrings;
- (NSDictionary *)_initWithDictionary:(NSDictionary *)arg0 uniqueID:(NSString *)arg1 serviceName:(NSString *)arg2;
- (void)setAccountInfo:(NSDictionary *)arg0;
- (void)_setIsEnabled:(char)arg0;
- (void)setLoginID:(NSString *)arg0;
- (NSString *)primaryServiceName;
- (char)canSend;
- (NSArray *)nearbyDevices;
- (NSDictionary *)profileInfo;
- (NSDate *)nextRegistrationDate;
- (NSDate *)dateRegistered;
- (NSString *)regionBasePhoneNumber;
- (NSDictionary *)regionServerContext;
- (NSString *)profileID;
- (void)_callNearbyDevicesChanged;
- (IDSAccount *)initWithLoginID:(NSString *)arg0 uniqueID:(NSString *)arg1 serviceName:(NSString *)arg2;
- (NSString *)loginID;
- (void)authenticateAccount;
- (void)registerAccount;
- (void)unregisterAccount;
- (void)updateAuthorizationCredentials:(NSString *)arg0 token:(NSString *)arg1;
- (void)passwordUpdated;
- (void)addAliases:(NSArray *)arg0;
- (void)removeAliases:(NSArray *)arg0;
- (void)validateAliases:(NSArray *)arg0;
- (void)unvalidateAliases:(NSArray *)arg0;
- (void)validateProfile;
- (void)updateAccountWithAccountInfo:(NSDictionary *)arg0;
- (NSDictionary *)accountInfo;
- (void)addRegistrationDelegate:(NSObject *)arg0 queue:(NSObject *)arg1;
- (void)removeRegistrationDelegate:(NSObject *)arg0;
- (IDSAccount *)initWithDictionary:(NSDictionary *)arg0 uniqueID:(NSString *)arg1 serviceName:(NSString *)arg2;
- (NSArray *)registeredURIs;
- (NSArray *)aliases;
- (void)deactivateAndPurgeIdentify;
- (NSArray *)vettedAliases;
- (void)_reregisterAndReidentify:(char)arg0;
- (NSData *)registrationCertificate;
- (int)registrationStatus;
- (NSString *)uniqueID;

@end
