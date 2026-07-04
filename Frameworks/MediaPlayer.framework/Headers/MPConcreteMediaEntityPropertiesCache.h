/* Runtime dump - MPConcreteMediaEntityPropertiesCache
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPConcreteMediaEntityPropertiesCache : NSObject
{
    Class _dataProviderEntityClass;
    long long _identifier;
    NSMutableDictionary * _properties;
    NSMutableDictionary * _valuePersistenceBlocks;
    NSObject<OS_dispatch_queue> * _propertiesQueue;
    <MPMediaLibraryDataProvider> * _dataProvider;
}

@property (readonly, weak, nonatomic) <MPMediaLibraryDataProvider> * dataProvider;
@property (readonly, nonatomic) Class dataProviderEntityClass;
@property (readonly, nonatomic) long long identifier;

- (Class)dataProviderEntityClass;
- (NSObject *)valueForProperty:(NSString *)arg0 isCached:(char *)arg1;
- (void)cacheValue:(TSWPFontCacheValue *)arg0 forProperty:(NSString *)arg1 persistValueInBackgroundBlock:(id /* block */)arg2;
- (void)cachePropertyValues:(NSArray *)arg0 forProperties:(id *)arg1 persistValueInBackgroundBlock:(id /* block */)arg2;
- (void)_onBarrierCacheValues:(NSArray *)arg0 persistValueInBackgroundBlock:(id /* block */)arg1;
- (MPConcreteMediaEntityPropertiesCache *)initWithLibraryDataProvider:(<MPMediaLibraryDataProviderPrivate> *)arg0 dataProviderEntityClass:(Class)arg1 identifier:(long long)arg2;
- (void)dealloc;
- (void)invalidate;
- (long long)identifier;
- (void).cxx_destruct;
- (<MPMediaLibraryDataProvider> *)dataProvider;
- (void)delete;

@end
