/* Runtime dump - ODDDataPoint
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDDataPoint : ODDPoint
{
    NSMutableArray * mPresentations;
}

- (void)dealloc;
- (id)presentations;
- (void)addPresentation:(OISFUZipArchiveMemoryDataRepresentation *)arg0 order:(unsigned int)arg1;
- (void)addAssociatedPresentation:(id)arg0;

@end
