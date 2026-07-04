/* Runtime dump - RadioGetFeaturedStationsRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetFeaturedStationsRequest : RadioRequest
{
    NSObject<OS_dispatch_queue> * _artworkQueue;
    SSURLConnectionRequest * _request;
    unsigned int _stationCount;
    char _disableArtworkLoading;
    char _disableCachedResponses;
}

@property (nonatomic) char disableArtworkLoading;
@property (nonatomic) char disableCachedResponses;

- (void)cancel;
- (RadioGetFeaturedStationsRequest *)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (void)setDisableArtworkLoading:(char)arg0;
- (char)disableArtworkLoading;
- (RadioGetFeaturedStationsRequest *)initWithStationCount:(unsigned int)arg0;
- (NSDictionary *)_importFeaturedStationWithDictionary:(NSDictionary *)arg0 inModel:(NSObject *)arg1 loadArtworkSynchronously:(char)arg2;
- (void)startWithFeaturedStationsCompletionHandler:(id /* block */)arg0;
- (NSURLResponse *)_stationDictionariesByApplyingResponse:(NSURLResponse *)arg0 error:(id *)arg1;
- (char)disableCachedResponses;
- (void)setDisableCachedResponses:(char)arg0;

@end
