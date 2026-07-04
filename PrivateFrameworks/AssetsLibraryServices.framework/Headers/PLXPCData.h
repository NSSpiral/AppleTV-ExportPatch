/* Runtime dump - PLXPCData
 * Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLXPCData : NSData
{
    NSObject<OS_xpc_object> * _data;
}

- (void)dealloc;
- (NSString *)debugDescription;
- (unsigned int)length;
- (void *)bytes;
- (void)getBytes:(void *)arg0 length:(unsigned int)arg1;
- (void)getBytes:(void *)arg0 range:(struct _NSRange)arg1;
- (PLXPCData *)initWithXPCData:(NSData *)arg0;

@end
