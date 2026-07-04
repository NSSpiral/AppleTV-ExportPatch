/* Runtime dump - GQHStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHStyle : NSObject
{
    struct __CFDictionary * mStyles;
    struct __CFString * mCssClassAttribute;
    struct __CFString * mCachedCssStyleName;
}

+ (void)createBaseStyleClassString:(NSString *)arg0 classString:(struct __CFString * *)arg1 classType:(struct __CFString)arg2 state:(Class)arg3;
+ (void)setSingleStyleAttribute:(struct __CFString *)arg0 value:(struct __CFString *)arg1 node:(BWNode *)arg2;
+ (void)appendParentClass:(struct __CFString * *)arg0 style:(struct __CFString)arg1 classType:(int)arg2 state:(Class)arg3;
+ (void)createBaseStyleClassesString:(struct __CFArray *)arg0 classString:(struct __CFString * *)arg1 classTypes:(struct __CFString)arg2 state:(struct __CFArray *)arg3;
+ (void)setSingleStyleAttribute:(struct __CFString *)arg0 intValue:(int)arg1 node:(BWNode *)arg2;
+ (void)setSingleStyleAttribute:(struct __CFString *)arg0 pxValue:(int)arg1 node:(BWNode *)arg2;

- (void)addAttribute:(struct __CFString *)arg0 value:(struct __CFString *)arg1;
- (void)setStyleOnCurrentNode:(NSObject *)arg0;
- (void)addAttribute:(struct __CFString *)arg0 intValue:(int)arg1;
- (void)setStyleOnCurrentNode:(NSObject *)arg0 mappingBaseStyleClass:(NSObject *)arg1 baseClassType:(Class)arg2;
- (void)addAttribute:(struct __CFString *)arg0 pxValue:(int)arg1;
- (struct __CFString *)createNamedStyle:(struct __CFString *)arg0;
- (char)getAttribute:(struct __CFString *)arg0 value:(struct __CFString * *)arg1;
- (char)getAttribute:(struct __CFString *)arg0 trblValue:(id *)arg1;
- (void)addAttribute:(struct __CFString *)arg0 trblValue:(id)arg1;
- (char)getAttribute:(struct __CFString *)arg0 intValue:(int *)arg1;
- (void)setStyleOnCurrentNode:(NSObject *)arg0 mappingBaseStyleClasses:(struct __CFArray *)arg1 baseClassTypes:(struct __CFArray *)arg2;
- (void)setupCssClassAttribute:(NSObject *)arg0;
- (void)addAttribute:(struct __CFString *)arg0 ptValue:(int)arg1;
- (void)addClass:(struct __CFString *)arg0;
- (void)dealloc;
- (GQHStyle *)init;

@end
