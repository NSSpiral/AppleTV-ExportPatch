/* Runtime dump - MFMessageURLProtocol
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageURLProtocol : NSURLProtocol
{
    NSURL * _url;
    MFMessageTextAttachment * _attachment;
    MFMonitoredInvocation * _invocation;
    NSThread * _loader;
    char _stopped;
    NSMutableArray * _attachments;
}

+ (char)requestIsCacheEquivalent:(id)arg0 toRequest:(NSURLRequest *)arg1;
+ (char)canInitWithRequest:(NSURLRequest *)arg0;
+ (void)initialize;
+ (NSURLRequest *)canonicalRequestForRequest:(NSURLRequest *)arg0;

- (void)startLoading;
- (void)_downloadedData:(NSData *)arg0 mimeType:(NSString *)arg1;
- (void)_downloadAttachment;
- (void)dealloc;
- (void)stopLoading;

@end
