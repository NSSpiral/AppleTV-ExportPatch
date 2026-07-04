/* Runtime dump - RadioRecentStationsRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRecentStationsRequest : RadioRequest
{
    SSURLConnectionRequest * _request;
    RadioStation * _currentStation;
    NSString * _currentStationStringID;
    char _shouldGroupResponses;
    unsigned int _stationCount;
}

@property (nonatomic) char shouldGroupResponses;
@property (nonatomic) unsigned int stationCount;

- (unsigned int)stationCount;
- (void)cancel;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (void)getCachedRecentStationsResponseWithCompletionHandler:(id /* block */)arg0;
- (RadioRecentStationsRequest *)initWithCurrentStation:(RadioStation *)arg0;
- (void)setShouldGroupResponses:(char)arg0;
- (NSURL *)_newRecentStationsURLRequestPropertiesWithBaseURL:(NSURL *)arg0;
- (NSURLResponse *)_recentStationsResponseWithConnectionResponse:(NSURLResponse *)arg0 returningError:(id *)arg1;
- (void)_configureRequestPropertiesForCaching:(id)arg0 returningCacheKey:(id *)arg1;
- (RadioRecentStationsRequest *)initWithCurrentStationStringID:(NSString *)arg0;
- (char)shouldGroupResponses;
- (void)setStationCount:(unsigned int)arg0;

@end
