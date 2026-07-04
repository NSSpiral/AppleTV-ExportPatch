/* Runtime dump - SSVSubscriptionStatus
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSubscriptionStatus : NSObject <SSXPCCoding, NSCopying>
{
    NSNumber * _accountIdentifier;
    NSArray * _accountPermissions;
    int _accountStatus;
    unsigned long long _acceptedStoreTermsVersion;
    int _carrierBundlingStatus;
    NSString * _cellularOperatorName;
    char _discoveryModeEligible;
    char _familyOrganizer;
    char _familySubscription;
    char _hasFamily;
    char _hasFamilyMembers;
    unsigned long long _latestStoreTermsVersion;
    NSString * _phoneNumber;
    double _subscriptionExpirationTime;
    char _subscriptionPurchaser;
    NSString * _sessionIdentifier;
}

@property (readonly, nonatomic) unsigned long long MP_capabilities;
@property (copy, nonatomic) NSNumber * accountIdentifier;
@property (copy, nonatomic) NSString * cellularOperatorName;
@property (copy, nonatomic) NSString * phoneNumber;
@property (copy, nonatomic) NSArray * accountPermissions;
@property (nonatomic) int accountStatus;
@property (nonatomic) int carrierBundlingStatus;
@property (nonatomic) char discoveryModeEligible;
@property (nonatomic) char familyOrganizer;
@property (nonatomic) char familySubscription;
@property (nonatomic) char hasFamily;
@property (nonatomic) char hasFamilyMembers;
@property (nonatomic) char subscribed;
@property (copy, nonatomic) NSString * sessionIdentifier;
@property (copy, nonatomic) NSDate * subscriptionExpirationDate;
@property (nonatomic) char subscriptionPurchaser;
@property (nonatomic) unsigned long long acceptedStoreTermsVersion;
@property (nonatomic) unsigned long long latestStoreTermsVersion;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (unsigned long long)MP_capabilities;
- (void)setPhoneNumber:(NSString *)arg0;
- (char)isSubscribed;
- (void)setSubscribed:(char)arg0;
- (int)accountStatus;
- (int)carrierBundlingStatus;
- (NSDictionary *)copyXPCEncoding;
- (SSVSubscriptionStatus *)initWithXPCEncoding:(NSString *)arg0;
- (void)setAccountIdentifier:(NSNumber *)arg0;
- (NSString *)sessionIdentifier;
- (SSVSubscriptionStatus *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)phoneNumber;
- (void).cxx_destruct;
- (NSNumber *)accountIdentifier;
- (SSVSubscriptionStatus *)initWithUserDefaultsRepresentation:(NSDictionary *)arg0;
- (void)resetAccountBasedProperties;
- (void)resetCarrierBundlingProperties;
- (void)setSessionIdentifier:(NSString *)arg0;
- (void)setAcceptedStoreTermsVersion:(unsigned long long)arg0;
- (void)setCarrierBundlingStatus:(int)arg0;
- (void)setCellularOperatorName:(NSString *)arg0;
- (void)setDiscoveryModeEligible:(char)arg0;
- (void)setSubscriptionExpirationDate:(NSDate *)arg0;
- (void)setFamilyOrganizer:(char)arg0;
- (void)setFamilySubscription:(char)arg0;
- (void)setHasFamily:(char)arg0;
- (void)setHasFamilyMembers:(char)arg0;
- (void)setLatestStoreTermsVersion:(unsigned long long)arg0;
- (void)setSubscriptionPurchaser:(char)arg0;
- (void)setAccountStatus:(int)arg0;
- (void)_setSubscribed:(char)arg0;
- (void)setAccountPermissions:(NSArray *)arg0;
- (NSArray *)accountPermissions;
- (unsigned long long)acceptedStoreTermsVersion;
- (NSString *)cellularOperatorName;
- (char)isDiscoveryModeEligible;
- (char)isFamilyOrganizer;
- (char)isFamilySubscription;
- (char)hasFamily;
- (char)hasFamilyMembers;
- (unsigned long long)latestStoreTermsVersion;
- (char)isSubscriptionPurchaser;
- (NSDate *)subscriptionExpirationDate;
- (NSDictionary *)copyUserDefaultsRepresentation;
- (void)setValuesUsingStatusDictionary:(NSDictionary *)arg0;

@end
