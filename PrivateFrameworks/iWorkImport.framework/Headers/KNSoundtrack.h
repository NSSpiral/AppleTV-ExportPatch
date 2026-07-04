/* Runtime dump - KNSoundtrack
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSoundtrack : TSPObject <NSCopying>
{
    float mVolume;
    int mMode;
    NSArray * mMedia;
}

@property (nonatomic) float volume;
@property (nonatomic) int mode;
@property (copy, nonatomic) NSArray * media;

+ (char)needsObjectUUID;

- (KNSoundtrack *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (KNSoundtrack *)initWithSoundtrackMedia:(KNSoundtrack *)arg0 context:(NSObject *)arg1;
- (void)dealloc;
- (KNSoundtrack *)copyWithZone:(struct _NSZone *)arg0;
- (void)setMode:(int)arg0;
- (int)mode;
- (KNSoundtrack *)initWithContext:(TSPObjectContext *)arg0;
- (float)volume;
- (void)setVolume:(float)arg0;
- (NSArray *)media;
- (void)setMedia:(NSArray *)arg0;

@end
