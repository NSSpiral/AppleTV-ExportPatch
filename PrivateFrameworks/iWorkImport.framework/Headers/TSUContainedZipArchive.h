/* Runtime dump - TSUContainedZipArchive
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUContainedZipArchive : TSUZipArchive
{
    TSUZipArchive * _zipArchive;
    TSUZipEntry * _entry;
}

+ (TSUContainedZipArchive *)zipArchiveFromEntry:(QLZipArchiveEntry *)arg0 zipArchive:(TSUZipArchive *)arg1 options:(unsigned int)arg2 error:(id *)arg3;

- (unsigned long long)archiveLength;
- (NSObject *)newArchiveReadChannel;
- (id)readChannelForEntry:(id)arg0 validateCRC:(char)arg1;
- (id)streamReadChannelForEntry:(id)arg0 validateCRC:(char)arg1;
- (TSUContainedZipArchive *)initWithEntry:(TSUZipEntry *)arg0 zipArchive:(TSUZipArchive *)arg1 options:(unsigned int)arg2;
- (char)isValid;
- (void).cxx_destruct;

@end
