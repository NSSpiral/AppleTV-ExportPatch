/* Runtime dump - ATVFeedViewWithNavigationBarElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedViewWithNavigationBarElement : ATVFeedRootElement
{
    int _currentIndex;
    NSArray * _navigationItems;
    NSString * _onNavigate;
}

@property (nonatomic) int currentIndex;
@property (retain, nonatomic) NSArray * navigationItems;
@property (copy, nonatomic) NSString * onNavigate;

- (ATVFeedViewWithNavigationBarElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)onNavigate;
- (void)setOnNavigate:(NSString *)arg0;
- (NSArray *)navigationItems;
- (void)setNavigationItems:(NSArray *)arg0;
- (int)currentIndex;
- (void).cxx_destruct;
- (void)setCurrentIndex:(int)arg0;

@end
