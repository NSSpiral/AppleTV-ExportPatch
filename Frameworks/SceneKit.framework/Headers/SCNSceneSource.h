/* Runtime dump - SCNSceneSource
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNSceneSource : NSObject
{
    id _reserved;
    struct __C3DSceneSource * _sceneSource;
    struct __C3DScene * _lastLoadedScene;
    NSDictionary * _lastOptions;
    NSOperationQueue * _downloadingQueue;
    char _sceneLoaded;
    NSDictionary * _sceneSourceOptions;
}

@property (readonly) NSURL * url;
@property (readonly) NSData * data;

+ (NSObject *)SCNJSExportProtocol;
+ (NSURL *)sceneSourceWithURL:(NSURL *)arg0 options:(NSDictionary *)arg1;
+ (NSData *)sceneSourceWithData:(NSData *)arg0 options:(NSDictionary *)arg1;
+ (char)_shouldCacheWithOptions:(NSDictionary *)arg0;
+ (NSURL *)_cachedSceneSourceForURL:(NSURL *)arg0 options:(NSDictionary *)arg1;
+ (void)_cacheSceneSource:(NSObject *)arg0 forURL:(NSURL *)arg1 options:(NSDictionary *)arg2;
+ (void)_removeCachedSceneSourceIfNeededForURL:(NSURL *)arg0;
+ (NSArray *)sceneTypes;
+ (NSArray *)sceneFileTypes;

- (NSObject *)sceneWithClass:(Class)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
- (struct __C3DScene *)_createSceneRefWithOptions:(NSDictionary *)arg0 statusHandler:(id /* block */)arg1;
- (NSDictionary *)sceneSourceOptions;
- (int)sceneCount;
- (SCNScene *)sceneWithOptions:(NSDictionary *)arg0 error:(id *)arg1;
- (NSObject *)_sceneWithClass:(Class)arg0 options:(NSDictionary *)arg1 statusHandler:(id /* block */)arg2;
- (NSObject *)sceneWithClass:(Class)arg0 options:(NSDictionary *)arg1 statusHandler:(id /* block */)arg2;
- (NSObject *)copyPropertiesAtIndex:(int)arg0 options:(NSDictionary *)arg1;
- (SCNScene *)sceneWithOptions:(NSDictionary *)arg0 statusHandler:(id /* block */)arg1;
- (NSString *)entryWithIdentifier:(NSString *)arg0 withClass:(Class)arg1;
- (NSArray *)identifiersOfEntriesWithClass:(Class)arg0;
- (NSArray *)entriesPassingTest:(id /* block */)arg0;
- (char)_appendToEntries:(NSArray *)arg0 entriesWithType:(unsigned long)arg1 passingTest:(id /* block */)arg2 entryObjectConstructor:(/* block */ id)arg3;
- (int)countOfScenes;
- (NSObject *)sceneAtIndex:(unsigned int)arg0 options:(NSDictionary *)arg1;
- (NSObject *)sceneAtIndex:(unsigned int)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
- (struct __C3DSceneSource *)sceneSourceRef;
- (NSObject *)entryWithID:(int)arg0 withClass:(Class)arg1;
- (NSObject *)IDsOfEntriesWithClass:(Class)arg0;
- (int)sourceStatus;
- (char)canExportToColladaWithNoDataLoss;
- (id)performConsistencyCheck;
- (void)dealloc;
- (NSString *)description;
- (NSURL *)url;
- (NSData *)data;
- (SCNSceneSource *)initWithData:(NSData *)arg0 options:(NSDictionary *)arg1;
- (NSString *)propertyForKey:(NSString *)arg0;
- (struct __C3DLibrary *)library;
- (SCNSceneSource *)initWithURL:(NSURL *)arg0 options:(NSDictionary *)arg1;

@end
