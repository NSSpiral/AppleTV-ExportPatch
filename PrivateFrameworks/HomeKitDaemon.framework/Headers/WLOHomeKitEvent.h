/* Runtime dump - WLOHomeKitEvent
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface WLOHomeKitEvent : NSObject
{
    unsigned int _eventType;
}

@property (nonatomic) unsigned int eventType;

- (unsigned int)eventType;
- (NSString *)description;
- (void)setEventType:(unsigned int)arg0;

@end
