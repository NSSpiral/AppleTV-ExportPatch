/* Runtime dump - MEAirTunesImageProxy
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRImageProxy;

@class MEAirTunesMediaAsset;
@interface MEAirTunesImageProxy : NSObject <BRImageProxy>
{
    MEAirTunesMediaAsset * _asset;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSSet *)imageProxyWithAsset:(MEAirTunesMediaAsset *)arg0;

- (ATVImage *)imageForImageSize:(int)arg0;
- (ATVImage *)defaultImageForImageSize:(int)arg0;
- (NSString *)imageIDForImageSize:(int)arg0;
- (void)cancelImageRequestsForImageSizes:(int)arg0;
- (char)supportsImageForImageSize:(int)arg0;
- (NSObject *)object;
- (MEAirTunesImageProxy *)initWithAsset:(MEAirTunesMediaAsset *)arg0;
- (void).cxx_destruct;

@end
