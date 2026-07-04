/* Runtime dump - CKDServerConfiguration
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDServerConfiguration : NSObject <CKPropertyCoding>
{
    NSDate * _expiry;
    NSMutableDictionary * _values;
    NSMutableDictionary * _allowedAppVersionsCache;
}

@property (retain, nonatomic) NSDate * expiry;
@property (retain, nonatomic) NSMutableDictionary * values;
@property (retain, nonatomic) NSMutableDictionary * allowedAppVersionsCache;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)description;
- (void)setValues:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)values;
- (void).cxx_destruct;
- (NSObject *)flowControlBudgetForContainer:(NSObject *)arg0;
- (NSObject *)flowControlRegenerationForContainer:(NSObject *)arg0;
- (id)flowControlMaximumThrottleTime:(id)arg0;
- (double)publicIdentitiesExpirationTimeoutForContainer:(NSObject *)arg0;
- (char)applicationWithBundleID:(NSString *)arg0 canSyncUsingVersion:(NSString *)arg1 forContainer:(NSObject *)arg2;
- (unsigned int)maxBatchSizeForContainer:(NSObject *)arg0;
- (char)shouldSignForMessageType:(int)arg0 inDatabaseScope:(int)arg1 forContainer:(NSObject *)arg2;
- (NSObject *)mescalCertURLForContainer:(NSObject *)arg0;
- (int)tokenRegisterDaysForContainer:(NSObject *)arg0;
- (char)isExpired;
- (CKDServerConfiguration *)initWithValues:(NSMutableDictionary *)arg0;
- (void)setExpiry:(NSDate *)arg0;
- (NSDate *)expiry;
- (NSMutableDictionary *)allowedAppVersionsCache;
- (void)setAllowedAppVersionsCache:(NSMutableDictionary *)arg0;
- (NSString *)valueForKeyPath:(NSString *)arg0 forContainer:(NSObject *)arg1;
- (CKDServerConfiguration *)initWithPropertyDictionary:(NSDictionary *)arg0;
- (NSString *)dictionaryPropertyEncoding;
- (unsigned long)mescalServerVersionForContainer:(NSObject *)arg0;
- (NSObject *)mescalSessionURLForContainer:(NSObject *)arg0;

@end
