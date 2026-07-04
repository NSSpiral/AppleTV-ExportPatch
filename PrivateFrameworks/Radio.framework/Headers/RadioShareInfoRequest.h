/* Runtime dump - RadioShareInfoRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioShareInfoRequest : RadioRequest
{
    SSURLConnectionRequest * _request;
    int _shareType;
    long long _stationID;
    NSString * _stationHash;
    NSArray * _acceptedMIMETypes;
}

@property (copy, nonatomic) NSArray * acceptedMIMETypes;

- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (NSArray *)acceptedMIMETypes;
- (void)startWithShareInformationCompletionHandler:(id /* block */)arg0;
- (RadioShareInfoRequest *)initWithStation:(ATVRadioStation *)arg0 shareType:(int)arg1;
- (void)setAcceptedMIMETypes:(NSArray *)arg0;

@end
