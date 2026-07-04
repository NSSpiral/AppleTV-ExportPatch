/* Runtime dump - NEIPCHandle
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIPCHandle : NSObject
{
    NEIPC * _primary_ipc;
    NEIPC * _secondary_ipc;
    NSUUID * _config_id;
    struct __CFArray * _configurations;
    struct ipc_queue * _send_queue;
}

@property NEIPC * primary_ipc;
@property NEIPC * secondary_ipc;
@property NSUUID * config_id;
@property struct __CFArray * configurations;
@property struct ipc_queue * send_queue;

+ (void)deregisterConfiguration:(struct _VPNConfigurationPrivate *)arg0;
+ (char)sendMessageWithType:(unsigned int)arg0 data:(struct __CFData *)arg1 forConfiguration:(struct _VPNConfigurationPrivate *)arg2;

- (struct __CFArray *)configurations;
- (NSUUID *)config_id;
- (NSObject *)createIPCFromSocket:(int)arg0;
- (void)setPrimary_ipc:(NEIPC *)arg0;
- (void)setSecondary_ipc:(NEIPC *)arg0;
- (struct ipc_queue *)send_queue;
- (NEIPC *)primary_ipc;
- (NEIPC *)secondary_ipc;
- (void)setSend_queue:(struct ipc_queue *)arg0;
- (void)removeConfiguration:(struct _VPNConfigurationPrivate *)arg0;
- (void)addConfiguration:(struct _VPNConfigurationPrivate *)arg0;
- (char)sendMessage:(struct __CFData *)arg0 withType:(unsigned int)arg1;
- (long)getIndexOfConfiguration:(struct _VPNConfigurationPrivate *)arg0;
- (void)setConfig_id:(NSUUID *)arg0;
- (void)setConfigurations:(struct __CFArray *)arg0;
- (void)dealloc;
- (NEIPCHandle *)initWithConfiguration:(struct _VPNConfigurationPrivate *)arg0;

@end
