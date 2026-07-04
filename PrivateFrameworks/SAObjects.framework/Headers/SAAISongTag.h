/* Runtime dump - SAAISongTag
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAISongTag : SADomainObject

@property (copy, nonatomic) NSString * adamId;
@property (copy, nonatomic) NSString * album;
@property (copy, nonatomic) NSString * albumAdamId;
@property (copy, nonatomic) NSString * artist;
@property (copy, nonatomic) NSString * artistAdamId;
@property (copy, nonatomic) NSString * contentRating;
@property (copy, nonatomic) NSURL * iTunesUri;
@property (retain, nonatomic) SAUIImageResource * previewImage;
@property (copy, nonatomic) NSURL * radioStationUri;
@property (copy, nonatomic) NSString * title;

+ (SAAISongTag *)songTag;
+ (NSDictionary *)songTagWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void)setArtist:(NSString *)arg0;
- (NSString *)artist;
- (NSString *)contentRating;
- (void)setContentRating:(NSString *)arg0;
- (void)setAlbum:(NSString *)arg0;
- (NSString *)album;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSString *)adamId;
- (void)setAdamId:(NSString *)arg0;
- (NSString *)albumAdamId;
- (void)setAlbumAdamId:(NSString *)arg0;
- (NSString *)artistAdamId;
- (void)setArtistAdamId:(NSString *)arg0;
- (NSURL *)iTunesUri;
- (void)setITunesUri:(NSURL *)arg0;
- (SAUIImageResource *)previewImage;
- (void)setPreviewImage:(SAUIImageResource *)arg0;
- (NSURL *)radioStationUri;
- (void)setRadioStationUri:(NSURL *)arg0;

@end
