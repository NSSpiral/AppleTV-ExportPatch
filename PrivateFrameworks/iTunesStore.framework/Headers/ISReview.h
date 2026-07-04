/* Runtime dump - ISReview
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISReview : NSObject <NSCoding, NSCopying>
{
    int _assetType;
    NSString * _body;
    unsigned int _bodyMaxLength;
    NSURL * _infoURL;
    unsigned long long _itemIdentifier;
    NSString * _nickname;
    char _nicknameIsConfirmed;
    unsigned int _nicknameMaxLength;
    float _rating;
    NSURL * _submitURL;
    NSString * _title;
    unsigned int _titleMaxLength;
}

@property (readonly, nonatomic) char hasSavedDraft;
@property (retain, nonatomic) NSString * body;
@property (retain, nonatomic) NSString * nickname;
@property (nonatomic) float rating;
@property (retain, nonatomic) NSString * title;
@property (nonatomic) int assetType;
@property (nonatomic) unsigned long long itemIdentifier;
@property (retain, nonatomic) NSURL * infoURL;
@property (retain, nonatomic) NSURL * submitURL;
@property (nonatomic) unsigned int bodyMaxLength;
@property (nonatomic) char nicknameIsConfirmed;
@property (nonatomic) unsigned int nicknameMaxLength;
@property (nonatomic) unsigned int titleMaxLength;

- (NSString *)nickname;
- (void)setNickname:(NSString *)arg0;
- (void)setItemIdentifier:(unsigned long long)arg0;
- (void)dealloc;
- (ISReview *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (ISReview *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)body;
- (void)setBody:(NSString *)arg0;
- (float)rating;
- (void)setRating:(float)arg0;
- (unsigned long long)itemIdentifier;
- (int)assetType;
- (NSString *)_draftsDirectoryPath;
- (NSString *)_draftFileName;
- (void)setNicknameIsConfirmed:(char)arg0;
- (unsigned int)bodyMaxLength;
- (void)setBodyMaxLength:(unsigned int)arg0;
- (NSURL *)infoURL;
- (void)setInfoURL:(NSURL *)arg0;
- (char)nicknameIsConfirmed;
- (unsigned int)nicknameMaxLength;
- (void)setNicknameMaxLength:(unsigned int)arg0;
- (NSURL *)submitURL;
- (void)setSubmitURL:(NSURL *)arg0;
- (unsigned int)titleMaxLength;
- (void)setTitleMaxLength:(unsigned int)arg0;
- (void)mergeWithReview:(ISReview *)arg0 preferLocalValues:(char)arg1;
- (char)hasSavedDraft;
- (void)loadFromDictionary:(NSDictionary *)arg0;
- (char)removeDraft;
- (char)restoreFromDraft;
- (char)saveAsDraft;
- (void)setAssetType:(int)arg0;

@end
