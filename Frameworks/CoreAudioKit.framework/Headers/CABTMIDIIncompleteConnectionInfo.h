/* Runtime dump - CABTMIDIIncompleteConnectionInfo
 * Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CABTMIDIIncompleteConnectionInfo : NSObject
{
    char _connecting;
    unsigned int _timeOutInterval;
    AMSBTLEPeripheral * _peripheral;
}

@property char connecting;
@property unsigned int timeOutInterval;
@property (retain, nonatomic) AMSBTLEPeripheral * peripheral;

- (void)setTimeOutInterval:(unsigned int)arg0;
- (CABTMIDIIncompleteConnectionInfo *)initWithPeripheral:(AMSBTLEPeripheral *)arg0 isConnecting:(char)arg1;
- (unsigned int)timeOutInterval;
- (AMSBTLEPeripheral *)peripheral;
- (void)setPeripheral:(AMSBTLEPeripheral *)arg0;
- (char)isConnecting;
- (void)setConnecting:(char)arg0;

@end
