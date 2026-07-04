/* Runtime dump - TSUZipEntry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUZipEntry : NSObject
{
    char _compressed;
    unsigned short _nameLength;
    unsigned short _extraFieldsLength;
    NSString * _name;
    unsigned int _CRC;
    unsigned long _fileHeaderLength;
    unsigned long long _size;
    unsigned long long _compressedSize;
    unsigned long long _offset;
}

@property (copy, nonatomic) NSString * name;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned int CRC;
@property (nonatomic) char compressed;
@property (nonatomic) unsigned long long compressedSize;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned short nameLength;
@property (nonatomic) unsigned short extraFieldsLength;
@property (nonatomic) unsigned long fileHeaderLength;

- (void)setCRC:(unsigned int)arg0;
- (void)setNameLength:(unsigned short)arg0;
- (void)setExtraFieldsLength:(unsigned short)arg0;
- (unsigned long)fileHeaderLength;
- (void)setFileHeaderLength:(unsigned long)arg0;
- (unsigned short)nameLength;
- (unsigned short)extraFieldsLength;
- (unsigned int)CRC;
- (unsigned long long)size;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setSize:(unsigned long long)arg0;
- (void)setOffset:(unsigned long long)arg0;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (void)setCompressed:(char)arg0;
- (char)isCompressed;
- (void)setCompressedSize:(unsigned long long)arg0;
- (unsigned long long)compressedSize;

@end
