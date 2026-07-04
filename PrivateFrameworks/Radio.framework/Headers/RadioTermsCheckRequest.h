/* Runtime dump - RadioTermsCheckRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioTermsCheckRequest : RadioRequest
{
    SSURLConnectionRequest * _request;
    unsigned long long _acceptedTermsVersion;
}

@property (nonatomic) unsigned long long acceptedTermsVersion;

- (void)cancel;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (unsigned long long)acceptedTermsVersion;
- (void)setAcceptedTermsVersion:(unsigned long long)arg0;

@end
