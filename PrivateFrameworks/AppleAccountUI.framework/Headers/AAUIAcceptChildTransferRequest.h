/* Runtime dump - AAUIAcceptChildTransferRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIAcceptChildTransferRequest : AAFamilyRequest
{
    NSString * _requestCode;
}

@property (copy, nonatomic) NSString * requestCode;

- (NSString *)urlString;
- (void).cxx_destruct;
- (char)isUserInitiated;
- (NSString *)requestCode;
- (void)setRequestCode:(NSString *)arg0;
- (NSURLRequest *)urlRequest;

@end
