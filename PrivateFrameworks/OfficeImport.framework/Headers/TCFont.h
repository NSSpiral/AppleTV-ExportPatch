/* Runtime dump - TCFont
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCFont : NSObject
{
    NSDictionary * _namesByLanguage;
    NSString * _psName;
    TCFontFamily * _family;
    struct TCFontStyling _styling;
}

@property (readonly, nonatomic) NSDictionary * namesByLanguage;
@property (readonly, nonatomic) NSString * psName;
@property (readonly, nonatomic) struct TCFontStyling styling;
@property (nonatomic) TCFontFamily * family;

- (void)dealloc;
- (NSString *)description;
- (TCFont *)initWithDictionary:(NSDictionary *)arg0;
- (void).cxx_construct;
- (NSDictionary *)equivalentDictionary;
- (NSDictionary *)namesByLanguage;
- (NSString *)psName;
- (struct TCFontStyling)styling;
- (TCFont *)initWithNamesByLanguage:(NSDictionary *)arg0 psName:(NSString *)arg1 styling:(struct TCFontStyling)arg2;
- (NSString *)localizedFontName;
- (TCFontFamily *)family;
- (void)setFamily:(TCFontFamily *)arg0;

@end
