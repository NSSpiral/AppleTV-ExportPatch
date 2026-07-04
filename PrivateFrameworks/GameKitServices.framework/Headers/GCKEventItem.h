/* Runtime dump - GCKEventItem
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GCKEventItem : NSObject
{
    struct ? * _event;
    unsigned int _pid;
}

@property struct ? * event;
@property unsigned int pid;

- (void)dealloc;
- (GCKEventItem *)init;
- (void)setEvent:(struct ? *)arg0;
- (struct ? *)event;
- (unsigned int)pid;
- (void)setPid:(unsigned int)arg0;
- (GCKEventItem *)initWithEvent:(struct ? *)arg0 remotePeer:(unsigned int)arg1;

@end
