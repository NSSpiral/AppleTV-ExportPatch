/* Runtime dump - ABCardContentPluginManager
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCardContentPluginManager : NSObject
{
    NSString * _pluginsDirectory;
}

@property (readonly, nonatomic) NSString * pluginsDirectory;

- (NSString *)bundleNameForLabel:(NSString *)arg0;
- (Class)contentProviderForBundleName:(NSString *)arg0;
- (NSString *)pluginsDirectory;
- (Class)contentProviderClassForPerson:(void *)arg0;
- (void)dealloc;

@end
