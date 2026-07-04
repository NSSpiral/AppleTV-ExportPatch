/* Runtime dump - EASession
 * Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EASession : NSObject
{
    EAAccessory * _accessory;
    unsigned int _sessionID;
    NSString * _protocolString;
    NSInputStream * _inputStream;
    NSOutputStream * _outputStream;
    char _openCompleted;
    int _sock;
}

@property (readonly, nonatomic) EAAccessory * accessory;
@property (readonly, nonatomic) NSString * protocolString;
@property (readonly, nonatomic) NSInputStream * inputStream;
@property (readonly, nonatomic) NSOutputStream * outputStream;

- (NSString *)protocolString;
- (void)_streamClosed;
- (EASession *)initWithAccessory:(EAAccessory *)arg0 forProtocol:(NSObject *)arg1;
- (void)_endStreams;
- (char)isOpenCompleted;
- (void)setOpenCompleted:(char)arg0;
- (void)dealloc;
- (EASession *)init;
- (NSString *)description;
- (unsigned int)_sessionID;
- (EAAccessory *)accessory;
- (NSInputStream *)inputStream;
- (NSOutputStream *)outputStream;
- (NSString *)_shortDescription;

@end
