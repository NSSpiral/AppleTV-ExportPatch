/* Runtime dump - HMDPersistentStore
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPersistentStore : NSObject

+ (NSDictionary *)unarchiveMetadata:(id *)arg0;
+ (NSDictionary *)archiveMetadata:(NSDictionary *)arg0;
+ (NSData *)unarchiveHomeData:(id *)arg0;
+ (NSString *)decryptDataWithControllerKey:(NSString *)arg0 totalKeysFound:(unsigned int *)arg1 deleteExtraKeys:(char)arg2 controllerIdentifierChanged:(char *)arg3 successfulKeyUserName:(id *)arg4 error:(id *)arg5;
+ (NSData *)archiveCloudServerTokenData:(NSData *)arg0;
+ (char)deserializeHomeData:(id *)arg0 localStorage:(char)arg1 fromData:(NSData *)arg2;
+ (NSData *)serializeHomeData:(NSData *)arg0 localStorage:(char)arg1 remoteDeviceOnSameAccount:(char)arg2;
+ (NSString *)encryptDataWithControllerKey:(NSString *)arg0 error:(id *)arg1;
+ (NSData *)_writeData:(NSData *)arg0 toStorePath:(NSString *)arg1 dataLabel:(NSString *)arg2;
+ (NSString *)decryptDataWithMetadataKey:(NSString *)arg0 error:(id *)arg1;
+ (NSString *)decryptUsingLocalKeyAndUnarchiveFromPath:(NSString *)arg0 error:(id *)arg1;
+ (char)deserializeMetadata:(id *)arg0 fromData:(NSData *)arg1;
+ (NSString *)encryptDataWithMetadataKey:(NSString *)arg0 error:(id *)arg1;
+ (NSDictionary *)serializeMetadata:(NSDictionary *)arg0;
+ (NSData *)encryptUsingLocalKeyAndArchiveData:(NSData *)arg0 storePath:(NSString *)arg1 dataLabel:(NSString *)arg2;
+ (HMDPersistentStore *)serializeBlacklistedBundles:(id)arg0;
+ (NSData *)deserializeBlacklistedBundlesFromData:(NSData *)arg0;
+ (NSData *)_encryptData:(NSData *)arg0 withKey:(NSString *)arg1 error:(id *)arg2;
+ (NSData *)_decryptData:(NSData *)arg0 withKey:(NSString *)arg1 error:(id *)arg2;
+ (void)cleanupKeysInStore;
+ (void)resetConfiguration;
+ (void)resetMetadata;
+ (NSData *)archiveHomeData:(NSData *)arg0;
+ (NSData *)unarchiveServerTokenData:(char *)arg0;
+ (HMDPersistentStore *)archiveTransactions:(id)arg0;
+ (HMDPersistentStore *)unarchiveTransactionJournal;
+ (HMDPersistentStore *)archiveIDSDataSyncJournal:(id)arg0;
+ (HMDPersistentStore *)unarchiveIDSDataSyncJournal;
+ (HMDPersistentStore *)archiveBlacklistedBundles:(id)arg0;
+ (HMDPersistentStore *)unarchiveBlacklistedBundles;
+ (HMDPersistentStore *)archiveBulletinBoard:(id)arg0;
+ (HMDPersistentStore *)unarchiveBulletinBoard;

@end
