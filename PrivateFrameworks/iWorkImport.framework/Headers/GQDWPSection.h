/* Runtime dump - GQDWPSection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPSection : NSObject
{
    struct __CFArray * mChildren;
    GQDSStyle * mStyle;
}

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (void)dealloc;
- (NSDictionary *)style;
- (struct __CFArray *)children;

@end
