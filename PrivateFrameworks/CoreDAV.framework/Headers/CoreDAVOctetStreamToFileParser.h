/* Runtime dump - CoreDAVOctetStreamToFileParser
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser
{
    NSFileHandle * _fileHandle;
}

@property (retain, nonatomic) NSFileHandle * fileHandle;

- (void)dealloc;
- (char)processData:(NSData *)arg0 forTask:(NSObject *)arg1;
- (CoreDAVOctetStreamToFileParser *)initWithFileHandle:(NSFileHandle *)arg0;
- (NSFileHandle *)fileHandle;
- (void)setFileHandle:(NSFileHandle *)arg0;

@end
