/* Runtime dump - HAPBTLEResponse
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLEResponse : NSObject
{
    char _headerComplete;
    unsigned char _statusCode;
    HAPBTLERequest * _request;
    HAPBTLETransactionIdentifier * _identifier;
    NSData * _body;
    unsigned int _bodyLength;
    NSMutableData * __internalBody;
}

@property (readonly, nonatomic) HAPBTLERequest * request;
@property (readonly, nonatomic) HAPBTLETransactionIdentifier * identifier;
@property (readonly, nonatomic) char encrypted;
@property (nonatomic) char headerComplete;
@property (readonly, nonatomic) char bodyComplete;
@property (readonly, nonatomic) char complete;
@property (readonly, nonatomic) char valid;
@property (copy, nonatomic) NSData * body;
@property (readonly, nonatomic) unsigned int bodyLength;
@property (readonly, nonatomic) unsigned char statusCode;
@property (retain, nonatomic) NSMutableData * _internalBody;

- (HAPBTLEResponse *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (HAPBTLETransactionIdentifier *)identifier;
- (HAPBTLERequest *)request;
- (char)isValid;
- (NSData *)body;
- (unsigned char)statusCode;
- (NSString *)shortDescription;
- (HAPBTLEResponse *)initWithRequest:(HAPBTLERequest *)arg0;
- (void).cxx_destruct;
- (void)setBody:(NSData *)arg0;
- (NSString *)descriptionWithPointer:(char)arg0;
- (char)isEncrypted;
- (char)isComplete;
- (unsigned int)appendData:(NSData *)arg0 error:(id *)arg1;
- (unsigned int)bodyLength;
- (char)isHeaderComplete;
- (char)isBodyComplete;
- (NSMutableData *)_internalBody;
- (unsigned int)_deserializeHeaderWithData:(NSData *)arg0 error:(id *)arg1;
- (unsigned int)_remainingBodyLength;
- (void)_setInternalBody:(NSObject *)arg0;
- (unsigned int)_deserializeHeaderBodyLengthWithData:(NSData *)arg0 error:(id *)arg1;
- (void)setHeaderComplete:(char)arg0;

@end
