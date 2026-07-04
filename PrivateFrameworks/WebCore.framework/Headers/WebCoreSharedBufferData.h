/* Runtime dump - WebCoreSharedBufferData
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreSharedBufferData : NSData
{
    struct RefPtr<WebCore::SharedBuffer::DataBuffer> sharedBufferDataBuffer;
    struct RefPtr<WebCore::SharedBuffer> sharedBuffer;
}

+ (void)initialize;

- (void)dealloc;
- (unsigned int)length;
- (void *)bytes;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)finalize;
- (WebCoreSharedBufferData *)initWithSharedBufferDataBuffer:(struct DataBuffer *)arg0;
- (WebCoreSharedBufferData *)initWithMemoryMappedSharedBuffer:(struct SharedBuffer *)arg0;

@end
