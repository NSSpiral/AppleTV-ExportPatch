/* Runtime dump - PMState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMState : CMState
{
    CMOutlineState * mListState;
    OADTablePartStyle * mCurrentRowStyle;
}

- (void)dealloc;
- (PMState *)init;
- (NSObject *)currentRowStyle;
- (NSObject *)listState;
- (void)setCurrentRowStyle:(NSObject *)arg0;

@end
