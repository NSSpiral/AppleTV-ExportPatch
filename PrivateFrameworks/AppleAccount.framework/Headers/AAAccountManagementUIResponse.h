/* Runtime dump - AAAccountManagementUIResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAccountManagementUIResponse : AAResponse
{
    NSData * _responseData;
}

@property (readonly, nonatomic) NSData * responseData;

- (void).cxx_destruct;
- (AAAccountManagementUIResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (NSData *)responseData;

@end
