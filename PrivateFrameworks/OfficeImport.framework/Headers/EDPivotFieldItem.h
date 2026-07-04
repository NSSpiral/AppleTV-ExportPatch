/* Runtime dump - EDPivotFieldItem
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotFieldItem : NSObject
{
    BOOL mChildItems;
    BOOL mExpanded;
    BOOL mCalculatedMember;
    BOOL mMissed;
    BOOL mHidden;
    BOOL mDetailsHidden;
    int mType;
    unsigned long mItemIndex;
}

+ (NSObject *)pivotFieldItem;

- (void)setHidden:(BOOL)arg0;
- (EDPivotFieldItem *)init;
- (void)setType:(int)arg0;
- (int)type;
- (void)setExpanded:(BOOL)arg0;
- (BOOL)expanded;
- (BOOL)childItems;
- (void)setChildItems:(BOOL)arg0;
- (BOOL)calculatedMember;
- (void)setCalculatedMember:(BOOL)arg0;
- (BOOL)missed;
- (void)setMissed:(BOOL)arg0;
- (BOOL)detailsHidden;
- (void)setDetailsHidden:(BOOL)arg0;
- (unsigned long)itemIndex;
- (void)setItemIndex:(unsigned long)arg0;
- (BOOL)hidden;

@end
