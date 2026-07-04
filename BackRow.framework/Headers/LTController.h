/* Runtime dump - LTController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRResponder;

@class BREvent;
@interface LTController : NSObject <BRResponder>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)brEventAction:(BREvent *)arg0;
- (char)brKeyEvent:(BREvent *)arg0;

@end
