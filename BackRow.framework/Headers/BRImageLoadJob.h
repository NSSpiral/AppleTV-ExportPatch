/* Runtime dump - BRImageLoadJob
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRImageLoadJob;
@protocol ISURLOperationDelegate;

@class BRImageManager;
@interface BRImageLoadJob : NSObject <BRImageLoadJob, ISURLOperationDelegate>
{
    NSString * _imageName;
    SSURLRequestProperties * _requestProperties;
    char _writeImage;
    id _output;
    BRImageManager * _manager;
    <BRMusicStoreImageDecryptionAgent> * _decryptionAgent;
    ISURLOperation * _operation;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (<BRMusicStoreImageDecryptionAgent> *)decryptionAgent;
- (BRImageLoadJob *)initWithName:(NSString *)arg0 url:(NSURL *)arg1 headerFields:(NSDictionary *)arg2 decryptionAgent:(<BRMusicStoreImageDecryptionAgent> *)arg3 writeImage:(char)arg4;
- (void)runForManager:(BRImageManager *)arg0;
- (char)writeImage;
- (BRImageLoadJob *)initWithName:(NSString *)arg0 requestProperties:(SSURLRequestProperties *)arg1 decryptionAgent:(<BRMusicStoreImageDecryptionAgent> *)arg2 writeImage:(char)arg3;
- (AVPlayerLayer *)output;
- (void)operation:(ISURLOperation *)arg0 failedWithError:(NSError *)arg1;
- (void)cancel;
- (void)dealloc;
- (NSString *)name;
- (NSURL *)url;
- (void).cxx_destruct;
- (void)operation:(ISURLOperation *)arg0 finishedWithOutput:(AVPlayerLayer *)arg1;
- (SSURLRequestProperties *)requestProperties;

@end
