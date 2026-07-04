/* Runtime dump - WebDownloadInternal
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDownloadInternal : NSObject <NSURLDownloadDelegate>
{
    id realDelegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setRealDelegate:(NSObject *)arg0;
- (void)download:(SSDownload *)arg0 didFailWithError:(char)arg1;
- (void)downloadDidBegin:(id)arg0;
- (id)download:(SSDownload *)arg0 willSendRequest:(NSURLRequest *)arg1 redirectResponse:(NSURLResponse *)arg2;
- (void)download:(SSDownload *)arg0 didReceiveAuthenticationChallenge:(NSObject *)arg1;
- (void)download:(SSDownload *)arg0 didReceiveResponse:(char)arg1;
- (void)download:(SSDownload *)arg0 didReceiveDataOfLength:(unsigned int)arg1;
- (char)download:(SSDownload *)arg0 shouldDecodeSourceDataOfMIMEType:(NSObject *)arg1;
- (void)download:(SSDownload *)arg0 decideDestinationWithSuggestedFilename:(NSString *)arg1;
- (void)download:(SSDownload *)arg0 didCreateDestination:(NSObject *)arg1;
- (void)downloadDidFinish:(NSURLDownload *)arg0;
- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (void)download:(SSDownload *)arg0 didCancelAuthenticationChallenge:(NSObject *)arg1;

@end
