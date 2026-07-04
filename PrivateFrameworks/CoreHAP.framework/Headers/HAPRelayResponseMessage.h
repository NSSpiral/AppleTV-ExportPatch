/* Runtime dump - HAPRelayResponseMessage
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRelayResponseMessage : NSObject
{
    HAPRelayRequestMessage * _request;
    unsigned int _type;
    NSData * _body;
}

@property (readonly, nonatomic) HAPRelayRequestMessage * request;
@property (readonly, nonatomic) char encrypted;
@property (readonly, nonatomic) unsigned int type;
@property (retain, nonatomic) NSData * body;

- (HAPRelayRequestMessage *)request;
- (unsigned int)type;
- (NSData *)body;
- (void).cxx_destruct;
- (void)setBody:(NSData *)arg0;
- (char)isEncrypted;
- (char)_deserializeResponseMessage:(NSString *)arg0;
- (HAPRelayResponseMessage *)initWithRequest:(HAPRelayRequestMessage *)arg0 serializedMessage:(NSString *)arg1;

@end
