/* Runtime dump - ATVFeedSearchElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, ATVFeedHeaderElement, BRMerchant;
@interface ATVFeedSearchElement : ATVFeedRootElement
{
    char _showPreview;
    char _searchesEmptyString;
    ATVFeedHeaderElement * _header;
    NSString * _baseURL;
}

@property (retain, nonatomic) ATVFeedHeaderElement * header;
@property (copy, nonatomic) NSString * baseURL;
@property (nonatomic) char showPreview;
@property (nonatomic) char searchesEmptyString;

- (ATVFeedSearchElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (char)searchesEmptyString;
- (char)showPreview;
- (void)setShowPreview:(char)arg0;
- (void)setSearchesEmptyString:(char)arg0;
- (NSString *)baseURL;
- (void).cxx_destruct;
- (void)setBaseURL:(NSString *)arg0;
- (void)setHeader:(ATVFeedHeaderElement *)arg0;
- (ATVFeedHeaderElement *)header;

@end
