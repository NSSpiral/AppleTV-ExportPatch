/* Runtime dump - EDContentFormatsCollection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDContentFormatsCollection : EDKeyedCollection
{
    unsigned int mNextContentFormatId;
}

- (EDContentFormatsCollection *)init;
- (unsigned int)addObject:(struct objc_method *)arg0;
- (unsigned int)addOrEquivalentObject:(NSObject *)arg0;
- (void)setupDefaults;
- (void)addDefaultWithNSString:(NSString *)arg0 formatId:(unsigned int)arg1;
- (BOOL)isOverwritingKeyOK;

@end
