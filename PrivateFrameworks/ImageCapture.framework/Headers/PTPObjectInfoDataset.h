/* Runtime dump - PTPObjectInfoDataset
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPObjectInfoDataset : NSObject
{
    unsigned long _storageID;
    unsigned short _objectFormat;
    unsigned short _protectionStatus;
    unsigned long long _objectCompressedSize;
    unsigned short _thumbFormat;
    unsigned long _thumbCompressedSize;
    unsigned long _thumbOffset;
    unsigned long _thumbPixWidth;
    unsigned long _thumbPixHeight;
    unsigned long _imagePixWidth;
    unsigned long _imagePixHeight;
    unsigned long _imageBitDepth;
    unsigned long _parentObject;
    unsigned short _associationType;
    unsigned long _associationDesc;
    unsigned long _sequenceNumber;
    NSString * _filename;
    NSString * _captureDate;
    NSString * _modificationDate;
    NSString * _keywords;
    unsigned long _thmFileSize;
    unsigned long _objectHandle;
}

- (void)dealloc;
- (PTPObjectInfoDataset *)init;
- (NSString *)description;
- (PTPObjectInfoDataset *)initWithData:(NSData *)arg0;
- (NSString *)modificationDate;
- (struct __CFAttributedString *)content;
- (unsigned long)parentObject;
- (void)setParentObject:(unsigned long)arg0;
- (NSString *)filename;
- (void)setFilename:(NSString *)arg0;
- (void)setSequenceNumber:(unsigned long)arg0;
- (unsigned long)sequenceNumber;
- (unsigned long)storageID;
- (unsigned short)protectionStatus;
- (unsigned short)objectFormat;
- (unsigned short)associationType;
- (unsigned long)objectHandle;
- (unsigned long long)objectCompressedSize64;
- (unsigned long)thumbCompressedSize;
- (unsigned long)imagePixWidth;
- (unsigned long)imagePixHeight;
- (unsigned long)imageBitDepth;
- (void)setObjectHandle:(unsigned long)arg0;
- (void)setObjectCompressedSize:(unsigned long long)arg0;
- (PTPObjectInfoDataset *)initWithData64:(NSData *)arg0;
- (unsigned long)objectCompressedSize;
- (NSObject *)content64;
- (void)setStorageID:(unsigned long)arg0;
- (void)setObjectFormat:(unsigned short)arg0;
- (void)setProtectionStatus:(unsigned short)arg0;
- (unsigned short)thumbFormat;
- (void)setThumbFormat:(unsigned short)arg0;
- (void)setThumbCompressedSize:(unsigned long)arg0;
- (unsigned long)thmFileSize;
- (void)setThmFileSize:(unsigned long)arg0;
- (unsigned long)thumbOffset;
- (void)setThumbOffset:(unsigned long)arg0;
- (unsigned long)thumbPixWidth;
- (void)setThumbPixWidth:(unsigned long)arg0;
- (unsigned long)thumbPixHeight;
- (void)setThumbPixHeight:(unsigned long)arg0;
- (void)setImagePixWidth:(unsigned long)arg0;
- (void)setImagePixHeight:(unsigned long)arg0;
- (void)setImageBitDepth:(unsigned long)arg0;
- (void)setAssociationType:(unsigned short)arg0;
- (unsigned long)associationDesc;
- (void)setAssociationDesc:(unsigned long)arg0;
- (void)setModificationDate:(NSString *)arg0;
- (void)setCaptureDate:(NSString *)arg0;
- (NSString *)captureDate;
- (void)setKeywords:(NSString *)arg0;
- (NSString *)keywords;

@end
