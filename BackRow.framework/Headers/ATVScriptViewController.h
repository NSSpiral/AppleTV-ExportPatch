/* Runtime dump - ATVScriptViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedController.h>

@class ATVFeedElement;
@interface ATVScriptViewController : ATVFeedController

- (NSArray *)accessibilityScreenContent;
- (void)wasPushed;
- (char)accessibilityOutputsRange;
- (NSArray *)accessibilityTraitsList;
- (ATVScriptViewController *)initWithFeedElement:(ATVFeedElement *)arg0;
- (ATVScriptViewController *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)context;
- (char)isAccessibilityElement;

@end
