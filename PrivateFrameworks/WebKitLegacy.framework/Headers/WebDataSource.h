/* Runtime dump - WebDataSource
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDataSource : NSObject
{
    void * _private;
}

@property (readonly, copy, nonatomic) NSData * data;
@property (readonly, nonatomic) <WebDocumentRepresentation> * representation;
@property (readonly, nonatomic) WebFrame * webFrame;
@property (readonly, nonatomic) NSURLRequest * initialRequest;
@property (readonly, nonatomic) NSMutableURLRequest * request;
@property (readonly, nonatomic) NSURLResponse * response;
@property (readonly, copy, nonatomic) NSString * textEncodingName;
@property (readonly, nonatomic) char loading;
@property (readonly, copy, nonatomic) NSString * pageTitle;
@property (readonly, nonatomic) NSURL * unreachableURL;
@property (readonly, nonatomic) WebArchive * webArchive;
@property (readonly, nonatomic) WebResource * mainResource;
@property (readonly, copy, nonatomic) NSArray * subresources;

+ (void)initialize;
+ (Class)_representationClassForMIMEType:(NSObject *)arg0 allowingPlugins:(char)arg1;
+ (WebDataSource *)_repTypesAllowImageTypeOmission:(char)arg0;

- (NSURL *)_URL;
- (NSString *)textEncodingName;
- (NSURL *)subresourceForURL:(NSURL *)arg0;
- (void)dealloc;
- (NSMutableURLRequest *)request;
- (<WebDocumentRepresentation> *)representation;
- (NSData *)data;
- (NSURLResponse *)response;
- (NSObject *)_responseMIMEType;
- (WebFrame *)webFrame;
- (char)isLoading;
- (WebDataSource *)initWithRequest:(NSMutableURLRequest *)arg0;
- (WebArchive *)webArchive;
- (NSString *)pageTitle;
- (NSURL *)unreachableURL;
- (NSArray *)subresources;
- (WebResource *)mainResource;
- (void)finalize;
- (void)setDataSourceDelegate:(NSObject *)arg0;
- (void)_setAllowToBeMemoryMapped;
- (void)_setRepresentation:(NSDictionary *)arg0;
- (NSObject *)dataSourceDelegate;
- (NSError *)_mainDocumentError;
- (void)_addSubframeArchives:(id)arg0;
- (char)_transferApplicationCache:(NSObject *)arg0;
- (void)_setDeferMainResourceDataLoad:(char)arg0;
- (void)_setOverrideTextEncodingName:(NSString *)arg0;
- (id)_documentFragmentWithArchive:(id)arg0;
- (NSObject *)_documentFragmentWithImageResource:(NSObject *)arg0;
- (NSObject *)_imageElementWithImageResource:(NSObject *)arg0;
- (void)addSubresource:(id)arg0;
- (NSObject *)_webView;
- (void)_finishedLoading;
- (void)_receivedData:(NSData *)arg0;
- (void)_setMainDocumentError:(NSError *)arg0;
- (void)_revertToProvisionalState;
- (void)_replaceSelectionWithArchive:(id)arg0 selectReplacement:(char)arg1;
- (char)_isDocumentHTML;
- (void)_makeRepresentation;
- (struct DocumentLoader *)_documentLoader;
- (WebDataSource *)_initWithDocumentLoader:(struct PassRefPtr<WebDocumentLoaderMac>)arg0;
- (NSURLRequest *)initialRequest;

@end
