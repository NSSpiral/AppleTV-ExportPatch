/* Runtime dump - ATVScreenSaverTheme
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVScreenSaverTheme : NSObject
{
    char _hasExtraSetupInfo;
    char _usableForPhotos;
    char _usableForAlbumArtwork;
    char _privateTheme;
    NSString * _screensaverIdentifier;
    NSString * _slideShowKey;
    NSString * _localizableKey;
}

@property (copy, nonatomic) NSString * screensaverIdentifier;
@property (copy, nonatomic) NSString * slideShowKey;
@property (copy, nonatomic) NSString * localizableKey;
@property (nonatomic) char hasExtraSetupInfo;
@property (nonatomic) char usableForPhotos;
@property (nonatomic) char usableForAlbumArtwork;
@property (nonatomic) char privateTheme;

- (NSString *)screensaverIdentifier;
- (NSString *)slideShowKey;
- (NSString *)localizableKey;
- (void)setScreensaverIdentifier:(NSString *)arg0;
- (void)setSlideShowKey:(NSString *)arg0;
- (void)setLocalizableKey:(NSString *)arg0;
- (char)hasExtraSetupInfo;
- (void)setHasExtraSetupInfo:(char)arg0;
- (char)usableForPhotos;
- (void)setUsableForPhotos:(char)arg0;
- (char)usableForAlbumArtwork;
- (void)setUsableForAlbumArtwork:(char)arg0;
- (void)setIsPrivate:(char)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (char)isPrivate;

@end
