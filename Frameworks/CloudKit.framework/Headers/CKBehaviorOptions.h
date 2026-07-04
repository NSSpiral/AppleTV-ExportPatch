/* Runtime dump - CKBehaviorOptions
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKBehaviorOptions : NSObject
{
    NSMutableDictionary * _cachedPrefs;
    NSObject<OS_dispatch_queue> * _cachedPrefsQueue;
}

@property (retain, nonatomic) NSMutableDictionary * cachedPrefs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * cachedPrefsQueue;

+ (CKBehaviorOptions *)sharedOptions;

- (NSObject<OS_dispatch_queue> *)cachedPrefsQueue;
- (NSMutableDictionary *)cachedPrefs;
- (void)_startListeningForNotifications;
- (NSString *)_getStringOptionLockedForKey:(NSString *)arg0 defaultValue:(NSString *)arg1;
- (int)_getIntOptionForKey:(NSString *)arg0 defaultValue:(int)arg1;
- (void)_setPref:(id)arg0 forKey:(NSString *)arg1;
- (double)_getDoubleOptionForKey:(NSString *)arg0 defaultValue:(double)arg1;
- (NSString *)_getStringOptionForKey:(NSString *)arg0 defaultValue:(NSString *)arg1;
- (char)_getBoolOptionForKey:(NSString *)arg0 defaultValue:(char)arg1;
- (void)setCKTimeLoggingDetailed:(char)arg0;
- (void)setCKTimeLogging:(char)arg0;
- (NSString *)_urlForKey:(NSString *)arg0 defaultURLString:(NSString *)arg1;
- (NSString *)_getArrayOptionForKey:(NSString *)arg0 defaultValue:(NSString *)arg1;
- (char)_buildIsOverridden;
- (void)setCachedRecordExpiryTime:(int)arg0;
- (int)serverIDExpiryTime;
- (void)setServerIDExpiryTime:(int)arg0;
- (void)setDefaultRequestTimeout:(double)arg0;
- (void)setDefaultResourceTimeout:(double)arg0;
- (double)operationTimeout;
- (void)setOperationTimeout:(double)arg0;
- (int)trafficLogMaximumDataSize;
- (void)setTrafficLogMaximumDataSize:(int)arg0;
- (char *)CKCtlPrompt;
- (void)setCKCtlPrompt:(char *)arg0;
- (char)CFNetworkLogging;
- (void)setCFNetworkLogging:(char)arg0;
- (char)CKTimeLoggingDetailed;
- (void)setDisableCaching:(char)arg0;
- (char)shouldProfileSQL;
- (void)setShouldProfileSQL:(char)arg0;
- (void)setCompressRequests:(char)arg0;
- (void)setUseBackgroundSessions:(char)arg0;
- (void)setSendDebugHeader:(char)arg0;
- (void)setConfigBaseURL:(NSURL *)arg0;
- (void)setSetupBaseURL:(NSURL *)arg0;
- (void)setCustomCloudDBBaseURL:(NSURL *)arg0;
- (void)setCustomShareServiceBaseURL:(NSURL *)arg0;
- (void)setCustomDeviceServiceBaseURL:(NSURL *)arg0;
- (id)primaryAccountEmailOverride;
- (void)setPrimaryAccountEmailOverride:(id)arg0;
- (id)primaryAccountPasswordOverride;
- (void)setPrimaryAccountPasswordOverride:(id)arg0;
- (id)secondaryAccountEmailOverride;
- (void)setSecondaryAccountEmailOverride:(id)arg0;
- (id)secondaryAccountPasswordOverride;
- (void)setSecondaryAccountPasswordOverride:(id)arg0;
- (id)otherAccountsWithDefaultValue:(NSString *)arg0;
- (int)defaultOperationQualityOfService;
- (void)setEnableMescal:(char)arg0;
- (char)sandboxCloudD;
- (unsigned int)PCSCacheSize;
- (void)setOptimisticPCS:(char)arg0;
- (char)optimisticPCS;
- (void)setUseStingray:(char)arg0;
- (void)setProductName:(NSString *)arg0;
- (void)setProductVersion:(NSString *)arg0;
- (void)setBuildVersion:(NSString *)arg0;
- (void)setCachedPrefs:(NSMutableDictionary *)arg0;
- (void)setCachedPrefsQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (CKBehaviorOptions *)init;
- (NSString *)buildVersion;
- (void).cxx_destruct;
- (char)disableCaching;
- (int)cachedRecordExpiryTime;
- (char)isAppleInternalInstall;
- (int)clientThrottleQueueWidth;
- (int)defaultRetryAfter;
- (NSString *)_behaviorContainerOptionForKey:(NSString *)arg0;
- (NSString *)_behaviorOptionForKey:(NSString *)arg0;
- (char)CKTimeLogging;
- (id)contextLoggingWhitelist;
- (id)contextLoggingBlacklist;
- (int)flowControlBudget;
- (double)flowControlRegeneration;
- (double)maximumThrottleSeconds;
- (double)publicIdentitiesExpirationTimeout;
- (NSURL *)setupBaseURL;
- (char)useEncryption;
- (void)setUseEncryption:(char)arg0;
- (double)maximumFetchWaitTime;
- (double)maximumWaitAfterFetchRequest;
- (double)defaultRequestTimeout;
- (char)validateMescalResponses;
- (char)compressRequests;
- (char)shouldLogProtobufBinary;
- (char)enableMescal;
- (char)sendDebugHeader;
- (char)useBackgroundSessions;
- (double)defaultResourceTimeout;
- (char)useStingray;
- (int)PCSRetryCount;
- (NSString *)productName;
- (NSString *)productVersion;
- (unsigned int)maxPackageDownloadsPerBatchWithDefaultValue:(unsigned int)arg0;
- (NSURL *)customCloudDBBaseURL;
- (NSURL *)customShareServiceBaseURL;
- (NSURL *)customDeviceServiceBaseURL;
- (unsigned int)maxPackageUploadsPerBatchWithDefaultValue:(unsigned int)arg0;
- (char)evictRecentAssets;
- (unsigned int)assetEvictionGracePeriodWithDefaultValue:(unsigned int)arg0;
- (unsigned int)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned int)arg0;
- (int)flowControlBudgetOverride;
- (double)flowControlRegenerationOverride;
- (NSURL *)configBaseURL;
- (unsigned int)maxBatchSize;
- (char)shouldDecryptRecordsBeforeSave;
- (int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)arg0;

@end
