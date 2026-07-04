/* Runtime dump - PTPStorageInfoDataset
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPStorageInfoDataset : NSObject
{
    unsigned short _storageType;
    unsigned short _filesystemType;
    unsigned short _accessCapability;
    unsigned long long _maxCapacity;
    unsigned long long _freeSpaceInBytes;
    unsigned long _freeSpaceInImages;
    NSString * _storageDescription;
    NSString * _volumeLabel;
    NSMutableData * _content;
    char _dirty;
    char _readOnlyObject;
}

- (void)dealloc;
- (PTPStorageInfoDataset *)init;
- (NSString *)description;
- (PTPStorageInfoDataset *)initWithData:(NSData *)arg0;
- (NSMutableData *)content;
- (NSString *)volumeLabel;
- (void)setVolumeLabel:(NSString *)arg0;
- (void)setMaxCapacity:(unsigned long long)arg0;
- (unsigned long long)maxCapacity;
- (PTPStorageInfoDataset *)initWithMutableData:(NSMutableData *)arg0;
- (unsigned short)accessCapability;
- (void)updateContent;
- (unsigned short)storageType;
- (void)setStorageType:(unsigned short)arg0;
- (unsigned short)filesystemType;
- (void)setFilesystemType:(unsigned short)arg0;
- (void)setAccessCapability:(unsigned short)arg0;
- (unsigned long long)freeSpaceInBytes;
- (void)setFreeSpaceInBytes:(unsigned long long)arg0;
- (unsigned long)freeSpaceInImages;
- (void)setFreeSpaceInImages:(unsigned long)arg0;
- (NSString *)storageDescription;
- (void)setStorageDescription:(NSString *)arg0;
- (void)setContent:(NSMutableData *)arg0;

@end
