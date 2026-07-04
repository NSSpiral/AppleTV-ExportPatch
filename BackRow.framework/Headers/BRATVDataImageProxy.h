/* Runtime dump - BRATVDataImageProxy
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRImageProxy;

@class BRImageManager;
@interface BRATVDataImageProxy : NSObject <BRImageProxy>
{
    char _usesScreenSaverImageManager;
    id _mediaObject;
    ATVDataClient * _dataClient;
    NSMutableArray * _savedTokens;
}

@property (retain, nonatomic) id mediaObject;
@property (retain, nonatomic) ATVDataClient * dataClient;
@property (retain, nonatomic) NSMutableArray * savedTokens;
@property (nonatomic) char usesScreenSaverImageManager;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)imageProxyWithMediaObject:(NSObject *)arg0;

- (ATVImage *)imageForImageSize:(int)arg0;
- (ATVImage *)defaultImageForImageSize:(int)arg0;
- (NSString *)imageIDForImageSize:(int)arg0;
- (char)imageForImageSizeIsAvailable:(int)arg0;
- (void)cancelImageRequestsForImageSizes:(int)arg0;
- (NSObject *)mediaObject;
- (void)cancelAllImageRequests;
- (char)supportsImageForImageSize:(int)arg0;
- (void)setUsesScreenSaverImageManager:(char)arg0;
- (BRATVDataImageProxy *)initWithMediaObject:(NSObject *)arg0;
- (NSObject *)_imageIDForImageSize:(int)arg0;
- (void)_saveToken:(NSString *)arg0 forImageID:(UIImage *)arg1;
- (UIImage *)_tokenInfoForImageID:(UIImage *)arg0;
- (void)_removeTokenForImageID:(UIImage *)arg0;
- (void)_cancelImageForImageID:(UIImage *)arg0;
- (void)_cancelToken:(NSString *)arg0;
- (NSObject *)_imageIDStringForSize:(int)arg0;
- (void)setMediaObject:(NSObject *)arg0;
- (NSMutableArray *)savedTokens;
- (void)setSavedTokens:(NSMutableArray *)arg0;
- (char)usesScreenSaverImageManager;
- (void)dealloc;
- (NSObject *)object;
- (BRImageManager *)imageManager;
- (ATVDataClient *)dataClient;
- (void)setDataClient:(ATVDataClient *)arg0;

@end
