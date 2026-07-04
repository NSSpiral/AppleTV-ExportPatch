/* Runtime dump - BRInternetRadioImageProxy
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRImageProxy;
@interface BRInternetRadioImageProxy : NSObject <BRImageProxy>
{
    NSString * _category;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)_convertCategory:(NSString *)arg0;
- (ATVImage *)imageForImageSize:(int)arg0;
- (ATVImage *)defaultImageForImageSize:(int)arg0;
- (NSString *)imageIDForImageSize:(int)arg0;
- (void)cancelImageRequestsForImageSizes:(int)arg0;
- (char)supportsImageForImageSize:(int)arg0;
- (NSObject *)object;
- (void).cxx_destruct;
- (BRInternetRadioImageProxy *)initWithCategory:(NSString *)arg0;

@end
