/* Runtime dump - EXSheetContext
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXSheetContext : NSObject <OCDDelayedNodeContext>
{
    EXReadState * mSheetState;
    NSURL * mPackageLocation;
    NSString * mType;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (BOOL)loadDelayedNode:(OCDDelayedNode *)arg0;
- (EXSheetContext *)initWithSheetLocation:(NSObject *)arg0 sheetXmlType:(NSObject *)arg1 state:(NSObject *)arg2;

@end
