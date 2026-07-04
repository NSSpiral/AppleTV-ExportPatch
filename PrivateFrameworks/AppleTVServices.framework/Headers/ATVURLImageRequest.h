/* Runtime dump - ATVURLImageRequest
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVURLImageRequest : NSObject
{
    NSURL * _url;
    NSDictionary * _headers;
    <ATVImageDecrypter> * _decrypter;
}

@property (retain, nonatomic) NSURL * url;
@property (retain, nonatomic) NSDictionary * headers;
@property (retain, nonatomic) <ATVImageDecrypter> * decrypter;

- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (void).cxx_destruct;
- (<ATVImageDecrypter> *)decrypter;
- (ATVURLImageRequest *)initWithURL:(NSURL *)arg0 headers:(NSDictionary *)arg1 decrypter:(<ATVImageDecrypter> *)arg2;
- (void)setDecrypter:(<ATVImageDecrypter> *)arg0;
- (NSDictionary *)headers;
- (void)setHeaders:(NSDictionary *)arg0;

@end
