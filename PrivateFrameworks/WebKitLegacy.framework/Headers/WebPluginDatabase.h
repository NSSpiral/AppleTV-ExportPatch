/* Runtime dump - WebPluginDatabase
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPluginDatabase : NSObject
{
    NSMutableDictionary * plugins;
    NSMutableSet * registeredMIMETypes;
    NSArray * plugInPaths;
    NSMutableSet * pluginInstanceViews;
}

+ (void)setAdditionalWebPlugInPaths:(NSArray *)arg0;
+ (WebPluginDatabase *)sharedDatabase;
+ (WebPluginDatabase *)sharedDatabaseIfExists;
+ (NSArray *)_defaultPlugInPaths;
+ (void)closeSharedDatabase;

- (void)refresh;
- (void)dealloc;
- (WebPluginDatabase *)init;
- (void)close;
- (NSMutableDictionary *)plugins;
- (void)setPlugInPaths:(NSArray *)arg0;
- (NSObject *)pluginForMIMEType:(NSObject *)arg0;
- (void)_removePlugin:(PLSlideshowPlugin *)arg0;
- (id)_scanForNewPlugins;
- (void)_addPlugin:(PLSlideshowPlugin *)arg0;
- (id)pluginForExtension:(id)arg0;
- (char)isMIMETypeRegistered:(id)arg0;
- (void)addPluginInstanceView:(NSObject *)arg0;
- (void)removePluginInstanceView:(NSObject *)arg0;
- (void)removePluginInstanceViewsFor:(id)arg0;
- (void)destroyAllPluginInstanceViews;
- (NSArray *)_plugInPaths;

@end
