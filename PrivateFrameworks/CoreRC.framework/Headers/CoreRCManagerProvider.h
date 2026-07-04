/* Runtime dump - CoreRCManagerProvider
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCManagerProvider : CoreRCManager <CoreRCInterfaceControllerDelegate>
{
    CoreCECOverride * _standardOverride;
    CoreCECOverride * _pluginOverride;
    CoreRCInterfaceController * _interfaceController;
}

@property (retain, nonatomic) CoreCECOverride * standardOverride;
@property (retain, nonatomic) CoreCECOverride * pluginOverride;
@property (readonly, nonatomic) CoreRCInterfaceController * interfaceController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CoreRCManagerProvider *)allocWithZone:(struct _NSZone *)arg0;

- (void)dealloc;
- (CoreRCManagerProvider *)initWithSerialQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSArray *)firstCECOverrideFromPaths:(NSArray *)arg0;
- (void)setPluginOverride:(CoreCECOverride *)arg0;
- (CoreCECOverride *)pluginOverride;
- (void)setStandardOverride:(CoreCECOverride *)arg0;
- (id)addDeviceWithBus:(id)arg0 logicalAddress:(unsigned char)arg1 physicalAddress:(unsigned int)arg2 deviceType:(unsigned int)arg3 message:(NSString *)arg4 reason:(unsigned int)arg5;
- (CoreCECOverride *)standardOverride;
- (void)initCECOverrides;
- (void)interfaceController:(CoreRCInterfaceController *)arg0 didAddInterface:(CoreRCInterface *)arg1;
- (void)interfaceController:(CoreRCInterfaceController *)arg0 didRemoveInterface:(CoreRCInterface *)arg1;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1 ofBus:(CoreRCBus *)arg2 error:(id *)arg3;
- (NSString *)propertyForKey:(NSString *)arg0 ofBus:(CoreRCBus *)arg1 error:(id *)arg2;
- (CoreRCInterfaceController *)interfaceController;

@end
