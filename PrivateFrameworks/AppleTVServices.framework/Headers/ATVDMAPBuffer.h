/* Runtime dump - ATVDMAPBuffer
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDMAPBuffer : NSObject
{
    char * _bytes;
    int _capacity;
    int _bytesUsed;
    int _resizeCount;
}

@property (readonly, nonatomic) int bytesUsed;
@property (readonly, nonatomic) char * bytes;

+ (Buffer *)buffer;
+ (ATVDMAPBuffer *)bufferWithCapacity:(unsigned long)arg0;

- (void)dealloc;
- (ATVDMAPBuffer *)init;
- (ATVDMAPBuffer *)initWithCapacity:(unsigned long)arg0;
- (char *)bytes;
- (unsigned long)addHeader:(unsigned long)arg0;
- (void)addInt32:(unsigned long)arg0 dataToAdd:(unsigned long)arg1;
- (void)addInt64:(unsigned long)arg0 dataToAdd:(unsigned long long)arg1;
- (void)addInt8:(unsigned long)arg0 dataToAdd:(unsigned char)arg1;
- (void)updateHeaderAtOffset:(unsigned long)arg0;
- (void)addMLProperty:(NSObject *)arg0 dataToAdd:(id)arg1;
- (void)addUTF8Str:(unsigned long)arg0 dataToAdd:(char *)arg1;
- (NSData *)bufferData;
- (void)appendBuffer:(void *)arg0 length:(void)arg1;
- (unsigned long)dmapCodeForMLProperty:(NSObject *)arg0;
- (void)_addDMAPCode:(unsigned long)arg0 property:(NSString *)arg1 dataToAdd:(id)arg2;
- (unsigned long)dmapCodeForATVProperty:(NSObject *)arg0;
- (int)dmapDataTypeForDMAPCode:(unsigned long)arg0;
- (void)addInt16:(unsigned long)arg0 dataToAdd:(unsigned short)arg1;
- (void)addFloat32:(unsigned long)arg0 dataToAdd:(float)arg1;
- (void)addStr:(unsigned long)arg0 dataToAdd:(id)arg1;
- (void)addData:(unsigned long)arg0 dataToAdd:(id)arg1;
- (void)addRawInt32:(unsigned long)arg0;
- (void)addRawInt64:(unsigned long long)arg0;
- (void)addRawData:(NSData *)arg0;
- (void)addATVProperty:(NSObject *)arg0 dataToAdd:(id)arg1;
- (int)bytesUsed;

@end
