/* Runtime dump - RKClassification
 * Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKClassification : NSObject
{
    NSString * _language;
    unsigned int _sentenceType;
    int _sensitive;
    unsigned int _gender;
    NSArray * _customResponses;
    NSString * _taggedText;
}

@property (retain) NSString * language;
@property unsigned int sentenceType;
@property int sensitive;
@property unsigned int gender;
@property (retain) NSArray * customResponses;
@property (retain) NSString * taggedText;

- (RKClassification *)init;
- (void).cxx_destruct;
- (NSString *)language;
- (void)setLanguage:(NSString *)arg0;
- (unsigned int)sentenceType;
- (void)setSentenceType:(unsigned int)arg0;
- (int)isSensitive;
- (void)setSensitive:(int)arg0;
- (NSArray *)customResponses;
- (void)setCustomResponses:(NSArray *)arg0;
- (NSString *)taggedText;
- (void)setTaggedText:(NSString *)arg0;
- (unsigned int)gender;
- (void)setGender:(unsigned int)arg0;

@end
