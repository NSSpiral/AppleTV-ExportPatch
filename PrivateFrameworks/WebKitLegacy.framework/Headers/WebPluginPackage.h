/* Runtime dump - WebPluginPackage
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPluginPackage : WebBasePluginPackage
{
    NSBundle * nsBundle;
}

- (void)dealloc;
- (NSBundle *)bundle;
- (char)load;
- (WebPluginPackage *)initWithPath:(NSString *)arg0;
- (Class)viewFactory;

@end
