/* Runtime dump - RKSynonymizer
 * Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKSynonymizer : NSObject
{
    NSString * _synonymLanguage;
    NSString * _keyboardLanguage;
    NSString * _context;
    NSDictionary * _synonymDictionary;
    NSDictionary * _wordIDDictionary;
    void * _model;
}

+ (NSString *)synonymLanguageForLanguage:(NSString *)arg0 keyboardLanguage:(NSString *)arg1;
+ (NSString *)synonymDictionaryForLanguage:(NSString *)arg0;
+ (NSString *)wordIDDictionaryForLanguage:(NSString *)arg0;
+ (void *)createLanguageModelForLanguage:(NSString *)arg0 context:(NSString *)arg1;
+ (NSString *)synonymizerForLanguage:(NSString *)arg0 keyboardLanguage:(NSString *)arg1 context:(NSString *)arg2;

- (void)dealloc;
- (void).cxx_destruct;
- (RKSynonymizer *)initWithSynonymLanguage:(NSString *)arg0 keyboardLanguage:(NSString *)arg1 context:(NSString *)arg2 synonymDictionary:(NSDictionary *)arg3 wordIDDictionary:(NSDictionary *)arg4;
- (char)scoreForString:(NSString *)arg0 score:(double *)arg1;
- (NSString *)synonymsForString:(NSString *)arg0;
- (id)preferredSynonymFromSynonyms:(id)arg0 forString:(NSString *)arg1;
- (NSString *)synonymForString:(NSString *)arg0;

@end
