/* Runtime dump - ATVDMAPResponse
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDMAPResponse : NSObject
{
    NSData * _responseBody;
    unsigned long _httpStatusCode;
    NSString * _contentType;
}

- (ATVDMAPResponse *)init;
- (void).cxx_destruct;
- (ATVDMAPResponse *)initWithResponseBody:(NSData *)arg0 httpStatusCode:(unsigned long)arg1 contentType:(NSString *)arg2;
- (NSData *)responseBody;
- (unsigned long)httpStatusCode;
- (NSString *)contentType;

@end
