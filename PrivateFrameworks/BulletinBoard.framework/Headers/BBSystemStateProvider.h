/* Runtime dump - BBSystemStateProvider
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSystemStateProvider : NSObject
{
    NSXPCConnection * _connection;
    unsigned int _currentState;
    NSSet * _sectionIDs;
}

+ (BBSystemStateProvider *)serverInterface;
+ (BBSystemStateProvider *)clientInterface;

- (void)dealloc;
- (BBSystemStateProvider *)init;
- (void)invalidate;
- (void)noteOccurrenceOfEvent:(unsigned int)arg0;
- (void)noteChangeOfState:(unsigned int)arg0 newValue:(char)arg1;
- (void)noteRestrictedSectionIDsDidChange:(NSDictionary *)arg0;
- (void)_sendState:(unsigned int)arg0 value:(char)arg1;

@end
