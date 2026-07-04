/* Runtime dump - CKDJSONResponseBodyParser
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDJSONResponseBodyParser : NSObject <CKDResponseBodyParser>
{
    id _objectParsedBlock;
    NSError * _parserError;
    NSObject<OS_dispatch_queue> * _parseQueue;
    NSMutableData * _parserData;
}

@property (copy, nonatomic) id objectParsedBlock;
@property (retain, nonatomic) NSError * parserError;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * parseQueue;
@property (retain, nonatomic) NSMutableData * parserData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (CKDJSONResponseBodyParser *)init;
- (void).cxx_destruct;
- (void)setObjectParsedBlock:(id /* block */)arg0;
- (void)processData:(NSData *)arg0;
- (void)finishWithCompletion:(id /* block */)arg0;
- (id /* block */)objectParsedBlock;
- (NSError *)parserError;
- (void)setParserError:(NSError *)arg0;
- (NSMutableData *)parserData;
- (void)setParserData:(NSMutableData *)arg0;
- (NSObject<OS_dispatch_queue> *)parseQueue;
- (void)setParseQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
