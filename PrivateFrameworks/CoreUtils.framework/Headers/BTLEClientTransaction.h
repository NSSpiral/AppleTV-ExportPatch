/* Runtime dump - BTLEClientTransaction
 * Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface BTLEClientTransaction : NSObject
{
    BTLEClient * _client;
    NSString * _writeCharacteristic;
    NSData * _writeData;
    NSString * _readCharacteristic;
    NSData * _readData;
    id _readHandler;
    id _writeHandler;
    id _replyHandler;
}

@property (retain, nonatomic) BTLEClient * client;
@property (copy, nonatomic) NSString * writeCharacteristic;
@property (copy, nonatomic) NSData * writeData;
@property (copy, nonatomic) NSString * readCharacteristic;
@property (copy, nonatomic) NSData * readData;
@property (copy, nonatomic) id readHandler;
@property (copy, nonatomic) id writeHandler;
@property (copy, nonatomic) id replyHandler;

- (void)setReadCharacteristic:(NSString *)arg0;
- (void)setReadHandler:(id /* block */)arg0;
- (void)setWriteCharacteristic:(NSString *)arg0;
- (void)setWriteData:(NSData *)arg0;
- (void)setWriteHandler:(id /* block */)arg0;
- (void)setReplyHandler:(id /* block */)arg0;
- (NSString *)writeCharacteristic;
- (NSData *)writeData;
- (NSString *)readCharacteristic;
- (NSData *)readData;
- (void)setReadData:(NSData *)arg0;
- (id /* block */)readHandler;
- (id /* block */)writeHandler;
- (id /* block */)replyHandler;
- (void)setClient:(BTLEClient *)arg0;
- (BTLEClient *)client;

@end
