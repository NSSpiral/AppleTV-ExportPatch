/* Runtime dump - EDPivotArea
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotArea : NSObject
{
    BOOL mGrandCol;
    BOOL mGrandRow;
    BOOL mOutline;
    int mType;
    EDCollection * mReferences;
    EDReference * mOffset;
}

+ (EDPivotArea *)pivotArea;

- (void)dealloc;
- (EDPivotArea *)init;
- (void)setType:(int)arg0;
- (int)type;
- (void)setOffset:(NSSet *)arg0;
- (NSSet *)offset;
- (NSArray *)references;
- (BOOL)grandRow;
- (void)setGrandRow:(BOOL)arg0;
- (BOOL)grandCol;
- (void)setGrandCol:(BOOL)arg0;
- (BOOL)outline;
- (void)setOutline:(BOOL)arg0;

@end
