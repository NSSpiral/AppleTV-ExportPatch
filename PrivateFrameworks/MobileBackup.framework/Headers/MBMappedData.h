/* Runtime dump - MBMappedData
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBMappedData : NSData
{
    char _personallyMappedFile;
    char _removeFileOnClose;
    void * _mappedFile;
    NSNumber * _fileSize;
    NSString * _path;
    NSData * _mappedData;
}

@property (nonatomic) char removeFileOnClose;

- (struct _NSRange)rangeOfData:(NSData *)arg0 options:(unsigned int)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg0;
- (NSString *)base64Encoding;
- (void)dealloc;
- (unsigned int)length;
- (char)writeToFile:(NSString *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (char)writeToFile:(NSString *)arg0 atomically:(char)arg1;
- (char)writeToURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (char)writeToURL:(NSURL *)arg0 atomically:(char)arg1;
- (void *)bytes;
- (void)getBytes:(void *)arg0 length:(unsigned int)arg1;
- (MBMappedData *)initWithContentsOfFile:(NSString *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (void)close;
- (void)getBytes:(void *)arg0 range:(struct _NSRange)arg1;
- (NSDictionary *)base64EncodedStringWithOptions:(unsigned int)arg0;
- (char)isEqualToData:(NSData *)arg0;
- (NSObject *)subdataWithRange:(struct _NSRange)arg0;
- (NSDictionary *)base64EncodedDataWithOptions:(unsigned int)arg0;
- (void)enumerateByteRangesUsingBlock:(id /* block */)arg0;
- (char)mapFile:(NSString *)arg0;
- (char)removeFileOnClose;
- (void)setRemoveFileOnClose:(char)arg0;

@end
