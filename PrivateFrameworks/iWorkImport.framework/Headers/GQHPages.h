/* Runtime dump - GQHPages
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHPages : NSObject <GQPagesGenerator>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)handlePageSetup:(id)arg0 state:(NSObject *)arg1;
+ (int)handleStylesheet:(NSObject *)arg0 state:(NSObject *)arg1;
+ (void)mapCurrentHiddenPositioningFooterFromPublication:(NSObject *)arg0 state:(NSObject *)arg1;
+ (void)handlePagesOrders:(id)arg0;
+ (void)mapHeaderOrFooter:(id)arg0 isHeader:(char)arg1 toPublication:(NSObject *)arg2 state:(NSObject *)arg3;
+ (int)beginPublication:(NSObject *)arg0 state:(NSObject *)arg1;
+ (int)endPublication:(NSObject *)arg0 state:(NSObject *)arg1;
+ (Class)enterMainDrawablesForPage:(unsigned int)arg0 state:(NSObject *)arg1;
+ (Class)enterBodyStorage:(id)arg0;
+ (int)handleHeaders:(struct __CFArray *)arg0 state:(NSObject *)arg1;
+ (int)handleFooters:(struct __CFArray *)arg0 state:(NSObject *)arg1;
+ (int)handleSectionStyle:(NSObject *)arg0 pageIndex:(int)arg1 numPages:(int)arg2 state:(NSObject *)arg3;
+ (int)setCurrentPageIndex:(int)arg0 state:(NSObject *)arg1;
+ (void)mapCurrentHeaderAndFooterFromPublication:(NSObject *)arg0 state:(NSObject *)arg1;
+ (void)handleZOrder:(unsigned int)arg0 cssClassName:(struct __CFString *)arg1 state:(NSObject *)arg2;

@end
