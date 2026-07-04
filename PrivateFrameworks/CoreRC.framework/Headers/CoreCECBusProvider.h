/* Runtime dump - CoreCECBusProvider
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECBusProvider : CoreCECBus <CECInterfaceDelegate, CECBusPollingOperationDelegate, NSCopying, NSSecureCoding>
{
    CECInterface * _interface;
    unsigned char _powerStatus;
    CECBusPollingOperation * _pollingOperation;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * serialQueue;
@property (nonatomic) unsigned char powerStatus;
@property (readonly, retain, nonatomic) CECInterface * interface;
@property (retain, nonatomic) CECBusPollingOperation * pollingOperation;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (CoreCECBusProvider *)initWithInterface:(CECInterface *)arg0;
- (void)dealloc;
- (CoreCECBusProvider *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (CoreCECBusProvider *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (CECInterface *)interface;
- (NSObject<OS_dispatch_queue> *)serialQueue;
- (unsigned char)powerStatus;
- (void)interfacePropertiesChanged:(CECInterface *)arg0;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1 error:(id *)arg2;
- (NSString *)propertyForKey:(NSString *)arg0 error:(id *)arg1;
- (void)setOsdNameASCII:(NSString *)arg0;
- (void)setTvLanguageCodeASCII:(struct CECLanguage)arg0;
- (NSObject *)addDeviceWithType:(unsigned int)arg0 error:(id *)arg1;
- (void)setSystemAudioModeStatus:(unsigned int)arg0;
- (char)linkStateChanged:(char)arg0 error:(id *)arg1;
- (NSString *)addDeviceWithLogicalAddress:(unsigned char)arg0 physicalAddress:(unsigned int)arg1 deviceType:(unsigned int)arg2 message:(NSString *)arg3 reason:(unsigned int)arg4;
- (void)setPowerStatus:(unsigned char)arg0;
- (void)interface:(CECInterface *)arg0 receivedFrame:(struct CECFrame)arg1;
- (CECBusPollingOperation *)pollingOperation;
- (void)setPollingOperation:(CECBusPollingOperation *)arg0;
- (NSString *)addDeviceWithLogicalAddress:(unsigned char)arg0 message:(NSString *)arg1 reason:(unsigned int)arg2;
- (NSString *)destinationExpectedForMessage:(NSString *)arg0;
- (char)sendMessage:(NSString *)arg0 withRetryCount:(unsigned char)arg1 error:(id *)arg2;
- (NSError *)_cecErrorWithInterfaceError:(CECInterface *)arg0;
- (NSString *)destinationConfirmedForMessage:(NSString *)arg0;
- (void)receivedMessage:(NSString *)arg0;
- (char)pollingOperation:(CECBusPollingOperation *)arg0 shouldSkipAddress:(unsigned char)arg1;
- (void)pollingOperationCompleted:(CECBusPollingOperation *)arg0;
- (void)pollingOperation:(CECBusPollingOperation *)arg0 deviceNotRespondingAtAddress:(unsigned char)arg1;
- (void)pollingOperation:(CECBusPollingOperation *)arg0 encounteredError:(NSError *)arg1 forMessage:(CECMessage *)arg2;
- (char)refreshDevicesWithInitiator:(id)arg0 error:(id *)arg1;
- (char)updateActiveSource:(NSObject *)arg0 error:(id *)arg1;
- (char)sendMessage:(NSString *)arg0 error:(id *)arg1;

@end
