/* Runtime dump - EDColumnInfo
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject>
{
    EDResources * mResources;
    EDWorksheet * mWorksheet;
    int mWidth;
    BOOL mHidden;
    EDReference * mRange;
    unsigned int mStyleIndex;
    unsigned char mOutlineLevel;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)columnInfoWithResources:(NSArray *)arg0 worksheet:(EDWorksheet *)arg1;

- (void)dealloc;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)arg0;
- (int)key;
- (EDColumnInfo *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)style;
- (void)setStyle:(NSObject *)arg0;
- (double)width;
- (struct _PTPRange)range;
- (void)setWidth:(double)arg0;
- (void)setRange:(NSObject *)arg0;
- (unsigned int)styleIndex;
- (void)setStyleIndex:(unsigned int)arg0;
- (EDColumnInfo *)initWithResources:(NSArray *)arg0 worksheet:(EDWorksheet *)arg1;
- (void)setWidthInXlUnits:(int)arg0;
- (void)setRangeWithFirstColumn:(int)arg0 lastColumn:(int)arg1;
- (void)setOutlineLevel:(unsigned char)arg0;
- (int)widthInXlUnits;
- (unsigned char)outlineLevel;

@end
