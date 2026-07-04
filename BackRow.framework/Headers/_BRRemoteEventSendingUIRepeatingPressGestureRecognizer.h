/* Runtime dump - _BRRemoteEventSendingUIRepeatingPressGestureRecognizer
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol _BRRemoteEventRepeatingGestureRecognizer;
@interface _BRRemoteEventSendingUIRepeatingPressGestureRecognizer : _UIRepeatingPressGestureRecognizer <_BRRemoteEventRepeatingGestureRecognizer>
{
    int _eventAction;
    unsigned int _eventOriginator;
    unsigned int _repeatCount;
}

@property (nonatomic) int eventAction;
@property (nonatomic) unsigned int eventOriginator;
@property (nonatomic) unsigned int repeatCount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (int)eventAction;
- (void)setEventAction:(int)arg0;
- (unsigned int)eventOriginator;
- (void)setEventOriginator:(unsigned int)arg0;
- (NSString *)description;
- (unsigned int)repeatCount;
- (void)setRepeatCount:(unsigned int)arg0;

@end
