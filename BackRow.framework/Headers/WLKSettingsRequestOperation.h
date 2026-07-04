/* Runtime dump - WLKSettingsRequestOperation
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKSettingsRequestOperation : NSOperation
{
    NSError * _error;
    NSDictionary * _response;
    id _requestCompletionBlock;
}

@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) NSDictionary * response;
@property (copy, nonatomic) id requestCompletionBlock;

+ (NSString *)URLBagKey;

- (NSError *)_runNetworkOperationAndReturnError:(id *)arg0;
- (id /* block */)requestCompletionBlock;
- (NSDictionary *)response;
- (void)main;
- (void).cxx_destruct;
- (void)setRequestCompletionBlock:(id /* block */)arg0;
- (NSError *)error;
- (SSMutableURLRequestProperties *)requestProperties;

@end
