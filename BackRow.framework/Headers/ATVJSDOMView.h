/* Runtime dump - ATVJSDOMView
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRController;
@interface ATVJSDOMView : NSObject
{
    BRController * _view;
}

@property (retain, nonatomic) BRController * view;

- (void)dealloc;
- (BRController *)view;
- (void)setView:(BRController *)arg0;

@end
