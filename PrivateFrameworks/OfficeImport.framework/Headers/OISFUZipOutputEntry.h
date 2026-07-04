/* Runtime dump - OISFUZipOutputEntry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUZipOutputEntry : NSObject
{
    NSString * name;
    unsigned long utf8NameLength;
    char isCompressed;
    char isEncrypted;
    unsigned int time;
    unsigned long long compressedSize;
    unsigned long long uncompressedSize;
    unsigned long long offset;
    unsigned long long compressedDataOffset;
    unsigned int crc;
    char isWrittenDirectlyToFile;
    char is64Bit;
}

- (void)dealloc;
- (NSString *)description;
- (int)compareByOffset:(NSSet *)arg0;

@end
