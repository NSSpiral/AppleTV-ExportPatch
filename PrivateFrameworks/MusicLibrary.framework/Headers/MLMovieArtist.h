/* Runtime dump - MLMovieArtist
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLMovieArtist : NSObject <NSCopying>
{
    NSMutableDictionary * _dictionary;
}

@property (copy, nonatomic) NSString * artistName;
@property (copy, nonatomic) NSNumber * ITunesStoreIdentifier;

- (MLMovieArtist *)init;
- (MLMovieArtist *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)_setValueCopy:(id)arg0 forKey:(NSString *)arg1;
- (void)_setValue:(NSValue *)arg0 forKey:(NSString *)arg1;
- (MLMovieArtist *)initWithMovieArtistDictionary:(NSDictionary *)arg0;
- (NSString *)artistName;
- (NSNumber *)ITunesStoreIdentifier;
- (void)setArtistName:(NSString *)arg0;
- (void)setITunesStoreIdentifier:(NSString *)arg0;
- (NSDictionary *)copyMovieArtistDictionary;

@end
