/* Runtime dump - EDStylesCollection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDStylesCollection : EDCollection
{
    unsigned int mDefaultWorkbookStyleIndex;
}

- (EDStylesCollection *)init;
- (unsigned int)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (void)replaceObjectAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg0;
- (NSObject *)defaultWorkbookStyle;
- (void)setDefaultWorkbookStyleIndex:(unsigned int)arg0;
- (unsigned int)defaultWorkbookStyleIndex;

@end
