/* Runtime dump - ATVCupidAccessObject
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVCupidAOSynchronizer;
@interface ATVCupidAccessObject : NSObject
{
    ACAccount * _appleAccount;
    ATVCupidAOSynchronizer * _synchronizer;
}

@property (retain, nonatomic) ACAccount * appleAccount;
@property (weak, nonatomic) ATVCupidAOSynchronizer * synchronizer;

+ (NSNumber *)accessObjectWithAppleAccount:(ACAccount *)arg0;
+ (NSArray *)_filterAppositePhotoAssetFromAssets:(NSArray *)arg0;
+ (void)_postProcessFetchForAccessObject:(NSObject *)arg0 imageToken:(NSString *)arg1 withHandler:(<BRSelectionHandler> *)arg2;
+ (void)_fetchImageForAccessObject:(NSObject *)arg0 assetID:(NSString *)arg1 priority:(int)arg2 completionHandler:(id /* block */)arg3;
+ (void)_cancelFetchForAccessObject:(NSObject *)arg0 assetID:(NSString *)arg1;
+ (NSArray *)_filterAppositeVideoAssetFromAssets:(NSArray *)arg0;
+ (NSObject *)_imageFetchRecordForAccessObject:(NSObject *)arg0 imageToken:(NSString *)arg1;
+ (void)_processNextFromFetchQueue;
+ (void)initialize;

- (void)_queueOperation:(NSObject *)arg0;
- (void)setAppleAccount:(ACAccount *)arg0;
- (ATVCupidAOSynchronizer *)synchronizer;
- (void)runSetup;
- (void)fetchImageForAssetID:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)setSynchronizer:(ATVCupidAOSynchronizer *)arg0;
- (void).cxx_destruct;
- (ACAccount *)appleAccount;
- (void)tearDown;

@end
