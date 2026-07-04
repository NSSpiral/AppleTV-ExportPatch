/* Runtime dump - TCFontFamily
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCFontFamily : NSObject
{
    NSDictionary * _namesByLanguage;
    NSArray * _members;
}

@property (readonly, nonatomic) NSDictionary * namesByLanguage;
@property (readonly, nonatomic) NSArray * members;

- (void)dealloc;
- (NSString *)description;
- (TCFontFamily *)initWithDictionary:(NSDictionary *)arg0;
- (NSDictionary *)equivalentDictionary;
- (NSDictionary *)namesByLanguage;
- (NSArray *)members;
- (TCFontFamily *)initWithNamesByLanguage:(NSDictionary *)arg0 members:(NSArray *)arg1;
- (id)bestMatchForStyling:(struct TCFontStyling)arg0;
- (NSString *)memberForPSName:(NSString *)arg0;
- (NSString *)memberForFullName:(NSString *)arg0;
- (UIFont *)variantByAddingItalicToFont:(UIFont *)arg0;
- (UIFont *)variantByAddingBoldToFont:(UIFont *)arg0;
- (UIFont *)variantByRemovingItalicFromFont:(UIFont *)arg0;
- (char)fontIsDesignatedBold:(id)arg0;
- (UIFont *)variantByRemovingBoldFromFont:(UIFont *)arg0;

@end
