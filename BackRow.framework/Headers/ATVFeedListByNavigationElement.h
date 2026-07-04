/* Runtime dump - ATVFeedListByNavigationElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedGenericCollectionElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedListByNavigationElement : ATVFeedGenericCollectionElement
{
    int _currentIndex;
    NSArray * _navigationItems;
    NSString * _onNavigate;
}

@property (nonatomic) int currentIndex;
@property (retain, nonatomic) NSArray * navigationItems;
@property (copy, nonatomic) NSString * onNavigate;

- (ATVFeedListByNavigationElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)onNavigate;
- (void)setOnNavigate:(NSString *)arg0;
- (NSArray *)navigationItems;
- (void)setNavigationItems:(NSArray *)arg0;
- (int)currentIndex;
- (void).cxx_destruct;
- (void)setCurrentIndex:(int)arg0;

@end
