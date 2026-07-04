/* Runtime dump - CoreDAVOctetStreamParser
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser>
{
    NSMutableData * _octetStreamData;
    NSError * _parserError;
}

@property (retain, nonatomic) NSMutableData * octetStreamData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) NSError * parserError;

+ (char)canHandleContentType:(NSObject *)arg0;

- (void)dealloc;
- (CoreDAVOctetStreamParser *)init;
- (NSString *)description;
- (NSError *)parserError;
- (char)processData:(NSData *)arg0 forTask:(NSObject *)arg1;
- (NSMutableData *)octetStreamData;
- (void)setOctetStreamData:(NSMutableData *)arg0;

@end
