/* Runtime dump - RadioOptInRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioOptInRequest : RadioRequest
{
    unsigned long long _accountIdentifier;
    SSURLConnectionRequest * _request;
}

- (void)cancel;
- (RadioOptInRequest *)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (void)startWithOptInCompletionHandler:(id /* block */)arg0;

@end
