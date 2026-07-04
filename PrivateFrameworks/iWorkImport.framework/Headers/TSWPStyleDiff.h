/* Runtime dump - TSWPStyleDiff
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStyleDiff : TSPObject
{
    TSWPCharacterStylePropertyChangeSet * _changeSet;
    TSSStyle * _style;
    char _definedChangeSet;
    char _definedStyle;
    TSSStylePropertyChangeSet * _previouslyAppliedChangeSet;
}

@property (retain, nonatomic) TSSStyle * style;
@property (retain, nonatomic) TSSStylePropertyChangeSet * previouslyAppliedChangeSet;
@property (retain, nonatomic) TSSStylePropertyChangeSet * changeSet;

- (TSWPStyleDiff *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)didInitFromSOS;
- (void)saveToArchive:(struct StyleDiffArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct StyleDiffArchive *)arg0 unarchiver:(struct StyleDiffArchive)arg1;
- (TSWPStyleDiff *)initWithContext:(NSObject *)arg0 changeSet:(TSSStylePropertyChangeSet *)arg1;
- (TSWPStyleDiff *)initWithContext:(NSObject *)arg0 style:(TSSStyle *)arg1;
- (id)styleDiffForTable:(int)arg0 storage:(TSWPStorage *)arg1 currentObject:(NSObject<OS_xpc_object> *)arg2;
- (TSSStylePropertyChangeSet *)changeSet;
- (NSArray *)changedPropertyNames;
- (void)setChangeSet:(TSSStylePropertyChangeSet *)arg0;
- (void)setPreviouslyAppliedChangeSet:(TSSStylePropertyChangeSet *)arg0;
- (char)isEqualToStyleDiff:(id)arg0;
- (TSSStylePropertyChangeSet *)previouslyAppliedChangeSet;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSSStyle *)style;
- (void)setStyle:(TSSStyle *)arg0;

@end
