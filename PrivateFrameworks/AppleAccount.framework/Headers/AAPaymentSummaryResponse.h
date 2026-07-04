/* Runtime dump - AAPaymentSummaryResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAPaymentSummaryResponse : AAResponse
{
    NSDictionary * _responseParameters;
}

@property (readonly, nonatomic) unsigned int numberOfCards;
@property (readonly, nonatomic) NSString * description;

- (NSString *)description;
- (void).cxx_destruct;
- (AAPaymentSummaryResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (unsigned int)numberOfCards;

@end
