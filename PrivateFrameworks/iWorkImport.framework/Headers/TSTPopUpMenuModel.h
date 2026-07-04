/* Runtime dump - TSTPopUpMenuModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTPopUpMenuModel : TSPObject <TSUMultipleChoiceListChoiceProviding>
{
    NSArray * mItems;
}

+ (char)needsObjectUUID;
+ (NSString *)p_cellValueFromCellWithCustomFormat:(TSUCustomFormat *)arg0 locale:(NSObject *)arg1;
+ (NSObject *)p_cellValueFromCell:(NSObject *)arg0 locale:(NSObject *)arg1;
+ (void)p_appendChoices:(id)arg0 uniquelyToChoices:(id)arg1;
+ (NSString *)p_PopUpMenuModelDefaultWithContext:(NSObject *)arg0 locale:(NSObject *)arg1;
+ (TSTPopUpMenuModel *)popupMenuModelFromTable:(id)arg0 region:(NSObject *)arg1 initialValue:(int *)arg2 overflow:(char *)arg3;
+ (NSObject *)popupMenuModelDeletingItemFromModel:(NSObject *)arg0 index:(unsigned int)arg1;
+ (NSObject *)popupMenuModelEditingItemInModel:(NSObject *)arg0 index:(unsigned int)arg1 newContent:(NSObject *)arg2;
+ (NSObject *)popupMenuModelReorderingModel:(NSObject *)arg0 fromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;

- (TSTPopUpMenuModel *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct PopUpMenuModel *)arg0 archiver:(NSObject *)arg1;
- (int)valueTypeOfItemAtIndex:(unsigned int)arg0;
- (NSString *)popUpItemFromString:(NSString *)arg0;
- (struct ?)formatAtIndex:(struct ?)arg0;
- (NSDate *)popUpItemFromDate:(NSDate *)arg0 format:(struct ?)arg1;
- (NSNumber *)popUpItemFromNumber:(double)arg0 format:(struct ?)arg1;
- (TSTPopUpMenuModel *)initWithItems:(NSArray *)arg0 context:(NSObject *)arg1;
- (void)loadFromArchive:(struct PopUpMenuModel *)arg0;
- (char)isEqualToChoices:(id)arg0;
- (char)booleanAtIndex:(unsigned int)arg0;
- (int)p_mcListTypeForArgType:(int)arg0;
- (int)p_mcListTypeOfListItem:(NSObject *)arg0;
- (NSObject *)p_listItemAtIndex:(unsigned int)arg0;
- (double)p_numberForListItem:(NSObject *)arg0;
- (NSObject *)p_stringForListItem:(NSObject *)arg0;
- (NSObject *)p_dateForListItem:(NSObject *)arg0;
- (char)p_booleanForListItem:(NSObject *)arg0;
- (NSObject *)displayStringAtIndex:(unsigned int)arg0;
- (id)popUpItemFromBoolean:(char)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSObject *)stringAtIndex:(unsigned int)arg0;
- (double)numberAtIndex:(unsigned int)arg0;
- (NSObject *)dateAtIndex:(unsigned int)arg0;
- (NSArray *)choices;

@end
