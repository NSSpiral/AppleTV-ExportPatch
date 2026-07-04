/* Runtime dump - MEInternetRadioDataClient
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface MEInternetRadioDataClient : ATVDataClient
{
    struct ITTunerCategoryList * _categories;
    struct AppContext * _appContext;
    ATVDataQuery * _stationQuery;
    id _stationQueryCompletionBlock;
}

@property (retain, nonatomic) ATVDataQuery * stationQuery;
@property (copy) id stationQueryCompletionBlock;

+ (NSString *)internetRadioDataClientWithAppContext:(struct AppContext *)arg0;

- (void)setStationQuery:(ATVDataQuery *)arg0;
- (id)itemForStation:(struct ITTunerStationInfo *)arg0 categoryID:(struct __CFString *)arg1;
- (char)applyFilter:(NSObject *)arg0 toObject:(NSObject *)arg1;
- (id /* block */)stationQueryCompletionBlock;
- (void)setStationQueryCompletionBlock:(id /* block */)arg0;
- (NSString *)collectionForCategory:(struct ITTunerCategoryInfo *)arg0;
- (NSString *)_convertCategory:(NSString *)arg0;
- (void)categoriesLoaded:(struct ITTunerCategoryList *)arg0 withStatus:(unsigned int)arg1;
- (void)stationsLoaded:(struct ITTunerStationList *)arg0 withStatus:(unsigned int)arg1;
- (ATVDataQuery *)stationQuery;
- (void)dealloc;
- (void).cxx_destruct;
- (NSString *)imageKeyForObject:(NSObject *)arg0;
- (void)concreteDataClientConnect;
- (void)concreteDataClientDisconnect;
- (char)supportsProperty:(NSObject *)arg0;
- (char)processQueryAsync:(id)arg0;
- (void)executeQuery:(NSObject *)arg0 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;
- (NSObject *)loadImageForObject:(NSObject *)arg0 size:(struct CGSize)arg1 crop:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelLoad:(id)arg0;
- (MEInternetRadioDataClient *)initWithAppContext:(struct AppContext *)arg0;

@end
