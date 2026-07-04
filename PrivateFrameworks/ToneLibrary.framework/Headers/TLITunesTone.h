/* Runtime dump - TLITunesTone
 * Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLITunesTone : NSObject
{
    char _purchased;
    char _ringtone;
    char _protected;
    char _private;
    NSString * _identifier;
    NSString * _name;
    NSString * _filePath;
    NSNumber * _pid;
    NSString * _artworkFile;
    unsigned int _duration;
    NSDictionary * _playbackProperties;
}

@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * filePath;
@property (copy, nonatomic) NSNumber * pid;
@property (nonatomic) char purchased;
@property (nonatomic) char ringtone;
@property (copy, nonatomic) NSString * artworkFile;
@property (nonatomic) unsigned int duration;
@property (nonatomic) char protected;
@property (nonatomic) char private;
@property (copy, nonatomic) NSDictionary * playbackProperties;

- (void)_setName:(NSString *)arg0;
- (void)_setIdentifier:(NSString *)arg0;
- (void)dealloc;
- (unsigned int)duration;
- (NSString *)name;
- (NSString *)identifier;
- (void)_setDuration:(unsigned int)arg0;
- (NSString *)filePath;
- (NSNumber *)pid;
- (char)isProtected;
- (TLITunesTone *)initWithPropertyListRepresentation:(NSDictionary *)arg0 filePath:(NSString *)arg1;
- (NSDictionary *)playbackProperties;
- (void)_setFilePath:(NSString *)arg0;
- (void)_setPurchased:(char)arg0;
- (void)_setPid:(id)arg0;
- (void)_setArtworkFile:(NSString *)arg0;
- (void)_setProtected:(char)arg0;
- (void)_setPrivate:(char)arg0;
- (void)_setRingtone:(char)arg0;
- (void)_setPlaybackProperties:(NSDictionary *)arg0;
- (char)isPurchased;
- (char)isRingtone;
- (NSString *)artworkFile;
- (char)isPrivate;

@end
