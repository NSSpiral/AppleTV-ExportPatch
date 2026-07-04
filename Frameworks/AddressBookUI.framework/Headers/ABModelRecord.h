/* Runtime dump - ABModelRecord
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABModelRecord : NSObject
{
    int _recordID;
    struct __CFString * _sortKey;
    long _highlightIndex;
    char _isGroup;
    NSArray * _namePieces;
}

- (ABModelRecord *)initWithRecordID:(int)arg0 highlightIndex:(long)arg1 group:(char)arg2 namePieces:(NSArray *)arg3 sortKey:(struct __CFString *)arg4;
- (long)highlightIndex;
- (NSArray *)namePieces;
- (struct __CFString *)sortKey;
- (void)dealloc;
- (char)isGroup;
- (int)recordID;

@end
