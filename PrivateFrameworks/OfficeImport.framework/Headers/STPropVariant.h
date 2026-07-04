/* Runtime dump - STPropVariant
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface STPropVariant : NSObject
{
    struct _SsrwPropVariant mProp;
}

- (void)dealloc;
- (void)setStringValue:(NSString *)arg0;
- (void)setLongValue:(long)arg0;
- (void)setShortValue:(short)arg0;
- (void)setBlobValue:(id)arg0;
- (struct _SsrwPropVariant *)propVariant;
- (NSObject *)asDataOfType:(int *)arg0;

@end
