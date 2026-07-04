/* Runtime dump - GQDTTable
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTTable : GQDGraphic <GQDNameMappable>
{
    GQDTTableModel * mModel;
    GQDSStyle * mStyle;
    char mIsStreamed;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (int)walkTableWithGenerator:(Class)arg0 state:(NSObject *)arg1;
- (void)setTableStyle:(TSTTableStyle *)arg0;
- (char)isStreamed;
- (NSObject *)defaultVectorStyleForVectorType:(int)arg0;
- (void)dealloc;
- (ABModel *)model;
- (void)setModel:(NSObject *)arg0;
- (TSTTableStyle *)tableStyle;

@end
