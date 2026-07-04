/* Runtime dump - GQHTable
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHTable : GQHGraphicStyle <GQTableGenerator>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)beginTable:(id)arg0 state:(NSObject *)arg1;
+ (int)beginCells:(id)arg0 state:(NSObject *)arg1;
+ (int)handleCell:(NSObject *)arg0 state:(NSObject *)arg1;
+ (int)endCells:(id)arg0 state:(NSObject *)arg1;
+ (int)endTable:(id)arg0 state:(NSObject *)arg1;
+ (int)mapCellContent:(NSObject *)arg0 xml:(char)arg1 state:(NSObject *)arg2;
+ (void)splitTable:(id)arg0;
+ (void)getVectorStylesForRowIndex:(unsigned short)arg0 rowSpan:(unsigned short)arg1 columnIndex:(unsigned short)arg2 columnSpan:(unsigned short)arg3 vectorStyles:(id *)arg4 state:(NSObject *)arg5;
+ (void)mapVectorStyles:(id *)arg0 toCellStyle:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)addMissingCellWithRowIndex:(unsigned short)arg0 columnIndex:(unsigned short)arg1 state:(NSObject *)arg2;
+ (void)beginRowWithIndex:(unsigned short)arg0 state:(NSObject *)arg1;
+ (void)addMissingCellsUpToRowIndex:(unsigned short)arg0 columnIndex:(unsigned short)arg1 state:(NSObject *)arg2;
+ (struct __CFString *)createTableAttachmentIdWithNumber:(long)arg0;
+ (void)startTableWithTableAnchor:(struct __CFString *)arg0 tableHeight:(float)arg1 state:(NSObject *)arg2;
+ (unsigned short)resolveGroupLevel:(id)arg0 model:(NSObject *)arg1 columnIndex:(int)arg2 tableState:(NSObject *)arg3;
+ (void)mapCellStyle:(NSObject *)arg0 rowIndex:(unsigned short)arg1 rowSpan:(unsigned short)arg2 columnIndex:(unsigned short)arg3 columnSpan:(unsigned short)arg4 state:(NSObject *)arg5 cell:(NSObject *)arg6 level:(unsigned short)arg7;
+ (NSObject *)mapBaseFillStyleForRowIndex:(unsigned short)arg0 columnIndex:(unsigned short)arg1 state:(NSObject *)arg2 isGroupingCell:(char)arg3;
+ (char *)name;

@end
