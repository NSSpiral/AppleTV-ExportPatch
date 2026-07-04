/* Runtime dump - IDSDeviceConnection
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDeviceConnection : NSObject
{
    _IDSDeviceConnection * _internal;
}

@property (readonly, nonatomic) int socket;
@property (readonly, retain, nonatomic) NSInputStream * inputStream;
@property (readonly, retain, nonatomic) NSOutputStream * outputStream;
@property (readonly, retain, nonatomic) _IDSDeviceConnection * _internal;

- (IDSDeviceConnection *)initSocketWithDevice:(NSObject *)arg0 options:(NSDictionary *)arg1 completionHandler:(id /* block */)arg2 queue:(/* block */ id)arg3;
- (_IDSDeviceConnection *)_internal;
- (int)socket;
- (void)dealloc;
- (NSString *)description;
- (void)close;
- (NSInputStream *)inputStream;
- (void)setStreamPairWithInputStream:(NSInputStream *)arg0 outputStream:(NSOutputStream *)arg1;
- (char)updateConnectionWithOptions:(NSDictionary *)arg0 error:(id *)arg1;
- (IDSDeviceConnection *)initStreamWithDevice:(NSObject *)arg0 options:(NSDictionary *)arg1 completionHandler:(id /* block */)arg2 queue:(/* block */ id)arg3;
- (NSOutputStream *)outputStream;

@end
