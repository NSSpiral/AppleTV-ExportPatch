/* Runtime dump - CKDPlistResponseBodyParser
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPlistResponseBodyParser : NSObject <CKDResponseBodyParser>
{
    NSError * _parserError;
    id _objectParsedBlock;
    NSMutableData * _parserData;
}

@property (copy, nonatomic) id objectParsedBlock;
@property (retain, nonatomic) NSMutableData * parserData;
@property (retain, nonatomic) NSError * parserError;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void).cxx_destruct;
- (void)setObjectParsedBlock:(id /* block */)arg0;
- (void)processData:(NSData *)arg0;
- (void)finishWithCompletion:(id /* block */)arg0;
- (id /* block */)objectParsedBlock;
- (NSError *)parserError;
- (void)setParserError:(NSError *)arg0;
- (NSMutableData *)parserData;
- (void)setParserData:(NSMutableData *)arg0;

@end
