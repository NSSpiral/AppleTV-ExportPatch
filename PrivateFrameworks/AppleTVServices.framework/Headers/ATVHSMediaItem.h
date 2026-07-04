/* Runtime dump - ATVHSMediaItem
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSMediaItem : ATVURLMediaItem
{
    ATVDataItem * _dataItem;
}

@property (retain, nonatomic) ATVDataItem * dataItem;
@property (readonly, nonatomic) ATVHSDataClient * hsDataClient;

+ (NSObject *)_atvDataPropertyForMediaItemProperty:(NSObject *)arg0;

- (NSString *)description;
- (void).cxx_destruct;
- (ATVDataItem *)dataItem;
- (NSObject *)mediaItemMetadataForProperty:(NSString *)arg0;
- (ATVHSMediaItem *)initWithDataItem:(ATVDataItem *)arg0;
- (char)isEqualToMediaItem:(NSObject *)arg0;
- (void)prepareForLoadingWithCompletion:(id /* block */)arg0;
- (void)prepareForPlaybackInitiationWithCompletion:(id /* block */)arg0;
- (void)cleanUpMediaItem;
- (void)setDataItem:(ATVDataItem *)arg0;
- (NSURL *)_keybagPathURL;
- (ATVHSDataClient *)hsDataClient;

@end
