/* Runtime dump - ESDMetafileBlipContext
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ESDMetafileBlipContext : ESDBlipContext
{
    unsigned long mCb;
    unsigned long defaultHeaderSize;
}

@property unsigned long defaultHeaderSize;

- (BOOL)loadDelayedNode:(OCDDelayedNode *)arg0;
- (ESDMetafileBlipContext *)initWithOffset:(unsigned int)arg0 byteCount:(unsigned int)arg1 uncompressed:(unsigned long)arg2 stream:(struct SsrwOOStream *)arg3 streamID:(unsigned int)arg4;
- (void)setDefaultHeaderSize:(unsigned long)arg0;
- (unsigned long)defaultHeaderSize;

@end
