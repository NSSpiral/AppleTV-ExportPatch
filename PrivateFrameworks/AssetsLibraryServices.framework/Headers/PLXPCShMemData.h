/* Runtime dump - PLXPCShMemData
 * Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLXPCShMemData : NSData
{
    void * _buffer;
    unsigned long _dataLength;
    unsigned long _bufferLength;
}

- (void)dealloc;
- (NSString *)description;
- (unsigned int)length;
- (void *)bytes;
- (PLXPCShMemData *)initWithXPCShmem:(id)arg0;
- (PLXPCShMemData *)initWithXPCShmem:(id)arg0 length:(long long)arg1;

@end
