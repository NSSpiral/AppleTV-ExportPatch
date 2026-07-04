/* Runtime dump - ABRecordMerger
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABRecordMerger : NSObject

+ (void)_addValue:(void *)arg0 withProperty:(int)arg1 toExistingValues:(struct __CFSet *)arg2;
+ (char)_addMultiValueEntry:(void *)arg0 atIndex:(long)arg1 toMultiValue:(void *)arg2 withProperty:(int)arg3 existingValues:(struct __CFSet *)arg4;
+ (char)_propertiesArray:(NSArray *)arg0 containsProperty:(int)arg1;
+ (char)mergeMultiValueProperty:(int)arg0 fromRecord:(void *)arg1 intoRecord:(void *)arg2;
+ (char)_mergeSingleValueProperty:(int)arg0 fromRecord:(void *)arg1 intoRecord:(void *)arg2;
+ (void)mergeVCardRecord:(void *)arg0 withProperties:(struct __CFArray *)arg1 intoRecord:(void *)arg2;

@end
