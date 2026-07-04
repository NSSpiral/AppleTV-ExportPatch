/* Runtime dump - ATVFeedOptionListElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedOptionListElement : ATVFeedRootElement
{
    char _autoSelectSingleItem;
    NSString * _title;
    NSString * _footnote;
    NSArray * _items;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * footnote;
@property (nonatomic) char autoSelectSingleItem;
@property (retain, nonatomic) NSArray * items;

- (ATVFeedOptionListElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (char)autoSelectSingleItem;
- (void)setAutoSelectSingleItem:(char)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (void).cxx_destruct;
- (NSString *)footnote;
- (void)setFootnote:(NSString *)arg0;

@end
