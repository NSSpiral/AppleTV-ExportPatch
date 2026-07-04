/* Runtime dump - ATVAppControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl;
@interface ATVAppControlFactory : NSObject

+ (ATVAppControlFactory *)sharedInstance;

- (NSObject *)controlForElement:(NSObject *)arg0 usingControl:(BRControl *)arg1 forceRefresh:(char)arg2;

@end
