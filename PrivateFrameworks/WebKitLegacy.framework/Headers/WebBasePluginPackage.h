/* Runtime dump - WebBasePluginPackage
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebBasePluginPackage : NSObject
{
    NSMutableSet * pluginDatabases;
    struct String path;
    struct PluginInfo pluginInfo;
    struct RetainPtr<__CFBundle *> cfBundle;
    /* block */ id * BP_CreatePluginMIMETypesPreferences;
}

+ (void)initialize;
+ (NSString *)preferredLocalizationName;
+ (NSString *)pluginWithPath:(struct String)arg0;

- (unsigned long)versionNumber;
- (void)dealloc;
- (struct String)bundleIdentifier;
- (struct String *)path;
- (char)isQuickTimePlugIn;
- (void).cxx_construct;
- (char)load;
- (WebBasePluginPackage *)initWithPath:(struct String)arg0;
- (void).cxx_destruct;
- (struct String)bundleVersion;
- (void)unload;
- (id)MIMETypeForExtension:(struct String *)arg0;
- (void)finalize;
- (void)createPropertyListFile;
- (NSString *)_objectForInfoDictionaryKey:(NSString *)arg0;
- (NSString *)pListForPath:(NSString *)arg0 createFile:(char)arg1;
- (char)getPluginInfoFromPLists;
- (struct PluginInfo *)pluginInfo;
- (char)supportsExtension:(struct String *)arg0;
- (char)supportsMIMEType:(struct String *)arg0;
- (char)isJavaPlugIn;
- (char)isNativeLibraryData:(NSData *)arg0;
- (void)wasAddedToPluginDatabase:(id)arg0;
- (void)wasRemovedFromPluginDatabase:(id)arg0;

@end
