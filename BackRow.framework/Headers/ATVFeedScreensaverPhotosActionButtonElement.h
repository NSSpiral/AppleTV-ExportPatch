/* Runtime dump - ATVFeedScreensaverPhotosActionButtonElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedActionButtonElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedScreensaverPhotosActionButtonElement : ATVFeedActionButtonElement
{
    NSString * _photoCollectionID;
}

@property (retain, nonatomic) NSString * photoCollectionID;

- (ATVFeedScreensaverPhotosActionButtonElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)photoCollectionID;
- (void)setPhotoCollectionID:(NSString *)arg0;
- (void).cxx_destruct;

@end
