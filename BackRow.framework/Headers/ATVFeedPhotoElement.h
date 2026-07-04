/* Runtime dump - ATVFeedPhotoElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedPhotoElement : ATVFeedElement
{
    NSString * _caption;
    NSArray * _badges;
    NSArray * _assets;
}

@property (retain, nonatomic) NSString * caption;
@property (retain, nonatomic) NSArray * badges;
@property (retain, nonatomic) NSArray * assets;

- (ATVFeedPhotoElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setBadges:(NSArray *)arg0;
- (void).cxx_destruct;
- (NSArray *)badges;
- (NSArray *)assets;
- (void)setAssets:(NSArray *)arg0;
- (void)setCaption:(NSString *)arg0;
- (NSString *)caption;

@end
