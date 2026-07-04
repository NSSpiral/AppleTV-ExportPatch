/* Runtime dump - ATVFeedRootElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedDocument, ATVFeedElement, ATVFeedStylesElement, BRMerchant;
@interface ATVFeedRootElement : ATVFeedElement
{
    char _isVolatile;
    NSString * _onVolatileReload;
    NSURL * _originalURL;
    ATVFeedDocument * _owner;
    float _refreshInterval;
    NSString * _onRefresh;
    ATVFeedStylesElement * _styles;
}

@property (nonatomic) char isVolatile;
@property (copy, nonatomic) NSString * onVolatileReload;
@property (retain, nonatomic) NSURL * originalURL;
@property (weak, nonatomic) ATVFeedDocument * owner;
@property (nonatomic) float refreshInterval;
@property (copy, nonatomic) NSString * onRefresh;
@property (readonly, retain, nonatomic) ATVFeedStylesElement * styles;

- (ATVFeedRootElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (char)isVolatile;
- (NSString *)onVolatileReload;
- (NSString *)onRefresh;
- (void)setIsVolatile:(char)arg0;
- (void)setOnVolatileReload:(NSString *)arg0;
- (void)setOnRefresh:(NSString *)arg0;
- (void)setOriginalURL:(NSURL *)arg0;
- (ATVFeedDocument *)ownerDocument;
- (NSURL *)originalURL;
- (void).cxx_destruct;
- (ATVFeedDocument *)owner;
- (float)refreshInterval;
- (void)setRefreshInterval:(float)arg0;
- (ATVFeedStylesElement *)styles;
- (void)setOwner:(ATVFeedDocument *)arg0;

@end
