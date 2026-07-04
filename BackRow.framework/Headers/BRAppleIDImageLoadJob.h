/* Runtime dump - BRAppleIDImageLoadJob
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRImageLoadJob;

@class BRImageManager;
@interface BRAppleIDImageLoadJob : NSObject <BRImageLoadJob>
{
    UIImage * _outputImage;
    char _writeImage;
    NSString * _name;
    NSURL * _url;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSURL * url;
@property (readonly, nonatomic) char writeImage;

- (id /* <BRMusicStoreImageDecryptionAgent> */)decryptionAgent;
- (BRAppleIDImageLoadJob *)initWithName:(NSString *)arg0 url:(NSURL *)arg1 writeImage:(char)arg2;
- (void)runForManager:(BRImageManager *)arg0;
- (char)writeImage;
- (void)_loadImageForManager:(NSObject *)arg0;
- (AVPlayerLayer *)output;
- (void)cancel;
- (NSString *)name;
- (NSURL *)url;
- (void).cxx_destruct;

@end
