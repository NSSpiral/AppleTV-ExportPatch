/* Runtime dump - ATVFeedComboMenuItemLayerElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedMenuItemElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedComboMenuItemLayerElement : ATVFeedMenuItemElement
{
    NSString * _bottomLeftLabel;
    NSString * _bottomCenterLabel;
    int _likeCount;
    int _dislikeCount;
}

@property (copy, nonatomic) NSString * bottomLeftLabel;
@property (copy, nonatomic) NSString * bottomCenterLabel;
@property (nonatomic) int likeCount;
@property (nonatomic) int dislikeCount;
@property (nonatomic) char dimmed;

- (ATVFeedComboMenuItemLayerElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setDislikeCount:(int)arg0;
- (int)dislikeCount;
- (void)setBottomLeftLabel:(NSString *)arg0;
- (void)setBottomCenterLabel:(NSString *)arg0;
- (NSString *)bottomLeftLabel;
- (NSString *)bottomCenterLabel;
- (void).cxx_destruct;
- (void)setLikeCount:(int)arg0;
- (int)likeCount;

@end
