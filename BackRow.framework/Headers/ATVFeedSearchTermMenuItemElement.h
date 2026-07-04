/* Runtime dump - ATVFeedSearchTermMenuItemElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedMenuItemElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedSearchTermMenuItemElement : ATVFeedMenuItemElement
{
    NSString * _searchTerm;
}

@property (copy, nonatomic) NSString * searchTerm;

- (ATVFeedSearchTermMenuItemElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)searchTerm;
- (void)setSearchTerm:(NSString *)arg0;
- (void).cxx_destruct;

@end
