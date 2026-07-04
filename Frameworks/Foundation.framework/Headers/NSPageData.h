/* Runtime dump - NSPageData
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPageData : NSData
{
    NSData * data;
    NSDate * _originalFileModDate;
    NSString * _originalFilePath;
}

+ (int)_umask;
+ (void)initialize;

- (NSPageData *)initWithContentsOfMappedFile:(NSString *)arg0;
- (unsigned int)writeFile:(NSString *)arg0;
- (void)_setOriginalFileInfoFromFileAttributes:(NSDictionary *)arg0;
- (NSPageData *)initWithContentsOfMappedFile:(NSString *)arg0 withFileAttributes:(NSDictionary *)arg1;
- (NSString *)_mappedFile;
- (unsigned int)writePath:(NSString *)arg0 docInfo:(NSDocInfo *)arg1 errorHandler:(SSErrorHandler *)arg2 remapContents:(char)arg3 hardLinkPath:(NSString *)arg4;
- (NSPageData *)initFromSerializerStream:(NSObject *)arg0 length:(unsigned int)arg1;
- (id)deserializer;
- (unsigned int)writeFd:(int)arg0;
- (void)dealloc;
- (NSPageData *)init;
- (unsigned int)length;
- (void *)bytes;
- (NSData *)data;
- (NSPageData *)initWithContentsOfFile:(NSString *)arg0;
- (NSPageData *)initWithData:(NSData *)arg0;
- (NSPageData *)initWithBytes:(void *)arg0 length:(void)arg1;
- (NSPageData *)initWithBytesNoCopy:(void *)arg0 length:(unsigned int)arg1;
- (NSPageData *)initWithDataNoCopy:(id)arg0;

@end
