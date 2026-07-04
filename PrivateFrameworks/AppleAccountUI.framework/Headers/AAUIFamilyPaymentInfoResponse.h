/* Runtime dump - AAUIFamilyPaymentInfoResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilyPaymentInfoResponse : AAResponse
{
    AAUIFamilyCreditCard * _creditCard;
}

@property (retain, nonatomic) AAUIFamilyCreditCard * creditCard;

- (void).cxx_destruct;
- (AAUIFamilyPaymentInfoResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (id)_parsedDateForServerMonth:(int)arg0 year:(int)arg1;
- (AAUIFamilyCreditCard *)creditCard;
- (void)setCreditCard:(AAUIFamilyCreditCard *)arg0;

@end
