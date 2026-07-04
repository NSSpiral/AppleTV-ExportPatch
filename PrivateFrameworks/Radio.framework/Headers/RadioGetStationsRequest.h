/* Runtime dump - RadioGetStationsRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetStationsRequest : RadioRequest
{
    int _nodeType;
    SSURLConnectionRequest * _request;
    SSMetricsConfiguration * _metricsConfiguration;
    SSMetricsPageEvent * _metricsPageEvent;
    int _numberOfResults;
    int _resultsOffset;
    long long _parentNodeID;
}

@property (readonly, nonatomic) SSMetricsConfiguration * metricsConfiguration;
@property (readonly, copy, nonatomic) SSMetricsPageEvent * metricsPageEvent;
@property (nonatomic) int numberOfResults;
@property (readonly, nonatomic) long long parentNodeID;
@property (nonatomic) int resultsOffset;

- (void)cancel;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (void)setNumberOfResults:(int)arg0;
- (int)numberOfResults;
- (NSURLResponse *)_rootTreeNodeByApplyingResponse:(NSURLResponse *)arg0 returningError:(id *)arg1;
- (RadioGetStationsRequest *)initForFeaturedStations;
- (RadioGetStationsRequest *)initWithParentNodeID:(long long)arg0;
- (long long)parentNodeID;
- (int)resultsOffset;
- (void)setResultsOffset:(int)arg0;
- (SSMetricsPageEvent *)metricsPageEvent;
- (SSMetricsConfiguration *)metricsConfiguration;

@end
