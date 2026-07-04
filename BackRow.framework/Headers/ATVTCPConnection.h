/* Runtime dump - ATVTCPConnection
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol NSStreamDelegate;

@class ATVTCPControlReceiver;
@interface ATVTCPConnection : NSObject <NSStreamDelegate>
{
    id _delegate;
    NSData * _peerAddress;
    ATVTCPControlReceiver * _server;
    NSMutableArray * _requests;
    NSInputStream * _istream;
    NSOutputStream * _ostream;
    NSMutableData * _ibuffer;
    NSMutableData * _obuffer;
    char _isValid;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ATVTCPConnection *)initWithPeerAddress:(NSData *)arg0 inputStream:(id *)arg1 outputStream:(NSOutputStream *)arg2 forServer:(NSObject *)arg3;
- (char)processIncomingBytes;
- (NSData *)peerAddress;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (ATVTCPConnection *)init;
- (NSObject *)delegate;
- (void)invalidate;
- (ATVTCPControlReceiver *)server;
- (char)isValid;
- (void)stream:(NSStream *)arg0 handleEvent:(unsigned int)arg1;

@end
