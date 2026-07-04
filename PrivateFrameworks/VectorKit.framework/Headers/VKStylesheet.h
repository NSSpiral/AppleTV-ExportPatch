/* Runtime dump - VKStylesheet
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKStylesheet : NSObject
{
    NSString * _sheetName;
    float _scale;
    float _ppi;
    int _targetDisplay;
    VKStylesheetVendor * _stylesheetVendor;
    NSMutableArray * _inheritance;
    int _rasterPolygonChangeoverZ;
    VKPGlobalProperties * _styleGlobalProperties;
    char _supportsNightMode;
    char _supportsRouteMode;
    struct unique_ptr<md::StyleMatchingTree, std::__1::default_delete<md::StyleMatchingTree> > _matchingTree;
    NSObject<OS_dispatch_queue> * _resultCacheQueue;
    NSMutableDictionary * _resultCache;
    int _loadedGlobalResources;
    int _loadedEverything;
    NSObject<OS_dispatch_semaphore> * _globalResourcesLoadingSemaphore;
    NSObject<OS_dispatch_semaphore> * _everythingLoadingSemaphore;
    NSObject<OS_dispatch_queue> * _loadingQueue;
    NSLock * _finishedDecodingCallbacksLock;
    NSMutableArray * _finishedDecodingCallbacks;
    char _isDevResource;
}

@property (readonly, nonatomic) NSString * sheetName;
@property (readonly, nonatomic) char supportsNightMode;
@property (readonly, nonatomic) int rasterPolygonChangeoverZ;
@property (readonly, nonatomic) VKPGlobalProperties * styleGlobalProperties;
@property (readonly, nonatomic) char isDevResource;
@property (readonly, nonatomic) char finishedDecoding;

- (void)dealloc;
- (VKStylesheet *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSString *)sheetName;
- (char)isDevResource;
- (char)supportsNightMode;
- (VKPGlobalProperties *)styleGlobalProperties;
- (char)isFinishedDecoding;
- (void)addFinishedDecodingCallback:(id /* block */)arg0;
- (void)clearCaches;
- (int)rasterPolygonChangeoverZ;
- (VKStylesheet *)initWithData:(NSData *)arg0 miniData:(NSData *)arg1 forName:(NSString *)arg2 scale:(float)arg3 ppi:(float)arg4 vendor:(_NSExtensionContextVendor *)arg5 targetDisplay:(int)arg6 isDevResource:(char)arg7;
- (NSDictionary *)_styleMatchingAttributes:(NSDictionary *)arg0 clientAttributes:(struct ? *)arg1;
- (NSDictionary *)styleMatchingAttributes:(NSDictionary *)arg0 vectorType:(int)arg1 locale:(NSObject *)arg2 mapDisplayStyle:(unsigned int)arg3 mapDisplayStyleVariant:(unsigned int)arg4 canSelectIcons:(char)arg5 selected:(char)arg6;
- (struct unordered_map<unsigned int, unsigned long long, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long long> > >)_attributeMapForAttributes:(NSDictionary *)arg0 clientAttributes:(NSDictionary *)arg1;
- (int)styleAttributeValueForLocalization:(id)arg0;
- (VKStylesheet *)initWithName:(NSString *)arg0 scale:(float)arg1 ppi:(float)arg2 targetDisplay:(int)arg3 vendor:(_NSExtensionContextVendor *)arg4 resourceManager:(VKResourceManager *)arg5;
- (NSDictionary *)styleForFeatureAttributes:(NSDictionary *)arg0 clientAttributes:(struct ? *)arg1;
- (NSDictionary *)styleMatchingAttributes:(NSDictionary *)arg0 vectorType:(int)arg1 locale:(NSObject *)arg2 mapDisplayStyle:(unsigned int)arg3 mapDisplayStyleVariant:(unsigned int)arg4;
- (NSDictionary *)_stylesMatchingAttributes:(NSDictionary *)arg0 clientAttributes:(struct ? *)arg1;

@end
