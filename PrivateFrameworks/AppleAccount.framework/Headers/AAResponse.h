/* Runtime dump - AAResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAResponse : NSObject
{
    NSDictionary * _responseDictionary;
    NSHTTPURLResponse * _httpResponse;
    NSError * _error;
    int _statusCode;
    NSData * _data;
    NSNumber * _maxAge;
}

@property (readonly, nonatomic) NSDictionary * responseDictionary;
@property (retain, nonatomic) NSError * error;
@property (readonly, nonatomic) NSString * protocolVersion;
@property (readonly, nonatomic) int statusCode;
@property (readonly, nonatomic) NSData * data;
@property (readonly, nonatomic) NSNumber * maxAge;

- (NSData *)data;
- (int)statusCode;
- (void).cxx_destruct;
- (AAResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (AAResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1 bodyIsPlist:(char)arg2;
- (void)_parsePlistResponse:(NSURLResponse *)arg0;
- (NSError *)_stringWithDescriptionForResponseError:(NSError *)arg0;
- (NSString *)_deviceSpecificLocalizedString:(NSString *)arg0;
- (NSError *)error;
- (NSString *)protocolVersion;
- (void)setError:(NSError *)arg0;
- (NSDictionary *)responseDictionary;
- (NSNumber *)maxAge;

@end
