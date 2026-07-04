/* Runtime dump - AMSBTLEPeripheral
 * Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface AMSBTLEPeripheral : NSObject
{
    CBPeripheral * peripheral;
    NSString * uuid;
    NSString * name;
    CBCentralManager * centralManager;
    double lastSeen;
    char inputAvailable;
    char outputAvailable;
    char online;
    char available;
    char _changingState;
}

@property (readonly) CBPeripheral * peripheral;
@property (readonly, retain) NSString * uuid;
@property (retain) NSString * name;
@property double lastSeen;
@property char inputAvailable;
@property char outputAvailable;
@property char online;
@property char changingState;
@property char available;

- (void)setChangingState:(char)arg0;
- (char)isOnline;
- (AMSBTLEPeripheral *)initWithID:(int)arg0 name:(NSString *)arg1 manager:(NSObject *)arg2;
- (void)setInputAvailable:(char)arg0;
- (void)setOutputAvailable:(char)arg0;
- (void)setOnline:(char)arg0;
- (char)updateAvailableStateChanged;
- (char)canConnect;
- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (char)connect;
- (char)disconnect;
- (NSString *)uuid;
- (char)isChangingState;
- (void)setLastSeen:(double)arg0;
- (double)lastSeen;
- (CBPeripheral *)peripheral;
- (char)inputAvailable;
- (char)outputAvailable;
- (char)isAvailable;
- (void)setAvailable:(char)arg0;
- (char)hidden;

@end
