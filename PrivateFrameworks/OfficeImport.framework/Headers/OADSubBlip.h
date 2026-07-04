/* Runtime dump - OADSubBlip
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADSubBlip : OCDDelayedMedia
{
    int mType;
    NSData * mData;
    struct CGSize mSizeInPoints;
    long mSizeInBytes;
    struct CGRect mFrame;
}

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (struct CGRect)frame;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setType:(int)arg0;
- (int)type;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (void).cxx_construct;
- (BOOL)isLoaded;
- (OADSubBlip *)initWithData:(NSData *)arg0 type:(int)arg1;
- (void)setSizeInBytes:(long)arg0;
- (long)sizeInBytes;
- (void)setSizeInPoints:(struct CGSize)arg0;
- (struct CGSize)sizeInPoints;

@end
