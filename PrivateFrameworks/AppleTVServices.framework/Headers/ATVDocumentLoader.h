/* Runtime dump - ATVDocumentLoader
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDocumentLoader : NSObject <ISURLOperationDelegate>
{
    ISURLOperation * _operation;
    id _completionHandler;
    NSURL * _requestURL;
    char _isLoaded;
    NSObject<ATVDocumentPostprocessor> * _postprocessor;
    unsigned int _authenticationType;
    SSURLRequestProperties * _requestProperties;
    SSURLRequestProperties * _properties;
    NSMutableDictionary * _metadata;
    id _content;
    NSError * _error;
}

@property (retain, nonatomic) NSObject<ATVDocumentPostprocessor> * postprocessor;
@property (nonatomic) unsigned int authenticationType;
@property (readonly, copy, nonatomic) SSURLRequestProperties * requestProperties;
@property (readonly, copy, nonatomic) SSURLRequestProperties * properties;
@property (retain, nonatomic) NSMutableDictionary * metadata;
@property char isLoaded;
@property (retain, nonatomic) id content;
@property (retain, nonatomic) NSError * error;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (ATVDocumentLoader *)documentLoaderWithRequestProperties:(SSURLRequestProperties *)arg0;

- (void)operation:(ISURLOperation *)arg0 failedWithError:(NSError *)arg1;
- (ATVDocumentLoader *)initWithRequestProperties:(SSURLRequestProperties *)arg0;
- (void)cancel;
- (ATVDocumentLoader *)init;
- (NSString *)description;
- (struct __CFAttributedString *)content;
- (char)isLoaded;
- (void).cxx_destruct;
- (SSURLRequestProperties *)properties;
- (void)setAuthenticationType:(unsigned int)arg0;
- (void)setPostprocessor:(NSObject<ATVDocumentPostprocessor> *)arg0;
- (void)loadWithCompletionHandler:(id /* block */)arg0;
- (NSObject<ATVDocumentPostprocessor> *)postprocessor;
- (NSURL *)_effectiveURL;
- (NSObject *)_newLoadOperation;
- (unsigned int)authenticationType;
- (id)_acceptLanguageHeaderValue;
- (void)_operation:(NSObject *)arg0 finishedWithResult:(int)arg1 error:(NSError *)arg2;
- (NSObject *)_applyPostprocessingWithContent:(NSObject *)arg0 response:(NSURLResponse *)arg1 error:(id *)arg2;
- (void)operation:(ISURLOperation *)arg0 didReceiveResponse:(char)arg1;
- (void)operation:(ISURLOperation *)arg0 finishedWithOutput:(AVPlayerLayer *)arg1;
- (void)operation:(ISURLOperation *)arg0 willSendRequest:(NSURLRequest *)arg1;
- (void)setIsLoaded:(char)arg0;
- (void)setMetadata:(NSMutableDictionary *)arg0 forKey:(NSString *)arg1;
- (NSString *)metadataForKey:(NSString *)arg0;
- (NSError *)error;
- (SSURLRequestProperties *)requestProperties;
- (void)setError:(NSError *)arg0;
- (void)setMetadata:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)metadata;
- (void)setContent:(NSObject *)arg0;

@end
