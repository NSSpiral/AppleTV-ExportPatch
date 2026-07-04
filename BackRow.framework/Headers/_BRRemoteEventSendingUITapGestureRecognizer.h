/* Runtime dump - _BRRemoteEventSendingUITapGestureRecognizer
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface _BRRemoteEventSendingUITapGestureRecognizer : UITapGestureRecognizer
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
