/* Runtime dump - TSWPCitationRecord
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPCitationRecord : TSPObject
{
    char _hideAuthorNames;
    char _hideYear;
    char _shouldRemove;
    char _recordXMLApplied;
    NSString * _endNoteXML;
    NSString * _pageRange;
    NSString * _prefix;
    NSString * _suffix;
    NSString * _authorsString;
    NSString * _title;
    NSString * _year;
    NSString * _type;
}

@property (copy, nonatomic) NSString * endNoteXML;
@property (nonatomic) char hideAuthorNames;
@property (nonatomic) char hideYear;
@property (copy, nonatomic) NSString * pageRange;
@property (copy, nonatomic) NSString * prefix;
@property (copy, nonatomic) NSString * suffix;
@property (copy, nonatomic) NSString * authorsString;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * year;
@property (copy, nonatomic) NSString * type;
@property (nonatomic) char shouldRemove;
@property (readonly, nonatomic) NSString * cacheKey;
@property (nonatomic) char recordXMLApplied;

- (TSWPCitationRecord *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)p_copyPropertiesToObject:(NSObject *)arg0;
- (NSString *)endNoteXML;
- (char)hideAuthorNames;
- (char)hideYear;
- (char)recordXMLApplied;
- (void)p_applyEndNoteXML;
- (NSString *)authorsString;
- (NSString *)authorYearString;
- (void)setEndNoteXML:(NSString *)arg0;
- (void)setHideAuthorNames:(char)arg0;
- (void)setHideYear:(char)arg0;
- (void)setAuthorsString:(NSString *)arg0;
- (char)shouldRemove;
- (void)setShouldRemove:(char)arg0;
- (void)setRecordXMLApplied:(char)arg0;
- (char)isRecordEqual:(id)arg0;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)title;
- (TSWPCitationRecord *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)cacheKey;
- (NSString *)year;
- (void)setYear:(NSString *)arg0;
- (NSString *)pageRange;
- (void)setPageRange:(NSString *)arg0;
- (NSString *)suffix;
- (void)setSuffix:(NSString *)arg0;
- (NSString *)prefix;
- (void)setPrefix:(NSString *)arg0;

@end
