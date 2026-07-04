/* Runtime dump - _BRRemoteEventSendingUILongPressGestureRecognizer
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface _BRRemoteEventSendingUILongPressGestureRecognizer : UILongPressGestureRecognizer
{
    int _eventAction;
    unsigned int _eventOriginator;
}

@property (nonatomic) int eventAction;
@property (nonatomic) unsigned int eventOriginator;

- (int)eventAction;
- (void)setEventAction:(int)arg0;
- (unsigned int)eventOriginator;
- (void)setEventOriginator:(unsigned int)arg0;
- (NSString *)description;

@end
