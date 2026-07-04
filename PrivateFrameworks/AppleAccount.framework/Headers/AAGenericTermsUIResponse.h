/* Runtime dump - AAGenericTermsUIResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAGenericTermsUIResponse : AAResponse
{
    NSDictionary * _responseTermsDictionary;
    NSString * _responseAgreeURL;
    NSData * _responseData;
}

@property (readonly, nonatomic) NSData * responseData;
@property (readonly, nonatomic) NSString * agreeURL;
@property (readonly, nonatomic) NSDictionary * termsDictionary;

- (void).cxx_destruct;
- (AAGenericTermsUIResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (NSDictionary *)termsDictionary;
- (NSString *)agreeURL;
- (NSData *)responseData;

@end
