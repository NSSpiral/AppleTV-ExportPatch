/* Runtime dump - TCFontName
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCFontName : NSObject
{
    NSString * _styleName;
    NSString * _fullName;
}

@property (readonly, nonatomic) NSString * styleName;
@property (readonly, nonatomic) NSString * fullName;

- (void)dealloc;
- (NSString *)description;
- (TCFontName *)initWithDictionary:(NSDictionary *)arg0;
- (TCFontName *)initWithStyleName:(NSString *)arg0 fullName:(NSString *)arg1;
- (NSDictionary *)equivalentDictionary;
- (NSString *)fullName;
- (NSString *)styleName;

@end
