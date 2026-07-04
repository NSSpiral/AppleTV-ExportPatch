/* Runtime dump - EDTableColumn
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTableColumn : NSObject
{
    EDResources * mResources;
    unsigned int mHeaderRowDxfIndex;
    unsigned int mTotalsRowDxfIndex;
    unsigned int mDataAreaDxfIndex;
    EDString * mName;
    EDString * mUniqueName;
    EDString * mTotalsRowLabel;
}

+ (NSArray *)tableColumnWithResources:(NSArray *)arg0;

- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)uniqueName;
- (EDTableColumn *)initWithResources:(NSArray *)arg0;
- (id)headerRowDxf;
- (void)setHeaderRowDxf:(id)arg0;
- (id)totalsRowDxf;
- (void)setTotalsRowDxf:(id)arg0;
- (id)dataAreaDxf;
- (void)setDataAreaDxf:(id)arg0;
- (unsigned int)headerRowDxfIndex;
- (void)setHeaderRowDxfIndex:(unsigned int)arg0;
- (unsigned int)totalsRowDxfIndex;
- (void)setTotalsRowDxfIndex:(unsigned int)arg0;
- (unsigned int)dataAreaDxfIndex;
- (void)setDataAreaDxfIndex:(unsigned int)arg0;
- (NSString *)totalsRowLabel;
- (void)setUniqueName:(NSString *)arg0;
- (void)setTotalsRowLabel:(NSString *)arg0;

@end
