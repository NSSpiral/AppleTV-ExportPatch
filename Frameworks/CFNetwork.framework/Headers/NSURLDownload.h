/* Runtime dump - NSURLDownload
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender>
{
    NSURLDownloadInternal * _internal;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy) NSURLRequest * request;
@property (readonly, copy) NSData * resumeData;
@property char deletesFileUponFailure;

+ (char)canResumeDownloadDecodedWithEncodingMIMEType:(NSObject *)arg0;
+ (NSURLConnection *)_downloadWithLoadingConnection:(char)arg0 request:(NSURLRequest *)arg1 response:(NSURLResponse *)arg2 delegate:(NSObject *)arg3 proxy:(GEOTileServerProxy *)arg4;
+ (NSURLConnection *)_downloadWithLoadingCFURLConnection:(struct _CFURLConnection *)arg0 request:(struct _CFURLRequest *)arg1 response:(struct _CFURLResponse *)arg2 delegate:(NSObject *)arg3 proxy:(GEOTileServerProxy *)arg4;
+ (NSURLRequest *)_downloadWithRequest:(NSURLRequest *)arg0 delegate:(NSObject *)arg1 directory:(PLSimpleDCIMDirectory *)arg2;
+ (char)_isEncodingMIMETypeResumable:(id)arg0;

- (NSURLDownload *)initWithRequest:(NSURLRequest *)arg0 delegate:(NSObject *)arg1;
- (void)_setDelegateQueue:(NSObject *)arg0;
- (void)cleanupChallenges;
- (void)withDelegate:(NSObject *)arg0;
- (NSURLConnection *)_initWithLoadingCFURLConnection:(struct _CFURLConnection *)arg0 request:(struct _CFURLRequest *)arg1 response:(struct _CFURLResponse *)arg2 delegate:(NSObject *)arg3 proxy:(GEOTileServerProxy *)arg4;
- (NSURLConnection *)_initWithLoadingConnection:(char)arg0 request:(NSURLRequest *)arg1 response:(NSURLResponse *)arg2 delegate:(NSObject *)arg3 proxy:(GEOTileServerProxy *)arg4;
- (NSURLRequest *)_initWithRequest:(NSURLRequest *)arg0 delegate:(NSObject *)arg1 directory:(PLSimpleDCIMDirectory *)arg2;
- (NSURLDownload *)_initWithResumeInformation:(id)arg0 delegate:(NSObject *)arg1 path:(NSString *)arg2;
- (NSURLDownload *)initWithResumeData:(NSData *)arg0 delegate:(NSObject *)arg1 path:(NSString *)arg2;
- (id)_resumeInformation;
- (NSData *)resumeData;
- (void)setDestination:(NSObject *)arg0 allowOverwrite:(char)arg1;
- (void)_setDeletesFileAfterFailure:(char)arg0;
- (char)_deletesFileAfterFailure;
- (void)setDeletesFileUponFailure:(char)arg0;
- (char)deletesFileUponFailure;
- (NSString *)_directoryPath;
- (void)_setDirectoryPath:(NSString *)arg0;
- (void)_setOriginatingURL:(NSURL *)arg0;
- (NSURL *)_originatingURL;
- (void)releaseDelegate;
- (char)_downloadActive;
- (void)sendDidStart:(struct _CFURLDownload *)arg0;
- (struct _CFURLRequest *)sendWillSendRequest:(struct _CFURLRequest *)arg0 redirectResponse:(struct _CFURLResponse *)arg1;
- (unsigned char)sendDownloadShouldUseCredentialStorage;
- (void)sendDidReceiveChallenge:(struct _CFURLAuthChallenge *)arg0;
- (void)sendDidReceiveResponse:(struct _CFURLResponse *)arg0;
- (void)sendWillResumeWithResponse:(struct _CFURLResponse *)arg0 startingByte:(unsigned long long)arg1;
- (void)sendDidReceiveData:(long)arg0;
- (BOOL)sendShouldDecodeDataOfMIMEType:(struct __CFString *)arg0;
- (void)sendDecideDestinationWithSuggestedObjectName:(struct __CFString *)arg0;
- (void)sendDidCreateDestination:(struct __CFURL *)arg0;
- (void)sendDidFinish;
- (void)sendDidFail:(struct __CFError *)arg0;
- (char)sendCanAuthenticateAgainstProtectionSpace:(struct _CFURLProtectionSpace *)arg0;
- (void)cancel;
- (void)dealloc;
- (NSURLDownload *)init;
- (NSString *)description;
- (NSObject *)_delegate;
- (NSURL *)url;
- (NSURLRequest *)request;
- (void)_setDelegate:(NSObject *)arg0;
- (void)useCredential:(NSObject *)arg0 forAuthenticationChallenge:(NSObject *)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(NSObject *)arg0;
- (void)cancelAuthenticationChallenge:(NSObject *)arg0;

@end
