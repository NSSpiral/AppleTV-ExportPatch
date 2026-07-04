/* Runtime dump - GQDTTableModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTTableModel : NSObject <GQDNameMappable>
{
    unsigned short mColumnCount;
    unsigned short mRowCount;
    struct __CFString * mName;
    char mNameVisible;
    struct __CFArray * mColumnWidths;
    struct __CFArray * mRowHeights;
    struct __CFArray * mColumnVisibilities;
    struct __CFArray * mRowVisibilities;
    unsigned short mHeaderRowCount;
    unsigned short mHeaderColumnCount;
    unsigned short mFooterRowCount;
    struct __CFArray * mCells;
    struct __CFArray * mColumnGroupDisplayTypes;
    int mNumGroupLevels;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (unsigned short)headerColumnCount;
- (unsigned short)footerRowCount;
- (void)setCells:(struct __CFArray *)arg0;
- (int)readAttributesForModel:(struct _xmlTextReader *)arg0;
- (int)readAttributesForGrid:(struct _xmlTextReader *)arg0;
- (int)addColumnWidthFrom:(struct _xmlTextReader *)arg0;
- (int)addRowHeightFrom:(struct _xmlTextReader *)arg0;
- (int)addGroupLevelsFrom:(struct _xmlTextReader *)arg0;
- (BOOL)visibilityForColumn:(unsigned short)arg0;
- (char)isNameVisible;
- (float)widthForColumn:(unsigned short)arg0;
- (float)heightForRow:(unsigned short)arg0;
- (BOOL)visibilityForRow:(unsigned short)arg0;
- (int)typeOfVectorAlongGridline:(unsigned short)arg0 offset:(unsigned short)arg1 length:(unsigned short)arg2 vertical:(char)arg3;
- (char)hasGroupDisplayType:(unsigned short)arg0 level:(int)arg1 displayType:(int *)arg2 isTypeVisible:(char *)arg3;
- (unsigned short)firstVisibleColumn;
- (int)numGroupLevels;
- (void)setNumGroupLevels:(int)arg0;
- (void)dealloc;
- (struct __CFString *)name;
- (unsigned short)columnCount;
- (unsigned short)rowCount;
- (id)cellAt:(unsigned short)arg0;
- (unsigned short)headerRowCount;
- (struct __CFArray *)cells;

@end
