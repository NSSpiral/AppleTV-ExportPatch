/* Runtime dump - PLMappedImageData
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMappedImageData : NSMutableData
{
    PLImageTableSegment * _segment;
    void * _bytes;
    unsigned long _length;
    char _freeBytes;
    NSData * _pl_data;
}

@property (nonatomic) unsigned int imageWidth;
@property (nonatomic) unsigned int imageHeight;
@property (copy, nonatomic) NSString * photoUUID;

- (void)dealloc;
- (unsigned int)length;
- (void *)bytes;
- (void *)mutableBytes;
- (PLMappedImageData *)initWithImageTableSegment:(PLImageTable *)arg0 bytes:(void *)arg1 length:(unsigned long)arg2;
- (unsigned int)lengthIncludingFooter;
- (void)setPhotoUUID:(NSString *)arg0;
- (NSString *)photoUUID;
- (void)setImageWidth:(unsigned int)arg0;
- (void)setImageHeight:(unsigned int)arg0;
- (unsigned int)imageWidth;
- (unsigned int)imageHeight;
- (char)uuidIsEqual:(id)arg0;
- (PLMappedImageData *)initWithThumbnailPath:(NSString *)arg0;
- (PLMappedImageData *)initWithEntryLength:(unsigned int)arg0;
- (id)brokencopy;
- (struct PLImageTableEntryFooter_s *)_footer;
- (unsigned int)pl_advisoryLength;
- (char)pl_writeToPath:(NSString *)arg0;

@end
