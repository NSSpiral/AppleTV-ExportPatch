/* Runtime dump - SSDownloadManifestRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadManifestRequest : SSRequest <SSXPCCoding>
{
    int _manifestFormat;
    char _shouldHideUserPrompts;
    NSURLRequest * _urlRequest;
}

@property (readonly) NSURLRequest * URLRequest;
@property char shouldHideUserPrompts;
@property (nonatomic) <SSDownloadManifestRequestDelegate> * delegate;
@property int manifestFormat;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSDownloadManifestRequest *)initWithXPCEncoding:(NSString *)arg0;
- (SSDownloadManifestRequest *)initWithURLRequest:(NSString *)arg0;
- (void)dealloc;
- (SSDownloadManifestRequest *)init;
- (char)start;
- (NSURLRequest *)URLRequest;
- (void)startWithManifestResponseBlock:(id /* block */)arg0;
- (void)setShouldHideUserPrompts:(char)arg0;
- (char)shouldHideUserPrompts;
- (int)manifestFormat;
- (void)setManifestFormat:(int)arg0;

@end
