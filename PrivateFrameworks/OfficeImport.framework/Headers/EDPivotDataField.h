/* Runtime dump - EDPivotDataField
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotDataField : NSObject
{
    long mBaseField;
    unsigned long mBaseItem;
    unsigned long mFieldId;
    unsigned long mNumFmtId;
    NSString * mName;
    int mFormat;
}

+ (EDPivotDataField *)pivotDataField;

- (void)dealloc;
- (EDPivotDataField *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (unsigned long)numFmtId;
- (void)setNumFmtId:(unsigned long)arg0;
- (long)baseField;
- (void)setBaseField:(long)arg0;
- (unsigned long)baseItem;
- (void)setBaseItem:(unsigned long)arg0;
- (unsigned long)fieldId;
- (void)setFieldId:(unsigned long)arg0;
- (int)showDataAs;
- (void)setShowDataAs:(int)arg0;

@end
