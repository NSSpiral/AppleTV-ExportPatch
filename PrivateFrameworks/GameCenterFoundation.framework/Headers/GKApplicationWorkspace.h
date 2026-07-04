/* Runtime dump - GKApplicationWorkspace
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKApplicationWorkspace : NSObject
{
    LSApplicationWorkspace * _lsWorkspace;
}

@property (retain, nonatomic) LSApplicationWorkspace * lsWorkspace;

+ (GKApplicationWorkspace *)defaultWorkspace;

- (void)dealloc;
- (char)applicationIsInstalled:(id)arg0;
- (void)openSettings;
- (void)setLsWorkspace:(LSApplicationWorkspace *)arg0;
- (NSObject *)applicationProxyForBundleID:(NSObject *)arg0;
- (void)openICloudSettings;
- (LSApplicationWorkspace *)lsWorkspace;
- (GKApplicationWorkspace *)initWithWorkspace:(FBWorkspace *)arg0;

@end
