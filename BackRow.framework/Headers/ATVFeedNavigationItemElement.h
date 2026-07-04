/* Runtime dump - ATVFeedNavigationItemElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedNavigationItemElement : ATVFeedElement
{
    NSString * _title;
    NSString * _titleWeight;
    NSNumber * _titleSize;
    NSString * _url;
    NSString * _urlType;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * titleWeight;
@property (retain, nonatomic) NSNumber * titleSize;
@property (copy, nonatomic) NSString * url;
@property (copy, nonatomic) NSString * urlType;

- (ATVFeedNavigationItemElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSNumber *)titleSize;
- (NSString *)titleWeight;
- (void)setTitleWeight:(NSString *)arg0;
- (void)setTitleSize:(NSNumber *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)url;
- (NSString *)title;
- (void)setUrl:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)urlType;
- (void)setUrlType:(NSString *)arg0;

@end
