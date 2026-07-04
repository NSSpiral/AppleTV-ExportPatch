/* Runtime dump - MBApp
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBApp : MBContainer
{
    NSDictionary * _entitlements;
    NSArray * _groups;
    NSArray * _plugins;
}

@property (readonly, nonatomic) NSString * bundleID;
@property (readonly, nonatomic) NSString * bundleVersion;
@property (retain, nonatomic) NSString * bundleDir;
@property (retain, nonatomic) NSDictionary * entitlements;
@property (retain, nonatomic) NSArray * groups;
@property (retain, nonatomic) NSArray * plugins;
@property (readonly, nonatomic) NSArray * containers;
@property (readonly, nonatomic) char isPlaceholder;
@property (readonly, nonatomic) char isSystemApp;

+ (NSArray *)appWithPropertyList:(NSArray *)arg0;
+ (NSObject *)appWithBundleID:(NSString *)arg0;
+ (NSString *)safeHarborWithPath:(NSString *)arg0;

- (void)setGroups:(NSArray *)arg0;
- (void)setPlugins:(NSArray *)arg0;
- (void)setEntitlements:(NSDictionary *)arg0;
- (NSString *)domain;
- (NSDictionary *)entitlements;
- (NSString *)bundleID;
- (NSString *)bundleVersion;
- (NSArray *)groups;
- (char)isPlaceholder;
- (id)_resourceRelativePathsToBackupAndRestoreForRootDir:(id)arg0 relativePath:(NSString *)arg1;
- (NSString *)bundleDir;
- (NSCache *)_placeholderRelativePathsToBackupAndRestoreWithCache:(NSObject *)arg0;
- (void)setBundleDir:(NSString *)arg0;
- (char)isSystemApp;
- (NSCache *)placeholderDomainWithCache:(NSObject *)arg0;
- (NSArray *)containers;
- (NSArray *)plugins;

@end
