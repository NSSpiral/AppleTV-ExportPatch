/* Runtime dump - TSTFilteredTableDynamicContentDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFilteredTableDynamicContentDelegate : NSObject <TSTLayoutDynamicContentProtocol>
{
    TSTTableModel * mTableModel;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSTFilteredTableDynamicContentDelegate *)initWithTableModel:(TSTTableModel *)arg0;
- (char)cell:(id *)arg0 forCellID:(struct ?)arg1;
- (char)dynamicContentMustDrawOnMainThread;
- (void)dealloc;

@end
