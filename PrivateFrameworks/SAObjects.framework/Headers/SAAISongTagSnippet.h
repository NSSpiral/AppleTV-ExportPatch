/* Runtime dump - SAAISongTagSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAISongTagSnippet : SAUISnippet

@property (retain, nonatomic) SAUIButton * addButton;
@property (retain, nonatomic) SAUIAppPunchOut * attributionPunchOut;
@property (retain, nonatomic) SAMPPlaybackButton * playbackButton;
@property (retain, nonatomic) SAUIAppPunchOut * purchaseSongPunchOut;
@property (retain, nonatomic) SAUIAppPunchOut * songDetailsPunchOut;
@property (retain, nonatomic) SAAISongTag * songTag;

+ (SAAISongTagSnippet *)songTagSnippet;
+ (NSDictionary *)songTagSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SAMPPlaybackButton *)playbackButton;
- (SAUIButton *)addButton;
- (NSString *)encodedClassName;
- (void)setAddButton:(SAUIButton *)arg0;
- (SAUIAppPunchOut *)attributionPunchOut;
- (void)setAttributionPunchOut:(SAUIAppPunchOut *)arg0;
- (void)setPlaybackButton:(SAMPPlaybackButton *)arg0;
- (SAUIAppPunchOut *)purchaseSongPunchOut;
- (void)setPurchaseSongPunchOut:(SAUIAppPunchOut *)arg0;
- (SAUIAppPunchOut *)songDetailsPunchOut;
- (void)setSongDetailsPunchOut:(SAUIAppPunchOut *)arg0;
- (SAAISongTag *)songTag;
- (void)setSongTag:(SAAISongTag *)arg0;

@end
