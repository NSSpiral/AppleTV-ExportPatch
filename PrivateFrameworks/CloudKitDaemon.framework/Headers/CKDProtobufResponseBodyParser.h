/* Runtime dump - CKDProtobufResponseBodyParser
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDProtobufResponseBodyParser : NSObject <CKDResponseBodyParser>
{
    char _isParsing;
    Class _messageClass;
    id _objectParsedBlock;
    NSError * _parserError;
    NSObject<OS_dispatch_queue> * _parseQueue;
    NSData * _parserData;
    NSMutableData * _tailParserData;
    unsigned int _curObjectLength;
    struct CC_SHA256state_st _mescalSignature;
}

@property (nonatomic) Class messageClass;
@property (copy, nonatomic) id objectParsedBlock;
@property (retain, nonatomic) NSError * parserError;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * parseQueue;
@property (retain, nonatomic) NSData * parserData;
@property (retain, nonatomic) NSMutableData * tailParserData;
@property (nonatomic) unsigned int curObjectLength;
@property (nonatomic) char isParsing;
@property (nonatomic) struct CC_SHA256state_st mescalSignature;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (CKDProtobufResponseBodyParser *)init;
- (void).cxx_destruct;
- (void)setMessageClass:(Class)arg0;
- (void)setObjectParsedBlock:(id /* block */)arg0;
- (void)processData:(NSData *)arg0;
- (void)finishWithCompletion:(id /* block */)arg0;
- (id /* block */)objectParsedBlock;
- (NSError *)parserError;
- (void)setParserError:(NSError *)arg0;
- (NSData *)parserData;
- (void)setParserData:(NSData *)arg0;
- (Class)messageClass;
- (unsigned int)curObjectLength;
- (void)setCurObjectLength:(unsigned int)arg0;
- (char)_parseObjectFromData:(NSData *)arg0 rawData:(NSData *)arg1;
- (void)setTailParserData:(NSMutableData *)arg0;
- (NSObject<OS_dispatch_queue> *)parseQueue;
- (char)isParsing;
- (void)setIsParsing:(char)arg0;
- (NSMutableData *)tailParserData;
- (char)_parseObjects:(char)arg0;
- (void)setParseQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (struct CC_SHA256state_st)mescalSignature;
- (void)setMescalSignature:(struct CC_SHA256state_st)arg0;

@end
