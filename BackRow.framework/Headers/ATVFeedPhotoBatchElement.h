/* Runtime dump - ATVFeedPhotoBatchElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedPhotoBatchElement : ATVFeedElement
{
    NSString * _title;
    NSString * _boldTitle;
    NSString * _dimmedTitle;
    NSArray * _items;
}

@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * boldTitle;
@property (retain, nonatomic) NSString * dimmedTitle;
@property (retain, nonatomic) NSArray * items;

- (ATVFeedPhotoBatchElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setDimmedTitle:(NSString *)arg0;
- (void)setBoldTitle:(NSString *)arg0;
- (NSString *)boldTitle;
- (NSString *)dimmedTitle;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (void).cxx_destruct;

@end
