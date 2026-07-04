/* Runtime dump - ExFATCameraFile
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ExFATCameraFile : ICCameraFile
{
    void * _exFATCameraFileProperties;
}

@property (readonly) id object;
@property (readonly) struct timespec fsCreationTime;
@property (readonly) struct timespec fsModificationTime;
@property (readonly) long long fsSize;
@property unsigned int type;
@property (copy) NSString * exifCreationDateTime;
@property (copy) NSString * exifModificationDateTime;
@property int thmSize;
@property int thmOffset;
@property int thmWidth;
@property int thmHeight;
@property int imgWidth;
@property int imgHeight;
@property int bitsPerPixel;
@property char updatedBasicMetadata;

- (void)dealloc;
- (void)setType:(unsigned int)arg0;
- (unsigned int)type;
- (NSObject *)object;
- (NSMutableDictionary *)metadataDict;
- (NSData *)thumbData;
- (long)writeDataToFile:(int)arg0 fromOffset:(long long)arg1 ofLength:(long long *)arg2;
- (NSString *)exifCreationDateTime;
- (NSString *)exifModificationDateTime;
- (char)updateBasicMetadataIfNotRAW;
- (struct timespec)fsCreationTime;
- (long long)fsSize;
- (struct timespec)fsModificationTime;
- (int)thmSize;
- (int)thmOffset;
- (char)updatedBasicMetadata;
- (void)setExifCreationDateTime:(NSString *)arg0;
- (void)setExifModificationDateTime:(NSString *)arg0;
- (void)setImgWidth:(int)arg0;
- (void)setImgHeight:(int)arg0;
- (void)setThmSize:(int)arg0;
- (void)setThmOffset:(int)arg0;
- (void)setThmWidth:(int)arg0;
- (void)setThmHeight:(int)arg0;
- (void)setUpdatedBasicMetadata:(char)arg0;
- (int)thmWidth;
- (int)thmHeight;
- (int)imgWidth;
- (int)imgHeight;
- (int)bitsPerPixel;
- (void)setBitsPerPixel:(int)arg0;
- (void)updateBasicMetadata;
- (ExFATCameraFile *)initWithName:(NSString *)arg0 parentFolder:(ICCameraFolder *)arg1 device:(NSObject *)arg2 object:(NSObject *)arg3 fsCreationTime:(struct timespec)arg4 fsModificationTime:(struct timespec)arg5 fsSize:(long long)arg6;
- (NSObject *)fsStream;
- (long long)dpOffset;
- (void)setdpOffset:(long long)arg0;
- (struct CGDataProviderSequentialCallbacks)dpCallbacks;
- (void)releaseProvider;
- (unsigned long)getBytes:(void *)arg0 ofSize:(unsigned long)arg1;
- (long long)skipBytes:(long long)arg0;
- (void)rewind;
- (void)finalize;

@end
