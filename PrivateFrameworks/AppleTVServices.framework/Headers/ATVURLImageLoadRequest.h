/* Runtime dump - ATVURLImageLoadRequest
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVURLImageLoadRequest : ISURLOperation
{
    NSURL * _url;
    <ATVImageDecrypter> * _decrypter;
    id _completionHandler;
}

@property (retain, nonatomic) NSURL * url;
@property (retain, nonatomic) <ATVImageDecrypter> * decrypter;
@property (copy, nonatomic) id completionHandler;

- (NSURL *)url;
- (id /* block */)completionHandler;
- (void)setUrl:(NSURL *)arg0;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (ATVURLImageLoadRequest *)initWithURL:(NSURL *)arg0 headers:(NSDictionary *)arg1 decrypter:(<ATVImageDecrypter> *)arg2 completionHandler:(id /* block */)arg3;
- (<ATVImageDecrypter> *)decrypter;
- (void)setDecrypter:(<ATVImageDecrypter> *)arg0;

@end
