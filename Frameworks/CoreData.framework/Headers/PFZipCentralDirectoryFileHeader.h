/* Runtime dump - PFZipCentralDirectoryFileHeader
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFZipCentralDirectoryFileHeader : NSObject
{
    unsigned short _versionMadeBy;
    unsigned short _versionNeededToExtract;
    unsigned short _generalPurposeBit;
    unsigned short _compressionMethod;
    unsigned short _lastModTime;
    unsigned short _lastModDate;
    unsigned int _crc32;
    unsigned int _compressedSize;
    unsigned int _uncompressedSize;
    unsigned short _filenameLength;
    unsigned short _extraFieldLength;
    unsigned short _fileCommentLength;
    unsigned short _fileStartDiskNumber;
    unsigned short _internalFileAttrs;
    unsigned int _externalFileAttrs;
    unsigned int _localFileHeaderRelativeOffset;
    NSString * _filename;
    NSData * _extraFieldData;
    NSString * _fileComment;
}

@property (nonatomic) unsigned short versionMadeBy;
@property (nonatomic) unsigned short versionNeededToExtract;
@property (nonatomic) unsigned short generalPurposeBit;
@property (nonatomic) unsigned short compressionMethod;
@property (nonatomic) unsigned short lastModTime;
@property (nonatomic) unsigned short lastModDate;
@property (nonatomic) unsigned int crc32;
@property (nonatomic) unsigned int compressedSize;
@property (nonatomic) unsigned int uncompressedSize;
@property (readonly, nonatomic) unsigned short filenameLength;
@property (readonly, nonatomic) unsigned short extraFieldLength;
@property (readonly, nonatomic) unsigned short fileCommentLength;
@property (nonatomic) unsigned short fileStartDiskNumber;
@property (nonatomic) unsigned short internalFileAttrs;
@property (nonatomic) unsigned int externalFileAttrs;
@property (nonatomic) unsigned int localFileHeaderRelativeOffset;
@property (retain, nonatomic) NSString * filename;
@property (retain, nonatomic) NSData * extraFieldData;
@property (retain, nonatomic) NSString * fileComment;

- (unsigned int)loadFromBytes:(char *)arg0 offset:(unsigned int)arg1;
- (unsigned int)crc32;
- (unsigned int)uncompressedSize;
- (unsigned int)localFileHeaderRelativeOffset;
- (unsigned short)compressionMethod;
- (void)setExtraFieldData:(NSData *)arg0;
- (void)setFileComment:(NSString *)arg0;
- (unsigned int)loadFromData:(NSData *)arg0 offset:(unsigned int)arg1;
- (void)appendToData:(NSData *)arg0;
- (unsigned short)versionMadeBy;
- (void)setVersionMadeBy:(unsigned short)arg0;
- (unsigned short)versionNeededToExtract;
- (void)setVersionNeededToExtract:(unsigned short)arg0;
- (unsigned short)generalPurposeBit;
- (void)setGeneralPurposeBit:(unsigned short)arg0;
- (void)setCompressionMethod:(unsigned short)arg0;
- (unsigned short)lastModTime;
- (void)setLastModTime:(unsigned short)arg0;
- (unsigned short)lastModDate;
- (void)setLastModDate:(unsigned short)arg0;
- (void)setCrc32:(unsigned int)arg0;
- (void)setUncompressedSize:(unsigned int)arg0;
- (unsigned short)filenameLength;
- (unsigned short)extraFieldLength;
- (unsigned short)fileCommentLength;
- (unsigned short)fileStartDiskNumber;
- (void)setFileStartDiskNumber:(unsigned short)arg0;
- (unsigned short)internalFileAttrs;
- (void)setInternalFileAttrs:(unsigned short)arg0;
- (unsigned int)externalFileAttrs;
- (void)setExternalFileAttrs:(unsigned int)arg0;
- (void)setLocalFileHeaderRelativeOffset:(unsigned int)arg0;
- (NSData *)extraFieldData;
- (NSString *)fileComment;
- (void)dealloc;
- (PFZipCentralDirectoryFileHeader *)init;
- (NSString *)description;
- (NSString *)filename;
- (void)setFilename:(NSString *)arg0;
- (void)setCompressedSize:(unsigned int)arg0;
- (unsigned int)compressedSize;

@end
