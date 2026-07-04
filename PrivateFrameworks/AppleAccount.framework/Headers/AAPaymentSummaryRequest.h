/* Runtime dump - AAPaymentSummaryRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAPaymentSummaryRequest : AAAppleIDSettingsRequest
{
    NSString * _secondaryAuthToken;
}

@property (copy, nonatomic) NSString * secondaryAuthToken;

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (NSString *)secondaryAuthToken;
- (void)setSecondaryAuthToken:(NSString *)arg0;
- (NSURLRequest *)urlRequest;

@end
