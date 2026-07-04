/* Runtime dump - MCInstallerReader
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCInstallerReader : NSObject

+ (MCInstallerReader *)sharedReader;
+ (void)_setProfileStorageDirectory:(id)arg0;

- (id)pathsToInstalledProfilesWithFilterFlags:(int)arg0;

@end
