/* Runtime dump - RadioRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRequest : NSObject
{
    char _cachedResponse;
    int _errorCode;
    NSObject<OS_dispatch_queue> * _queue;
    RadioRequestContext * _requestContext;
    double _retryInterval;
    int _status;
    NSDictionary * _unparsedResponseDictionary;
    char _asynchronousBackgroundRequest;
}

@property (nonatomic) char asynchronousBackgroundRequest;
@property (readonly) char cachedResponse;
@property (copy) RadioRequestContext * requestContext;
@property (readonly) int status;
@property (readonly) int errorCode;
@property (readonly) double retryInterval;
@property (readonly, copy) NSDictionary * unparsedResponseDictionary;

+ (RadioRequest *)defaultURLCache;
+ (void)loadServiceConfigurationWithCompletionHandler:(id /* block */)arg0;

- (void)cancel;
- (void)dealloc;
- (RadioRequest *)init;
- (void).cxx_destruct;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setErrorCode:(int)arg0;
- (int)errorCode;
- (RadioRequestContext *)requestContext;
- (char)isAsynchronousBackgroundRequest;
- (void)_loadRadioStoreBagWithCompletionHandler:(id /* block */)arg0;
- (void)setRequestContext:(RadioRequestContext *)arg0;
- (void)_loadRadioStoreBagAndAllowRetry:(char)arg0 withCompletionHandler:(id /* block */)arg1;
- (double)retryInterval;
- (void)setRetryInterval:(double)arg0;
- (void)setUnparsedResponseDictionary:(NSDictionary *)arg0;
- (NSDictionary *)unparsedResponseDictionary;
- (void)setAsynchronousBackgroundRequest:(char)arg0;
- (char)isCachedResponse;
- (void)setCachedResponse:(char)arg0;

@end
