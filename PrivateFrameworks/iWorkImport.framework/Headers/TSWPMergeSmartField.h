/* Runtime dump - TSWPMergeSmartField
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPMergeSmartField : TSWPPlaceholderSmartField
{
    NSString * _property;
    NSString * _label;
    NSString * _key;
    int _category;
    char _requiresFollowingWhitespace;
    NSString * _whitespace;
    NSString * _guid;
    NSString * _tableField;
}

@property (copy, nonatomic) NSString * property;
@property (copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSString * key;
@property (nonatomic) int category;
@property (nonatomic) char requiresFollowingWhitespace;
@property (copy, nonatomic) NSString * whitespace;
@property (copy, nonatomic) NSString * guid;
@property (copy, nonatomic) NSString * tableField;

- (TSWPMergeSmartField *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (int)smartFieldKind;
- (char)allowsPasteAsSmartField;
- (struct PlaceholderSmartFieldArchive *)placeholderSmartFieldArchiveFromUnarchiver:(id)arg0;
- (NSString *)scriptTag;
- (void)setRequiresFollowingWhitespace:(char)arg0;
- (void)setWhitespace:(NSString *)arg0;
- (void)setTableField:(NSString *)arg0;
- (char)requiresFollowingWhitespace;
- (NSString *)whitespace;
- (NSString *)tableField;
- (void)dealloc;
- (NSString *)key;
- (void)setCategory:(int)arg0;
- (int)category;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void)setKey:(NSString *)arg0;
- (void)setGuid:(NSString *)arg0;
- (NSString *)guid;
- (NSString *)property;
- (void)setProperty:(NSString *)arg0;

@end
