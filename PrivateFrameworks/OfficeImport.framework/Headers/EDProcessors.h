/* Runtime dump - EDProcessors
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDProcessors : NSObject
{
    EDWorkbook * mWorkbook;
    NSMutableArray * mProcessors;
}

- (void)dealloc;
- (void)removeAllObjects;
- (void)markObject:(NSObject *)arg0 processor:(Class)arg1;
- (EDProcessors *)initWithWorkbook:(EDWorkbook *)arg0;
- (void)addProcessorClass:(Class)arg0;
- (BOOL)hasProcessors;
- (void)removeProcessorClass:(Class)arg0;
- (void)applyProcessorsWithSheet:(NSObject *)arg0;

@end
