/* Runtime dump - EBSheetContext
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBSheetContext : NSObject <OCDDelayedNodeContext>
{
    EBReaderSheetState * mSheetState;
    unsigned int mSheetIndex;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (BOOL)loadDelayedNode:(OCDDelayedNode *)arg0;
- (EBSheetContext *)initWithSheetIndex:(unsigned int)arg0 state:(NSObject *)arg1;

@end
