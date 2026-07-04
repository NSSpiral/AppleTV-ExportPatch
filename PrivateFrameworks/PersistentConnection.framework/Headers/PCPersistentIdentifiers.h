/* Runtime dump - PCPersistentIdentifiers
 * Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCPersistentIdentifiers : NSObject

+ (NSString *)processNameAndPidIdentifier;
+ (unsigned long long)hostUniqueIdentifier;
+ (NSString *)processNamePidAndStringIdentifier:(NSString *)arg0;
+ (int)pidFromMatchingIdentifer:(id)arg0;
+ (NSString *)_processNamePrefix;

@end
