/* Runtime dump - ATVFeedVideoElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedVideoElement : ATVFeedElement
{
    NSString * _caption;
    NSArray * _badges;
    NSArray * _previewImages;
}

@property (retain, nonatomic) NSString * caption;
@property (retain, nonatomic) NSArray * badges;
@property (retain, nonatomic) NSArray * previewImages;

- (ATVFeedVideoElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setBadges:(NSArray *)arg0;
- (void)setPreviewImages:(NSArray *)arg0;
- (NSArray *)previewImages;
- (void).cxx_destruct;
- (NSArray *)badges;
- (void)setCaption:(NSString *)arg0;
- (NSString *)caption;

@end
