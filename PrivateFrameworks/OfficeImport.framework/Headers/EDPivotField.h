/* Runtime dump - EDPivotField
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotField : NSObject
{
    int mAxis;
    BOOL mCompact;
    BOOL mDataField;
    BOOL mShowDefaultSubTotal;
    BOOL mInsertBlankRow;
    BOOL mOutlineItems;
    BOOL mShowAllItems;
    BOOL mSubtotalTop;
    unsigned long mNumFmtId;
    EDCollection * mPivotFieldItems;
}

+ (EDPivotField *)pivotField;

- (void)dealloc;
- (EDPivotField *)init;
- (int)axis;
- (void)setAxis:(int)arg0;
- (BOOL)dataField;
- (void)setDataField:(BOOL)arg0;
- (BOOL)showDefaultSubTotal;
- (void)setShowDefaultSubTotal:(BOOL)arg0;
- (BOOL)insertBlankRow;
- (void)setInsertBlankRow:(BOOL)arg0;
- (BOOL)outlineItems;
- (void)setOutlineItems:(BOOL)arg0;
- (BOOL)showAllItems;
- (void)setShowAllItems:(BOOL)arg0;
- (BOOL)subtotalTop;
- (void)setSubtotalTop:(BOOL)arg0;
- (unsigned long)numFmtId;
- (void)setNumFmtId:(unsigned long)arg0;
- (NSArray *)pivotFieldItems;
- (BOOL)compact;
- (void)setCompact:(BOOL)arg0;

@end
