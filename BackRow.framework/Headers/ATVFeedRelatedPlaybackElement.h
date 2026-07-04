/* Runtime dump - ATVFeedRelatedPlaybackElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, ATVFeedMenuElement, ATVFeedUpNextItemElement, BRMerchant;
@interface ATVFeedRelatedPlaybackElement : ATVFeedRootElement
{
    ATVFeedUpNextItemElement * _upNextItem;
    NSString * _endTitle;
    ATVFeedMenuElement * _optionsMenu;
}

@property (retain, nonatomic) ATVFeedUpNextItemElement * upNextItem;
@property (retain, nonatomic) NSString * endTitle;
@property (retain, nonatomic) ATVFeedMenuElement * optionsMenu;

- (ATVFeedRelatedPlaybackElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (ATVFeedUpNextItemElement *)upNextItem;
- (void)setUpNextItem:(ATVFeedUpNextItemElement *)arg0;
- (NSString *)endTitle;
- (void)setEndTitle:(NSString *)arg0;
- (ATVFeedMenuElement *)optionsMenu;
- (void)setOptionsMenu:(ATVFeedMenuElement *)arg0;
- (void).cxx_destruct;

@end
