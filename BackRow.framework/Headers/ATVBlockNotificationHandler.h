/* Runtime dump - ATVBlockNotificationHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVBlockNotificationHandler : NSObject
{
    char _listening;
    id _block;
}

@property (copy, nonatomic) id block;

- (void)startObservingNotificationName:(NSString *)arg0 object:(NSObject *)arg1;
- (void)stopObservingAll;
- (void)dealloc;
- (void)_notification:(NSNotification *)arg0;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg0;

@end
