/* Runtime dump - SCRCGestureEvent
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCGestureEvent : NSObject
{
    unsigned int _deviceIdentifier;
    id _finger;
    unsigned int _fingerCount;
    double _time;
    struct CGPoint _averageLocation;
}

- (void)dealloc;
- (NSString *)description;
- (double)time;
- (unsigned int)deviceIdentifier;
- (struct CGRect)fingerFrame;
- (void)addFingerWithIdentifier:(unsigned int)arg0 location:(struct CGPoint)arg1;
- (void)removeFingerWithIdentifier:(unsigned int)arg0;
- (unsigned int)fingerCount;
- (NSObject *)fingerAtIndex:(unsigned int)arg0;
- (NSString *)fingerWithIdentifier:(unsigned int)arg0;
- (NSString *)fingerWithoutIdentifier:(unsigned int)arg0;
- (id)fingers;
- (struct CGPoint)averageLocation;
- (struct CGPoint)balancedLocation;
- (char)isCancelEvent;
- (struct CGPoint)magneticLocation;
- (SCRCGestureEvent *)initWithDeviceIdentifier:(unsigned int)arg0;

@end
