/* Runtime dump - PLRevGeoCompoundNameInfo
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRevGeoCompoundNameInfo : NSObject
{
    char _isContinuation;
    char _suffixWhenPrefixOnly;
    NSString * _namePrefix;
    NSArray * _sortedNames;
    NSString * _nameSuffix;
}

@property (copy, nonatomic) NSString * namePrefix;
@property (copy, nonatomic) NSArray * sortedNames;
@property (copy, nonatomic) NSString * nameSuffix;
@property (nonatomic) char isContinuation;
@property (nonatomic) char suffixWhenPrefixOnly;
@property (readonly, copy, nonatomic) NSArray * localizedSortedNames;
@property (readonly, copy, nonatomic) NSString * localizedTitleForNameInfo;

+ (NSString *)_localizedNameForName:(NSString *)arg0;

- (void)dealloc;
- (NSString *)description;
- (PLRevGeoCompoundNameInfo *)initWithDictionary:(NSDictionary *)arg0;
- (NSArray *)sortedNames;
- (NSDictionary *)dictionaryForInfo;
- (void)setSortedNames:(NSArray *)arg0;
- (void)setNamePrefix:(NSString *)arg0;
- (NSString *)localizedTitleForNameInfo;
- (void)setIsContinuation:(char)arg0;
- (void)setNameSuffix:(NSString *)arg0;
- (void)setSuffixWhenPrefixOnly:(char)arg0;
- (NSArray *)localizedSortedNames;
- (NSString *)namePrefix;
- (NSString *)nameSuffix;
- (char)isContinuation;
- (char)suffixWhenPrefixOnly;

@end
