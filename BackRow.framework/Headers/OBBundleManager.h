/* Runtime dump - OBBundleManager
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface OBBundleManager : NSObject

+ (OBBundleManager *)sharedManager;

- (NSString *)_bundleSearchPath;
- (NSBundle *)orderedPrivacyBundlesWithPrivacyPaneBundle:(char)arg0;
- (id)_allPrivacyBundles;
- (id)orderedPrivacyBundles;
- (NSString *)bundlesWithIdentifiers:(id)arg0;
- (id)allBundles;
- (NSString *)bundleWithIdentifier:(NSString *)arg0;

@end
