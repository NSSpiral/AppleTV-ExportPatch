/* Runtime dump - RKLexicalEntity
 * Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKLexicalEntity : NSObject
{
    NSString * _string;
    NSString * _tokenType;
    NSString * _partOfSpeech;
    NSString * _lemma;
    NSString * _language;
    struct _NSRange _tokenRange;
}

@property (retain) NSString * string;
@property (retain) NSString * tokenType;
@property (retain) NSString * partOfSpeech;
@property (retain) NSString * lemma;
@property (retain) NSString * language;
@property struct _NSRange tokenRange;
@property (readonly) NSString * word;

- (NSString *)description;
- (NSString *)string;
- (void)setString:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)language;
- (void)setLanguage:(NSString *)arg0;
- (NSString *)lemma;
- (void)setLemma:(NSString *)arg0;
- (struct _NSRange)tokenRange;
- (void)setTokenRange:(struct _NSRange)arg0;
- (NSString *)partOfSpeech;
- (void)setPartOfSpeech:(NSString *)arg0;
- (NSString *)word;
- (NSString *)tokenType;
- (void)setTokenType:(NSString *)arg0;

@end
