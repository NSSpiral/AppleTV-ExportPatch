/* Runtime dump - PBHeadersFooters
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBHeadersFooters : NSObject

+ (struct PptHeadersFootersAtom *)headersFootersAtomWithHeadersFootersContainer:(int)arg0;
+ (void)readHeaderFooterTextFromHeadersFootersContainer:(NSObject *)arg0 toPlaceholderShape:(id)arg1;
+ (NSObject *)headersFootersContainerWithSlideContainer:(NSObject *)arg0 state:(NSObject *)arg1;
+ (void)addCopyOfHeaderFooterPlaceholderOfType:(int)arg0 toDrawables:(TPFloatingDrawables *)arg1 slideBase:(PXSlideBase *)arg2 headersFootersContainer:(NSObject *)arg3 state:(NSObject *)arg4;
+ (void)readHeadersFootersToMasterSlide:(id)arg0 drawables:(NSArray *)arg1 state:(NSObject *)arg2;
+ (void)readHeadersFootersToSlideLayout:(NSObject *)arg0 drawables:(NSArray *)arg1 state:(NSObject *)arg2;
+ (void)readHeadersFootersFromSlideContainer:(NSObject *)arg0 toSlide:(MPSlide *)arg1 drawables:(NSArray *)arg2 state:(NSObject *)arg3;

@end
