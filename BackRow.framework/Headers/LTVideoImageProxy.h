/* Runtime dump - LTVideoImageProxy
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRImageProxy;
@interface LTVideoImageProxy : NSObject <BRImageProxy>
{
    NSString * _identifier;
    AVMetadataItem * _metadataItem;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)imageProxyWithIdentifier:(NSString *)arg0 metadataItem:(AVMetadataItem *)arg1;

- (ATVImage *)imageForImageSize:(int)arg0;
- (ATVImage *)defaultImageForImageSize:(int)arg0;
- (NSString *)imageIDForImageSize:(int)arg0;
- (void)cancelImageRequestsForImageSizes:(int)arg0;
- (char)supportsImageForImageSize:(int)arg0;
- (LTVideoImageProxy *)initWithIdentifier:(NSString *)arg0 metadataItem:(AVMetadataItem *)arg1;
- (NSObject *)object;
- (void).cxx_destruct;

@end
