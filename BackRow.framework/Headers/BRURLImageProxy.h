/* Runtime dump - BRURLImageProxy
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRImageProxy;

@class BRMediaType;
@interface BRURLImageProxy : NSObject <BRImageProxy>
{
    NSString * _imageID;
    NSURL * _url;
    NSDictionary * _headerFields;
    <BRMusicStoreImageDecryptionAgent> * _decryptionAgent;
    BRMediaType * _mediaTypeForDefaultImage;
    ATVImage * _defaultImage;
    char _writeToDisk;
    long _imageIDLazyInitializationGuard;
    char _usesScreenSaverImageManager;
}

@property (nonatomic) char usesScreenSaverImageManager;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSURL *)proxyWithURL:(NSURL *)arg0;
+ (NSURL *)proxyWithURL:(NSURL *)arg0 headerFields:(NSDictionary *)arg1 decryptionAgent:(<BRMusicStoreImageDecryptionAgent> *)arg2;
+ (NSURL *)proxyWithURL:(NSURL *)arg0 decryptionAgent:(<BRMusicStoreImageDecryptionAgent> *)arg1;
+ (NSURL *)proxyWithURL:(NSURL *)arg0 headerFields:(NSDictionary *)arg1;

- (ATVImage *)imageForImageSize:(int)arg0;
- (void)setDefaultImage:(ATVImage *)arg0;
- (ATVImage *)defaultImageForImageSize:(int)arg0;
- (NSString *)imageIDForImageSize:(int)arg0;
- (void)setWriteToDisk:(char)arg0;
- (ATVImage *)defaultImage;
- (char)imageForImageSizeIsAvailable:(int)arg0;
- (void)cancelImageRequestsForImageSizes:(int)arg0;
- (char)supportsImageForImageSize:(int)arg0;
- (void)setUsesScreenSaverImageManager:(char)arg0;
- (BRURLImageProxy *)initWithURL:(NSURL *)arg0 headerFields:(NSDictionary *)arg1 decryptionAgent:(<BRMusicStoreImageDecryptionAgent> *)arg2;
- (void)setDecryptionAgent:(<BRMusicStoreImageDecryptionAgent> *)arg0;
- (char)usesScreenSaverImageManager;
- (<BRMusicStoreImageDecryptionAgent> *)decryptionAgent;
- (BRURLImageProxy *)initWithURL:(NSURL *)arg0 decryptionAgent:(<BRMusicStoreImageDecryptionAgent> *)arg1;
- (BRURLImageProxy *)initWithURL:(NSURL *)arg0 headerFields:(NSDictionary *)arg1;
- (NSObject *)_imageManager;
- (void)setMediaTypeForDefaultImage:(BRMediaType *)arg0;
- (BRMediaType *)mediaTypeForDefaultImage;
- (void)dealloc;
- (NSURL *)url;
- (NSObject *)object;
- (BRURLImageProxy *)initWithURL:(NSURL *)arg0;
- (void)setObject:(NSObject *)arg0;
- (char)writeToDisk;
- (NSDictionary *)headerFields;
- (void)setHeaderFields:(NSDictionary *)arg0;

@end
