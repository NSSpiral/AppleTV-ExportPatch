/* Runtime dump - CoreIRBusProvider
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreIRBusProvider : CoreIRBus <IRInterfaceDelegate>
{
    CoreIRDeviceProvider * _localDevice;
    IRInterface * _interface;
}

@property (readonly, retain, nonatomic) IRInterface * interface;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (CoreIRBusProvider *)initWithInterface:(IRInterface *)arg0;
- (void)dealloc;
- (Class)classForCoder;
- (IRInterface *)interface;
- (NSObject *)addExternalDevice:(id *)arg0;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1 error:(id *)arg2;
- (NSString *)propertyForKey:(NSString *)arg0 error:(id *)arg1;
- (void)interface:(IRInterface *)arg0 receivedCommand:(IRCommand *)arg1;
- (void)interface:(IRInterface *)arg0 receivedHIDEvent:(CoreRCHIDEvent *)arg1;
- (CoreIRDeviceProvider *)localDevice;
- (void)setManager:(CoreRCManager *)arg0;

@end
