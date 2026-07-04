/* Runtime dump - _BRRemoteEventUIPanGestureRecognizer
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol _BRRemoteEventRepeatingGestureRecognizer;
@interface _BRRemoteEventUIPanGestureRecognizer : UIPanGestureRecognizer <_BRRemoteEventRepeatingGestureRecognizer>
{
    unsigned int _repeatCount;
}

@property (nonatomic) unsigned int repeatCount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (unsigned int)repeatCount;
- (void)setRepeatCount:(unsigned int)arg0;

@end
