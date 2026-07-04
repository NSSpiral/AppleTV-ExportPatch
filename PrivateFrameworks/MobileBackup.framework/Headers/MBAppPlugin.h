/* Runtime dump - MBAppPlugin
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBAppPlugin : MBContainer
{
    NSArray * _groups;
}

@property (readonly, nonatomic) NSString * bundleDir;
@property (readonly, nonatomic) NSDictionary * entitlements;
@property (retain, nonatomic) NSArray * groups;

+ (NSArray *)appPluginWithPropertyList:(NSArray *)arg0;

- (void)setGroups:(NSArray *)arg0;
- (NSString *)domain;
- (NSDictionary *)entitlements;
- (NSArray *)groups;
- (NSString *)bundleDir;

@end
