/* Runtime dump - QLPreviewParts
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewParts : NSObject
{
    NSURL * _url;
    NSData * _data;
    NSString * _fileName;
    NSString * _uti;
    NSString * _password;
    char _progressive;
    void * _convertFunction;
    NSURLConnection * _connection;
    id _delegate;
    int _pageCount;
    float _pageWidth;
    float _pageHeight;
    NSURL * previewURL;
    NSURLResponse * previewResponse;
    NSMutableSet * registeredURLs;
    NSMutableSet * outstandingURLs;
    NSMutableDictionary * encodingsForURLs;
    NSThread * delegateCallbackThread;
    NSError * mainError;
    char computed;
    char cancelled;
    void * representedObject;
    struct ? representedObjectCallbacks;
    long representedObjectProtection;
    char htmlErrorDisabled;
}

@property (retain, nonatomic) NSURL * url;
@property (retain, nonatomic) NSData * data;
@property (retain, nonatomic) NSString * fileName;
@property (retain, nonatomic) NSString * uti;
@property (retain, nonatomic) NSString * password;
@property (nonatomic) char progressive;
@property (retain, nonatomic) NSURLConnection * connection;
@property (nonatomic) id delegate;
@property char htmlErrorDisabled;
@property (readonly, nonatomic) NSURLRequest * previewRequest;
@property (readonly, nonatomic) NSURLResponse * previewResponse;
@property (readonly, nonatomic) NSURL * previewURL;
@property (readonly, nonatomic) NSSet * attachmentURLs;
@property (readonly) int pageCount;
@property (readonly) float pageWidth;
@property (readonly) float pageHeight;
@property (readonly) char computed;
@property (readonly) char cancelled;

+ (void)registerPreview:(id)arg0;
+ (void)unregisterPreview:(id)arg0;
+ (char)isSafeURL:(NSURL *)arg0;
+ (char)isSafeRequest:(NSURLRequest *)arg0;
+ (NSString *)safeURLScheme;
+ (NSURL *)relativeStringForSafeURL:(NSURL *)arg0;

- (NSString *)fileName;
- (NSURL *)previewURL;
- (void)setUti:(NSString *)arg0;
- (char)isComputed;
- (NSString *)uti;
- (void)startComputingPreview;
- (void)setHtmlErrorDisabled:(char)arg0;
- (char)htmlErrorDisabled;
- (void)appendData:(NSData *)arg0 forURL:(NSURL *)arg1 lastChunk:(char)arg2;
- (NSURL *)mimeTypeForAttachmentURL:(NSURL *)arg0;
- (NSURLRequest *)_voidRequest;
- (NSURL *)_requestForURL:(NSURL *)arg0;
- (void)computePreviewInThread;
- (void)_protectRepresentedObjectSafely;
- (void)computePreview;
- (void)_discardRepresentedObjectSafely;
- (void)startDataRepresentationWithContentType:(NSObject *)arg0 properties:(NSDictionary *)arg1;
- (void)_registerURL:(NSURL *)arg0 mimeType:(NSString *)arg1 textEncoding:(NSString *)arg2;
- (void)setDocumentObject:(void *)arg0 callbacks:(void)arg1;
- (void *)documentObject;
- (NSObject *)newAttachmentURLWithID:(int)arg0 properties:(NSDictionary *)arg1;
- (NSObject *)newSafeAttachmentURLWithID:(int)arg0 mimeType:(NSString *)arg1 textEncoding:(NSString *)arg2;
- (unsigned long)cfEncodingForAttachmentURL:(NSURL *)arg0;
- (char)progressive;
- (void)setProgressive:(char)arg0;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (NSURL *)url;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (char)isCancelled;
- (void)setUrl:(NSURL *)arg0;
- (int)pageCount;
- (NSURLConnection *)connection;
- (void)setConnection:(NSURLConnection *)arg0;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (NSSet *)attachmentURLs;
- (void)setError:(NSError *)arg0;
- (float)pageWidth;
- (float)pageHeight;
- (void)setFileName:(NSString *)arg0;
- (NSURLRequest *)previewRequest;
- (NSURLRequest *)safeRequestForRequest:(NSURLRequest *)arg0;
- (NSURLResponse *)previewResponse;

@end
