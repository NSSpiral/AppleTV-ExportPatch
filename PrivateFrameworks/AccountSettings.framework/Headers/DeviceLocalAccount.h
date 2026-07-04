/* Runtime dump - DeviceLocalAccount
 * Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol>

+ (NSString *)_identifier;
+ (NSNumber *)accountWithBasicAccount:(NSObject *)arg0;
+ (NSDictionary *)basicAccountProperties;
+ (NSObject *)localizedSyncSourceStringForDataClass:(NSObject *)arg0 forBeginningOfSentence:(char)arg1;
+ (NSObject *)localizedReferenceToSyncSourceStringForDataClass:(NSObject *)arg0;
+ (char)isTetheredSyncingDataclass:(id)arg0;
+ (NSObject *)tetheredSourceForDataClass:(NSObject *)arg0;
+ (NSString *)typeString;

- (NSString *)identifier;
- (NSString *)displayName;
- (NSString *)syncStoreIdentifier;

@end
