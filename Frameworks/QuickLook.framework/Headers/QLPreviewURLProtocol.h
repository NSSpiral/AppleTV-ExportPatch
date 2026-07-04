/* Runtime dump - QLPreviewURLProtocol
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewURLProtocol : NSURLProtocol

+ (char)canInitWithRequest:(NSURLRequest *)arg0;
+ (void)registerPreview:(id)arg0;
+ (QLPreviewURLProtocol *)_errorForAbort;
+ (void)_unregisterURL:(NSURL *)arg0;
+ (QLPreviewURLProtocol *)_errorForCancel;
+ (void)startLoadingProtocol:(NSObject *)arg0;
+ (void)stopLoadingProtocol:(NSObject *)arg0;
+ (NSString *)newUniqueURLWithName:(NSString *)arg0;
+ (NSObject *)newURLWithContentID:(NSString *)arg0 baseURL:(NSURL *)arg1;
+ (void)registerURL:(NSString *)arg0 mimeType:(NSString *)arg1 textEncoding:(NSString *)arg2;
+ (QLPreviewURLProtocol *)_errorForNoPreview;
+ (void)unregisterURLs:(id)arg0 andPreview:(id)arg1;
+ (void)appendData:(NSData *)arg0 forURL:(NSURL *)arg1 lastChunk:(char)arg2;
+ (void)setError:(NSError *)arg0 forURL:(NSURL *)arg1;
+ (NSURL *)errorForURL:(NSURL *)arg0;
+ (NSURL *)mimeTypeForAttachmentURL:(NSURL *)arg0;
+ (void)initialize;
+ (NSURLRequest *)canonicalRequestForRequest:(NSURLRequest *)arg0;

- (void)startLoading;
- (void)stopLoading;

@end
