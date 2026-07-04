/* Runtime dump - EDProcessor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDProcessor : NSObject
{
    EDWorkbook * mWorkbook;
    EDResources * mResources;
    NSMutableArray * mObjects;
}

- (void)dealloc;
- (BOOL)isObjectSupported:(id)arg0;
- (void)applyProcessorToObject:(NSObject *)arg0 sheet:(NSObject *)arg1;
- (EDProcessor *)initWithWorkbook:(EDWorkbook *)arg0;
- (void)markObjectForPostProcessing:(id)arg0;
- (void)applyProcessorWithSheet:(NSObject *)arg0;

@end
