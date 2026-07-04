/* Runtime dump - ATVRadioSearchResultsSection
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVRadioDataClient;
@interface ATVRadioSearchResultsSection : NSObject
{
    NSArray * _stations;
    NSDictionary * _originalResponse;
    <ATVRadioSearchResultsSectionDelegate> * _delegate;
    unsigned int _state;
    ATVRadioDataClient * _dataClient;
    RadioSearchRequest * _originalRequest;
    RadioSearchRequest * _additionalRequest;
}

@property (readonly, copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSArray * stations;
@property (copy, nonatomic) NSDictionary * originalResponse;
@property (weak, nonatomic) <ATVRadioSearchResultsSectionDelegate> * delegate;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) ATVRadioDataClient * dataClient;
@property (retain, nonatomic) RadioSearchRequest * originalRequest;
@property (retain, nonatomic) RadioSearchRequest * additionalRequest;

- (NSObject *)_metricsController;
- (ATVRadioSearchResultsSection *)initWithDataClient:(ATVRadioDataClient *)arg0 searchRequest:(YTSearchRequest *)arg1 resultsSectionDictionary:(NSDictionary *)arg2;
- (NSDictionary *)originalResponse;
- (void)cancelLoadingAdditionalStations;
- (void)startLoadingAdditionalStations;
- (unsigned int)_stateForCategoryDictionary:(NSDictionary *)arg0;
- (NSDictionary *)_stationsForCategoryDictionary:(NSDictionary *)arg0 withDataClient:(ATVRadioDataClient *)arg1;
- (NSURLRequest *)_additionalRequestForOriginalRequest:(NSURLRequest *)arg0;
- (void)setAdditionalRequest:(RadioSearchRequest *)arg0;
- (void)_didReceiveResponse:(NSURLResponse *)arg0 forRequest:(NSURLRequest *)arg1 withRequestStartDate:(NSDate *)arg2;
- (RadioSearchRequest *)additionalRequest;
- (void)setOriginalResponse:(NSDictionary *)arg0;
- (void)setOriginalRequest:(RadioSearchRequest *)arg0;
- (NSArray *)stations;
- (void)setStations:(NSArray *)arg0;
- (void)setDelegate:(<ATVRadioSearchResultsSectionDelegate> *)arg0;
- (ATVRadioSearchResultsSection *)init;
- (<ATVRadioSearchResultsSectionDelegate> *)delegate;
- (unsigned int)state;
- (void)setState:(unsigned int)arg0;
- (NSString *)title;
- (void).cxx_destruct;
- (ATVRadioDataClient *)dataClient;
- (void)setDataClient:(ATVRadioDataClient *)arg0;
- (NSString *)categoryIdentifier;
- (RadioSearchRequest *)originalRequest;
- (void)_willSendRequest:(NSURLRequest *)arg0;

@end
