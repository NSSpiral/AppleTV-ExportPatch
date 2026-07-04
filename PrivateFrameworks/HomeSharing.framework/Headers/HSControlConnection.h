/* Runtime dump - HSControlConnection
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSControlConnection : NSObject <NSStreamDelegate>
{
    unsigned int _key;
    NSOutputStream * _outputStream;
    double _timestamp;
    <HSControlConnectionDelegate> * _delegate;
    unsigned int _protocolVersion;
}

@property (nonatomic) <HSControlConnectionDelegate> * delegate;
@property (nonatomic) unsigned int protocolVersion;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<HSControlConnectionDelegate> *)arg0;
- (<HSControlConnectionDelegate> *)delegate;
- (void)close;
- (void).cxx_destruct;
- (void)open;
- (unsigned int)protocolVersion;
- (void)setProtocolVersion:(unsigned int)arg0;
- (void)stream:(NSObject *)arg0 handleEvent:(unsigned int)arg1;
- (NSString *)_newDataForControlEventMessage:(struct ?)arg0;
- (NSString *)_newDataForControlExtendedMessage:(struct ?)arg0 withData:(NSData *)arg1;
- (void)_sendTouchEvent:(int)arg0 locations:(unsigned int *)arg1 count:(unsigned int)arg2 velocity:(unsigned int)arg3;
- (id)_newDataForControlTouchEventMessage_v1:(struct ?)arg0;
- (id)_newDataForControlTouchEventMessage_v1_1:(struct ?)arg0;
- (HSControlConnection *)initWithHost:(NSString *)arg0 port:(unsigned int)arg1 key:(unsigned int)arg2;
- (void)sendEvent:(int)arg0 value:(unsigned int)arg1;
- (void)sendShowItemDetailWithDictionary:(NSDictionary *)arg0;
- (void)sendTouchesBegan:(unsigned int *)arg0 count:(unsigned int)arg1;
- (void)sendTouchesEnded:(unsigned int *)arg0 count:(unsigned int)arg1;
- (void)sendTouchesMoved:(unsigned int *)arg0 count:(unsigned int)arg1 velocity:(unsigned int)arg2;

@end
