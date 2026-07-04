/* Runtime dump - SCRCMathTableCellExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathTableCellExpression : SCRCMathRowExpression
{
    char _didGetTablePosition;
    unsigned int _rowIndex;
    unsigned int _columnIndex;
    unsigned int _tableRowCount;
    unsigned int _tableColumnCount;
}

- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1;
- (NSObject *)speakableSegmentsWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 treePosition:(NSObject *)arg2;
- (NSString *)mathMLTag;
- (NSObject *)prefixForChildAtIndex:(unsigned int)arg0;
- (NSObject *)suffixForChildAtIndex:(unsigned int)arg0;
- (void)_getTableDataIfNecessary;
- (NSObject *)_prefixForCell;
- (NSObject *)_suffixForCell;

@end
