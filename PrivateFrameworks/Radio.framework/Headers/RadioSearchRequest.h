/* Runtime dump - RadioSearchRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioSearchRequest : RadioRequest
{
    SSURLConnectionRequest * _request;
    char _excludeFeaturedStations;
    char _shouldProcessCategories;
    NSString * _searchTerm;
    int _searchCategory;
    unsigned int _numberOfSearchResults;
    unsigned int _searchResultsOffset;
    SSMetricsConfiguration * _metricsConfiguration;
    SSMetricsPageEvent * _metricsPageEvent;
}

@property (readonly, nonatomic) NSString * searchTerm;
@property (nonatomic) int searchCategory;
@property (nonatomic) unsigned int numberOfSearchResults;
@property (nonatomic) unsigned int searchResultsOffset;
@property (nonatomic) char excludeFeaturedStations;
@property (nonatomic) char shouldProcessCategories;
@property (readonly, retain, nonatomic) SSMetricsConfiguration * metricsConfiguration;
@property (readonly, copy, nonatomic) SSMetricsPageEvent * metricsPageEvent;

- (NSString *)searchTerm;
- (void)cancel;
- (RadioSearchRequest *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (RadioSearchRequest *)initWithSearchTerm:(NSString *)arg0;
- (void)startWithSearchCompletionHandler:(id /* block */)arg0;
- (int)searchCategory;
- (void)setSearchCategory:(int)arg0;
- (unsigned int)numberOfSearchResults;
- (void)setNumberOfSearchResults:(unsigned int)arg0;
- (unsigned int)searchResultsOffset;
- (void)setSearchResultsOffset:(unsigned int)arg0;
- (char)excludeFeaturedStations;
- (void)setExcludeFeaturedStations:(char)arg0;
- (char)shouldProcessCategories;
- (void)setShouldProcessCategories:(char)arg0;
- (SSMetricsPageEvent *)metricsPageEvent;
- (SSMetricsConfiguration *)metricsConfiguration;

@end
