/* Runtime dump - OISFUZipEntry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUZipEntry : OISFUDataRepresentation
{
    OISFUDataRepresentation<SFUZipArchiveDataRepresentation> * mArchiveDataRepresentation;
    int mCompressionMethod;
    unsigned long long mCompressedSize;
    unsigned long long mUncompressedSize;
    unsigned long long mOffset;
    unsigned int mCrc;
    unsigned long long mDataOffset;
    char mHasDataOffset;
    unsigned long long mEncodedLength;
    char mHasEncodedLength;
    OISFUCryptoKey * mCryptoKey;
}

- (unsigned long long)dataOffset;
- (void)dealloc;
- (NSData *)data;
- (char)isEncrypted;
- (NSInputStream *)inputStream;
- (void)setCompressionFlags:(unsigned short)arg0;
- (char)isReadable;
- (unsigned long long)calculateEncodedLength;
- (char)isBackedByFile;
- (OISFUZipEntry *)initFromCentralFileHeader:(char *)arg0 dataRepresentation:(NSData *)arg1;
- (OISFUZipEntry *)initWithDataRepresentation:(NSData *)arg0 compressionMethod:(int)arg1 compressedSize:(unsigned long long)arg2 uncompressedSize:(unsigned long long)arg3 offset:(unsigned long long)arg4 crc:(unsigned int)arg5;
- (long long)encodedLength;
- (void)copyToFile:(NSString *)arg0;
- (char)isCompressed;
- (NSString *)backingFilePath;
- (unsigned long long)backingFileDataOffset;
- (unsigned int)crc;
- (void)readZip64ExtraField:(char *)arg0 size:(unsigned long)arg1;
- (void)setCryptoKey:(SFUCryptoKey *)arg0;
- (void)setDataLength:(long long)arg0;
- (long long)dataLength;

@end
