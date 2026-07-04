/* Runtime dump - TLSound
 * Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLSound : NSObject
{
    char _shouldDisposeOfSoundID;
    NSString * _filePath;
    unsigned long _soundID;
}

@property (copy, nonatomic) NSString * filePath;
@property (nonatomic) unsigned long soundID;
@property (nonatomic) char _shouldDisposeOfSoundID;

- (void)dealloc;
- (NSString *)filePath;
- (unsigned long)soundID;
- (TLSound *)initWithFilePath:(NSString *)arg0 soundID:(unsigned long)arg1;
- (void)_setFilePath:(NSString *)arg0;
- (void)_setSoundID:(unsigned long)arg0;
- (char)_shouldDisposeOfSoundID;
- (void)_setShouldDisposeOfSoundID:(char)arg0;

@end
