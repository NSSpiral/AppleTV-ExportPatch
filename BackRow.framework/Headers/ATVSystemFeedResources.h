/* Runtime dump - ATVSystemFeedResources
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVSystemFeedResources : NSObject
{
    NSDictionary * _bundlesByNamespace;
}

+ (ATVSystemFeedResources *)sharedInstance;

- (id)feedResourceNamed:(NSString *)arg0 inNamespace:(struct _xmlNode *)arg1;
- (id)_resourceNamed:(id)arg0 inBundles:(id)arg1;
- (id)_computedResourceNamed:(id)arg0;
- (void)dealloc;
- (ATVSystemFeedResources *)init;

@end
