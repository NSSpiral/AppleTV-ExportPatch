/* Runtime dump - RadioGetGenreTreeNodesRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetGenreTreeNodesRequest : RadioRequest
{
    unsigned long long _parentNodeID;
    SSURLConnectionRequest * _request;
    SSMetricsConfiguration * _metricsConfiguration;
    SSMetricsPageEvent * _metricsPageEvent;
}

@property (readonly, retain, nonatomic) SSMetricsConfiguration * metricsConfiguration;
@property (readonly, copy, nonatomic) SSMetricsPageEvent * metricsPageEvent;

+ (NSObject *)cacheKeyForGenreWithNodeID:(unsigned long long)arg0;
+ (NSString *)fallbackRequestPath;
+ (NSString *)requestBagKey;
+ (NSString *)responseContentKey;

- (RadioGetGenreTreeNodesRequest *)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (RadioGetGenreTreeNodesRequest *)initWithParentNodeID:(unsigned long long)arg0;
- (NSURLResponse *)_genreTreeByApplyingResponse:(NSURLResponse *)arg0;
- (void)startWithCachedCompletionHandler:(id /* block */)arg0 networkCompletionHandler:(/* block */ id)arg1;
- (SSMetricsPageEvent *)metricsPageEvent;
- (SSMetricsConfiguration *)metricsConfiguration;

@end
