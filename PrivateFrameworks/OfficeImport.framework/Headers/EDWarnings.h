/* Runtime dump - EDWarnings
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDWarnings : NSObject
{
    struct __CFArray * mWarnings;
}

- (void)dealloc;
- (EDWarnings *)init;
- (void)addWarning:(struct TCTaggedMessageStructure *)arg0;
- (void)reportWarningsWithAssociatedObject:(NSObject *)arg0;

@end
