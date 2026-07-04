/* Runtime dump - ATVTimeZoneSearchAgent
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVSearchAgent.h>

@class ATVTimeZoneChooserController, BRController;
@interface ATVTimeZoneSearchAgent : ATVSearchAgent
{
    ATVTimeZoneChooserController * _controller;
}

+ (NSObject *)agentForController:(BRController *)arg0;

- (ATVTimeZoneSearchAgent *)initWithController:(ATVTimeZoneChooserController *)arg0;
- (void)search:(NSString *)arg0 ignoringCache:(char)arg1;
- (char)showRecentSearches;
- (char)handlePlayForObject:(NSObject *)arg0;
- (void).cxx_destruct;
- (long)cacheSize;

@end
