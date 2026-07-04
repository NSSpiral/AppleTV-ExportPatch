/* Runtime dump - EDPivotAreaReference
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotAreaReference : NSObject
{
    BOOL mByPosition;
    BOOL mRelative;
    BOOL mSelected;
    unsigned long mFieldId;
    unsigned long mCount;
}

+ (NSObject *)pivotAreaReference;

- (unsigned long)count;
- (EDPivotAreaReference *)init;
- (void)setCount:(unsigned long)arg0;
- (void)setSelected:(BOOL)arg0;
- (BOOL)selected;
- (void)setRelative:(BOOL)arg0;
- (BOOL)relative;
- (unsigned long)fieldId;
- (void)setFieldId:(unsigned long)arg0;
- (BOOL)byPosition;
- (void)setByPosition:(BOOL)arg0;

@end
