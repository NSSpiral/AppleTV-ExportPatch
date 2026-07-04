/* Runtime dump - WLKServerConfigurationRequestOperation
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class WLKServerConfigurationResponse, WLKUserEnvironment;
@interface WLKServerConfigurationRequestOperation : NSOperation
{
    NSString * _UTSK;
    NSError * _error;
    WLKServerConfigurationResponse * _response;
    WLKUserEnvironment * _userEnvironment;
    id _requestCompletionBlock;
}

@property (retain, nonatomic) NSString * UTSK;
@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) WLKServerConfigurationResponse * response;
@property (readonly, nonatomic) WLKUserEnvironment * userEnvironment;
@property (copy, nonatomic) id requestCompletionBlock;

+ (NSString *)_caller;

- (WLKUserEnvironment *)userEnvironment;
- (void)setUTSK:(NSSet *)arg0;
- (NSError *)_runNetworkOperationAndReturnError:(id *)arg0;
- (void)_finishWithResponse:(WLKServerConfigurationResponse *)arg0;
- (NSURL *)_defaultBaseURL;
- (NSString *)_queryStringForKey:(NSString *)arg0 values:(NSArray *)arg1;
- (NSString *)UTSK;
- (id /* block */)requestCompletionBlock;
- (WLKServerConfigurationRequestOperation *)init;
- (WLKServerConfigurationResponse *)response;
- (void)main;
- (void).cxx_destruct;
- (void)setRequestCompletionBlock:(id /* block */)arg0;
- (NSError *)error;
- (void)_failWithError:(NSError *)arg0;
- (NSDictionary *)_requestProperties;

@end
