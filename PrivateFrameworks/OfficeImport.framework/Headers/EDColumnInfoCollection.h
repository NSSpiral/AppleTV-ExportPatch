/* Runtime dump - EDColumnInfoCollection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDColumnInfoCollection : EDSortedCollection
{
    EDResources * mResources;
    EDWorksheet * mWorksheet;
}

- (void)dealloc;
- (NSNumber *)columnInfoForColumnNumber:(int)arg0;
- (EDColumnInfoCollection *)initWithResources:(NSArray *)arg0 worksheet:(EDWorksheet *)arg1;
- (NSNumber *)columnInfoCreateIfNilForColumnNumber:(int)arg0;

@end
