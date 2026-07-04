/* Runtime dump - MPAlternateTrack
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAlternateTrack : NSObject
{
    NSString * _displayName;
    NSString * _canonicalLanguageIdentifier;
    AVMediaSelectionOption * _option;
    char _isMainProgram;
    char _isDVS;
}

@property (retain, nonatomic) NSString * displayName;
@property (readonly, nonatomic) NSString * canonicalLanguageIdentifier;
@property (readonly, nonatomic) AVMediaSelectionOption * option;
@property (readonly, nonatomic) char isMainProgram;
@property (readonly, nonatomic) char isDVS;

+ (MPAlternateTrack *)threeCharCodesForEncodedISO639_2_T:(id)arg0;

- (void)_setDisplayNameFromOption:(id)arg0;
- (char)isMainProgram;
- (char)isDVS;
- (MPAlternateTrack *)initWithOption:(AVMediaSelectionOption *)arg0;
- (AVMediaSelectionOption *)option;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (void).cxx_destruct;
- (NSString *)displayName;
- (void)setDisplayName:(NSString *)arg0;
- (NSString *)canonicalLanguageIdentifier;

@end
