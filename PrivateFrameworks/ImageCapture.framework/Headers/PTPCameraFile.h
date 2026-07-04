/* Runtime dump - PTPCameraFile
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPCameraFile : ICCameraFile
{
    void * _ptpCameraFileProperties;
    NSString * _path;
}

@property (readonly) unsigned int type;
@property (readonly) unsigned long storageID;
@property (readonly) unsigned long objHandle;
@property (copy) id info;
@property (retain) NSString * path;

- (void)dealloc;
- (unsigned int)type;
- (NSString *)path;
- (GEOPhotoInfo *)info;
- (void)setPath:(NSString *)arg0;
- (void)setInfo:(NSDictionary *)arg0;
- (NSMutableDictionary *)metadataDict;
- (NSData *)thumbData;
- (long)writeDataToFile:(int)arg0 fromOffset:(long long)arg1 ofLength:(long long *)arg2;
- (unsigned long)objHandle;
- (unsigned long)storageID;
- (PTPCameraFile *)initWithName:(NSString *)arg0 parentFolder:(ICCameraFolder *)arg1 device:(NSObject *)arg2 type:(unsigned int)arg3 storageID:(unsigned long)arg4 objectHandle:(unsigned long)arg5;
- (void)finalize;

@end
