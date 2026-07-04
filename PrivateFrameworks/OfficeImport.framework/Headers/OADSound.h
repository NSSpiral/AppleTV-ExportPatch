/* Runtime dump - OADSound
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADSound : OCDDelayedMedia
{
    NSData * mSoundData;
    NSString * mName;
    long mSizeInBytes;
}

- (void)dealloc;
- (OADSound *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (BOOL)isLoaded;
- (void)setSizeInBytes:(long)arg0;
- (void)setSoundData:(NSData *)arg0;
- (long)sizeInBytes;
- (NSData *)soundData;

@end
